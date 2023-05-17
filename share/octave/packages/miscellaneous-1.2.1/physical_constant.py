#!/usr/bin/python
## coding: utf-8
## Copyright (C) 2007 Muthiah Annamalai <muthiah.annamalai@uta.edu>
## Copyright (C) 2012 Carnë Draug <carandraug+dev@gmail.com>
##
## This program is free software; you can redistribute it and/or modify it under
## the terms of the GNU General Public License as published by the Free Software
## Foundation; either version 3 of the License, or (at your option) any later
## version.
##
## This program is distributed in the hope that it will be useful, but WITHOUT
## ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
## FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more
## details.
##
## You should have received a copy of the GNU General Public License along with
## this program; if not, see <http://www.gnu.org/licenses/>.

## This is the code generator that works on the NIST file available for download
## at http://physics.nist.gov/cuu/Constants/Table/allascii.txt It downloads and
## parses the file automatically, only needs as argument the directory where to
## save the function file (if no arguments are supplied, it saves file in the
## directory as the script)

import time
import sys
import os.path
import urllib

def get_header ():
  header = [
            '## Copyright (C) 2007 Muthiah Annamalai <muthiah.annamalai@uta.edu>',
            '## Copyright (C) 2012 Carnë Draug <carandraug+dev@gmail.com>',
            '##',
            '## This program is free software; you can redistribute it and/or modify it under',
            '## the terms of the GNU General Public License as published by the Free Software',
            '## Foundation; either version 3 of the License, or (at your option) any later',
            '## version.',
            '##',
            '## This program is distributed in the hope that it will be useful, but WITHOUT',
            '## ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or',
            '## FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more',
            '## details.',
            '##',
            '## You should have received a copy of the GNU General Public License along with',
            '## this program; if not, see <http://www.gnu.org/licenses/>.',
            '',
            '## -*- texinfo -*-',
            '## @deftypefn {Function File} {[@var{names}] =} physical_constant',
            '## @deftypefnx {Function File} {[@var{val}, @var{uncertainty}, @var{unit}] =} physical_constant (@var{name})',
            '## @deftypefnx {Function File} {[@var{constants}] =} physical_constant ("all")',
            '## Get physical constant @var{arg}.',
            '##',
            '## If no arguments are given, returns a cell array with all possible @var{name}s.',
            '## Alternatively, @var{name} can be `all\' in which case @var{val} is a structure',
            '## array with 4 fields (name, value, uncertainty, units).',
            '##',
            '## Since the long list of values needs to be parsed on each call to this function',
            '## it is much more efficient to store the values in a variable rather make multiple',
            '## calls to this function with the same argument',
            '##',
            '## The values are the ones recommended by CODATA. This function was autogenerated',
            '## on ' + str (time.ctime ()) + ' from NIST database at @uref{http://physics.nist.gov/constants}',
            '## @end deftypefn',
            '',
            '## DO NOT EDIT THIS FILE',
            '## This function file is generated automatically by physical_constant.py',
            ]
  return header


def get_constants_table ():
  """Download and parse the current list of constants from NIST website"""
  
  url           = 'http://physics.nist.gov/cuu/Constants/Table/allascii.txt'
  ## the ideal would be to parse the whole file in a smart way with regexp
  ## rather than relying on a fixed format which already broke this script
  ## before. By having the values here rather than hardcoded, it will make
  ## at least easier to fix it in the future. Even better would be if they
  ## supplied us a XML rather than a ASCII table. These are the guys from
  ## NIST to contact in case of problems:
  ## Barry N. Taylor <barry.taylor@nist.gov>
  ## David Newell <david.newell@nist.gov>
  ## Peter Mohr <mohr@nist.gov>
  ini_skip      = 10    # number of lines to skip (header)
  length_name   = 60    # max length of the `quantity' column
  length_value  = 25    # max length of the `value' column
  length_uncert = 25    # max length of the `uncertainty' column
  length_unit   = 15    # max length of the `unit' column
  
  ascii = urllib.urlopen(url).read().split('\r\n')[ini_skip:]
  table = {}
  for line in ascii:
    if not line: continue # skip empty lines (at least the end of file)
    name    = line[:  length_name].strip()
    line    = line[length_name  :]
    value   = line[: length_value].strip()
    line    = line[length_value :]
    uncert  = line[:length_uncert].strip()
    line    = line[length_uncert:]
    unit    = line[:  length_unit].strip()
    
    ## do NOT adjust name. Old code would have description (the complete string)
    ## and name (which would have some changes). However, some constants that
    ## were defined twice (for different conditions) would appear only once
    ## without information on the conditions. See the old revisions
    
    ## adjust value and uncertainty
    for old, new in {
                      ' '   : '', # remove spaces
                      '...' : '', # is decimal
                      }.items():
      value  = value.replace (old, new)
      uncert = uncert.replace (old, new)
    
    uncert = uncert.replace ('(exact)', '0.0')
    table[name] = [value, uncert, unit]
  return table


## Start script
table = get_constants_table ()

## if there's any argument, assume it's directory and save function there
## otherwise save function file on same directory as script
if len (sys.argv) > 1:
  filepath = os.path.join(os.path.dirname (sys.argv[1]), 'physical_constant.m')
else:
  filepath = os.path.join(os.path.dirname (sys.argv[0]), 'physical_constant.m')

sys.stdout = open (filepath, "w")

for line in get_header():
  print line

print '''
function [rval, uncert, unit] = physical_constant (arg)

  persistent unit_data;
  if (isempty(unit_data))
    unit_data = get_data;
  endif

  if (nargin > 1 || (nargin == 1 && !ischar (arg)))
    print_usage;
  elseif (nargin == 0)
    rval = reshape ({unit_data(:).name}, size (unit_data));
    return
  elseif (nargin == 1 && strcmpi (arg, "all"))
    rval = unit_data;
    return
  endif

  val = reshape ({unit_data(:).name}, size (unit_data));
  map = strcmpi (val, arg);
  if (any (map))
    val     = unit_data(map);
    rval    = val.value;
    uncert  = val.uncertainty;
    unit    = val.units;
  else
    error ("No constant with name '%s' found", arg)
  endif
endfunction
'''

print 'function unit_data = get_data'
index = 1
#for name in sorted (table.keys()):
for name, values in sorted(table.items()):
  print '  unit_data(' + str (index) + ').name        = "' + name            + '";'
  print '  unit_data(' + str (index) + ').value       = '  + str (values[0]) + ';'
  print '  unit_data(' + str (index) + ').uncertainty = '  + str (values[1]) + ';'
  print '  unit_data(' + str (index) + ').units       = "' + values[2]       + '";'
  print ''
  index += 1
print 'endfunction'

for name, values in sorted(table.items()):
  print '%!assert(physical_constant("' + name + '"), '+ str (values[0]) +');'
