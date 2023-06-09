/*

Copyright (C) 1996-2018 John W. Eaton

This file is part of Octave.

Octave is free software: you can redistribute it and/or modify it
under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

Octave is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Octave; see the file COPYING.  If not, see
<https://www.gnu.org/licenses/>.

*/

#if ! defined (octave_ov_usr_fcn_h)
#define octave_ov_usr_fcn_h 1

#include "octave-config.h"

#include <ctime>

#include <string>
#include <stack>

#include "comment-list.h"
#include "ovl.h"
#include "ov-fcn.h"
#include "ov-typeinfo.h"
#include "symscope.h"
#include "unwind-prot.h"

class string_vector;

class octave_value;

namespace octave
{
  class file_info;
  class tree_parameter_list;
  class tree_statement_list;
  class tree_evaluator;
  class tree_expression;
  class tree_walker;
#if defined (HAVE_LLVM)
  class jit_function_info;
#endif

}

class
octave_user_code : public octave_function
{
protected:

  octave_user_code (const std::string& nm,
                    const octave::symbol_scope& scope = octave::symbol_scope (),
                    const std::string& ds = "")
    : octave_function (nm, ds), m_scope (scope), m_file_info (nullptr),
      curr_unwind_protect_frame (nullptr)
  { }

public:

  octave_user_code (void)
    : octave_function (), m_scope (), m_file_info (nullptr),
      curr_unwind_protect_frame (nullptr)
  { }

  // No copying!

  octave_user_code (const octave_user_code& f) = delete;

  octave_user_code& operator = (const octave_user_code& f) = delete;

  ~octave_user_code (void);

  bool is_user_code (void) const { return true; }

  octave::unwind_protect *
  unwind_protect_frame (void)
  {
    return curr_unwind_protect_frame;
  }

  std::string get_code_line (size_t line);

  std::deque<std::string> get_code_lines (size_t line, size_t num_lines);

  void cache_function_text (const std::string& text,
                            const octave::sys::time& timestamp);

  octave::symbol_scope scope (void) { return m_scope; }

  virtual std::map<std::string, octave_value> subfunctions (void) const;

  virtual octave::tree_statement_list * body (void) = 0;

protected:

  void get_file_info (void);

  // Our symbol table scope.
  octave::symbol_scope m_scope;

  // Cached text of function or script code with line offsets
  // calculated.
  octave::file_info *m_file_info;

  // pointer to the current unwind_protect frame of this function.
  octave::unwind_protect *curr_unwind_protect_frame;
};

// Scripts.

class
octave_user_script : public octave_user_code
{
public:

  octave_user_script (void);

  octave_user_script (const std::string& fnm, const std::string& nm,
                      const octave::symbol_scope& scope = octave::symbol_scope (),
                      octave::tree_statement_list *cmds = nullptr,
                      const std::string& ds = "");

  octave_user_script (const std::string& fnm, const std::string& nm,
                      const octave::symbol_scope& scope = octave::symbol_scope (),
                      const std::string& ds = "");

  // No copying!

  octave_user_script (const octave_user_script& f) = delete;

  octave_user_script& operator = (const octave_user_script& f) = delete;

  ~octave_user_script (void);

  octave_function * function_value (bool = false) { return this; }

  octave_user_script * user_script_value (bool = false) { return this; }

  octave_user_code * user_code_value (bool = false) { return this; }

  // Scripts and user functions are both considered "scripts" because
  // they are written in Octave's scripting language.

  bool is_user_script (void) const { return true; }

  void stash_fcn_file_name (const std::string& nm) { file_name = nm; }

  void mark_fcn_file_up_to_date (const octave::sys::time& t) { t_checked = t; }

  void stash_fcn_file_time (const octave::sys::time& t)
  {
    t_parsed = t;
    mark_fcn_file_up_to_date (t);
  }

  std::string fcn_file_name (void) const { return file_name; }

  octave::sys::time time_parsed (void) const { return t_parsed; }

  octave::sys::time time_checked (void) const { return t_checked; }

  octave_value_list
  call (octave::tree_evaluator& tw, int nargout = 0,
        const octave_value_list& args = octave_value_list ());

  octave::tree_statement_list * body (void) { return cmd_list; }

  void accept (octave::tree_walker& tw);

private:

  // The list of commands that make up the body of this function.
  octave::tree_statement_list *cmd_list;

  // The name of the file we parsed.
  std::string file_name;

  // The time the file was parsed.
  octave::sys::time t_parsed;

  // The time the file was last checked to see if it needs to be
  // parsed again.
  octave::sys::time t_checked;

  // Used to keep track of recursion depth.
  int call_depth;

  DECLARE_OV_TYPEID_FUNCTIONS_AND_DATA
};

// User-defined functions.

class
octave_user_function : public octave_user_code
{
public:

  octave_user_function (const octave::symbol_scope& scope = octave::symbol_scope (),
                        octave::tree_parameter_list *pl = nullptr,
                        octave::tree_parameter_list *rl = nullptr,
                        octave::tree_statement_list *cl = nullptr);

  // No copying!

  octave_user_function (const octave_user_function& fn) = delete;

  octave_user_function& operator = (const octave_user_function& fn) = delete;

  ~octave_user_function (void);

  octave::symbol_record::context_id active_context () const
  {
    return is_anonymous_function ()
      ? 0 : static_cast<octave::symbol_record::context_id>(call_depth);
  }

  octave_function * function_value (bool = false) { return this; }

  octave_user_function * user_function_value (bool = false) { return this; }

  octave_user_code * user_code_value (bool = false) { return this; }

  octave_user_function * define_param_list (octave::tree_parameter_list *t);

  octave_user_function * define_ret_list (octave::tree_parameter_list *t);

  void stash_fcn_file_name (const std::string& nm);

  void stash_fcn_location (int line, int col)
  {
    location_line = line;
    location_column = col;
  }

  int beginning_line (void) const { return location_line; }
  int beginning_column (void) const { return location_column; }

  void stash_fcn_end_location (int line, int col)
  {
    end_location_line = line;
    end_location_column = col;
  }

  int ending_line (void) const { return end_location_line; }
  int ending_column (void) const { return end_location_column; }

  void maybe_relocate_end (void);

  void stash_parent_fcn_name (const std::string& p) { parent_name = p; }

  void stash_parent_fcn_scope (const octave::symbol_scope& ps);

  void stash_leading_comment (octave::comment_list *lc) { lead_comm = lc; }

  void stash_trailing_comment (octave::comment_list *tc) { trail_comm = tc; }

  void mark_fcn_file_up_to_date (const octave::sys::time& t) { t_checked = t; }

  void stash_fcn_file_time (const octave::sys::time& t)
  {
    t_parsed = t;
    mark_fcn_file_up_to_date (t);
  }

  std::string fcn_file_name (void) const { return file_name; }

  std::string profiler_name (void) const;

  std::string parent_fcn_name (void) const { return parent_name; }

  octave::symbol_scope parent_fcn_scope (void) const
  {
    return m_scope.parent_scope ();
  }

  octave::sys::time time_parsed (void) const { return t_parsed; }

  octave::sys::time time_checked (void) const { return t_checked; }

  void mark_as_system_fcn_file (void);

  bool is_system_fcn_file (void) const { return system_fcn_file; }

  bool is_user_function (void) const { return true; }

  void erase_subfunctions (void);

  bool takes_varargs (void) const;

  bool takes_var_return (void) const;

  void mark_as_private_function (const std::string& cname = "");

  void lock_subfunctions (void);

  void unlock_subfunctions (void);

  std::map<std::string, octave_value> subfunctions (void) const;

  bool has_subfunctions (void) const;

  void stash_subfunction_names (const std::list<std::string>& names);

  std::list<std::string> subfunction_names (void) const;

  octave_value_list all_va_args (const octave_value_list& args);

  void stash_function_name (const std::string& s) { my_name = s; }

  void mark_as_subfunction (void) { subfunction = true; }

  bool is_subfunction (void) const { return subfunction; }

  void mark_as_inline_function (void) { inline_function = true; }

  bool is_inline_function (void) const { return inline_function; }

  void mark_as_anonymous_function (void) { anonymous_function = true; }

  bool is_anonymous_function (void) const { return anonymous_function; }

  bool is_anonymous_function_of_class
  (const std::string& cname = "") const
  {
    return anonymous_function
           ? (cname.empty ()
              ? (! dispatch_class ().empty ())
              : cname == dispatch_class ())
           : false;
  }

  // If we are a special expression, then the function body consists of exactly
  // one expression.  The expression's result is the return value of the
  // function.
  bool is_special_expr (void) const
  {
    return is_inline_function () || is_anonymous_function ();
  }

  bool is_nested_function (void) const { return nested_function; }

  void mark_as_nested_function (void) { nested_function = true; }

  void mark_as_class_constructor (void) { class_constructor = legacy; }

  void mark_as_classdef_constructor (void) { class_constructor = classdef; }

  bool is_class_constructor (const std::string& cname = "") const
  {
    return class_constructor == legacy
      ? (cname.empty () ? true : cname == dispatch_class ()) : false;
  }

  bool is_classdef_constructor (const std::string& cname = "") const
  {
    return class_constructor == classdef
      ? (cname.empty () ? true : cname == dispatch_class ()) : false;
  }

  void mark_as_class_method (void) { class_method = true; }

  bool is_class_method (const std::string& cname = "") const
  {
    return class_method
           ? (cname.empty () ? true : cname == dispatch_class ()) : false;
  }

  octave_value_list
  call (octave::tree_evaluator& tw, int nargout = 0,
        const octave_value_list& args = octave_value_list ());

  octave::tree_parameter_list * parameter_list (void) { return param_list; }

  octave::tree_parameter_list * return_list (void) { return ret_list; }

  octave::tree_statement_list * body (void) { return cmd_list; }

  octave::comment_list * leading_comment (void) { return lead_comm; }

  octave::comment_list * trailing_comment (void) { return trail_comm; }

  // If is_special_expr is true, retrieve the sigular expression that forms the
  // body.  May be null (even if is_special_expr is true).
  octave::tree_expression * special_expr (void);

  bool subsasgn_optimization_ok (void);

  void accept (octave::tree_walker& tw);

#if defined (HAVE_LLVM)
  octave::jit_function_info * get_info (void) { return jit_info; }

  void stash_info (octave::jit_function_info *info) { jit_info = info; }
#endif

  octave_value dump (void) const;

private:

  enum class_ctor_type
  {
    none,
    legacy,
    classdef
  };

  std::string ctor_type_str (void) const;

  // List of arguments for this function.  These are local variables.
  octave::tree_parameter_list *param_list;

  // List of parameters we return.  These are also local variables in
  // this function.
  octave::tree_parameter_list *ret_list;

  // The list of commands that make up the body of this function.
  octave::tree_statement_list *cmd_list;

  // The comments preceding the FUNCTION token.
  octave::comment_list *lead_comm;

  // The comments preceding the ENDFUNCTION token.
  octave::comment_list *trail_comm;

  // The name of the file we parsed.
  std::string file_name;

  // Location where this function was defined.
  int location_line;
  int location_column;
  int end_location_line;
  int end_location_column;

  // The name of the parent function, if any.
  std::string parent_name;

  // The time the file was parsed.
  octave::sys::time t_parsed;

  // The time the file was last checked to see if it needs to be
  // parsed again.
  octave::sys::time t_checked;

  // True if this function came from a file that is considered to be a
  // system function.  This affects whether we check the time stamp
  // on the file to see if it has changed.
  bool system_fcn_file;

  // Used to keep track of recursion depth.
  int call_depth;

  // The number of arguments that have names.
  int num_named_args;

  // TRUE means this is a subfunction of a primary function.
  bool subfunction;

  // TRUE means this is an inline function.
  bool inline_function;

  // TRUE means this is an anonymous function.
  bool anonymous_function;

  // TRUE means this is a nested function. (either a child or parent)
  bool nested_function;

  // Enum describing whether this function is the constructor for class object.
  class_ctor_type class_constructor;

  // TRUE means this function is a method for a class.
  bool class_method;

#if defined (HAVE_LLVM)
  octave::jit_function_info *jit_info;
#endif

  void maybe_relocate_end_internal (void);

  void print_code_function_header (const std::string& prefix);

  void print_code_function_trailer (const std::string& prefix);

  void bind_automatic_vars (octave::tree_evaluator& tw,
                            const string_vector& arg_names,
                            int nargin, int nargout,
                            const octave_value_list& va_args);

  void restore_warning_states (void);

  DECLARE_OV_TYPEID_FUNCTIONS_AND_DATA
};

#endif
