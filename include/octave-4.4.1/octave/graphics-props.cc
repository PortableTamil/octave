// DO NOT EDIT!  Generated automatically by genprops.awk.

// ******** base ********

base_properties::base_properties (const std::string& ty, const graphics_handle& mh, const graphics_handle& p)
  :     beingdeleted ("beingdeleted", mh, "off"),
    busyaction ("busyaction", mh, "{queue}|cancel"),
    buttondownfcn ("buttondownfcn", mh, Matrix ()),
    children ("children", mh, Matrix ()),
    clipping ("clipping", mh, "on"),
    createfcn ("createfcn", mh, Matrix ()),
    deletefcn ("deletefcn", mh, Matrix ()),
    handlevisibility ("handlevisibility", mh, "{on}|callback|off"),
    hittest ("hittest", mh, "on"),
    interruptible ("interruptible", mh, "on"),
    parent ("parent", mh, p),
    pickableparts ("pickableparts", mh, "{visible}|all|none"),
    selected ("selected", mh, "off"),
    selectionhighlight ("selectionhighlight", mh, "on"),
    tag ("tag", mh, ""),
    type ("type", mh, ty),
    uicontextmenu ("uicontextmenu", mh, graphics_handle ()),
    userdata ("userdata", mh, Matrix ()),
    visible ("visible", mh, "on"),
    __modified__ ("__modified__", mh, "on"),
    __myhandle__ (mh)
{
  beingdeleted.set_id (ID_BEINGDELETED);
  busyaction.set_id (ID_BUSYACTION);
  buttondownfcn.set_id (ID_BUTTONDOWNFCN);
  children.set_id (ID_CHILDREN);
  clipping.set_id (ID_CLIPPING);
  createfcn.set_id (ID_CREATEFCN);
  deletefcn.set_id (ID_DELETEFCN);
  handlevisibility.set_id (ID_HANDLEVISIBILITY);
  hittest.set_id (ID_HITTEST);
  interruptible.set_id (ID_INTERRUPTIBLE);
  parent.set_id (ID_PARENT);
  pickableparts.set_id (ID_PICKABLEPARTS);
  selected.set_id (ID_SELECTED);
  selectionhighlight.set_id (ID_SELECTIONHIGHLIGHT);
  tag.set_id (ID_TAG);
  type.set_id (ID_TYPE);
  uicontextmenu.set_id (ID_UICONTEXTMENU);
  userdata.set_id (ID_USERDATA);
  visible.set_id (ID_VISIBLE);
  __modified__.set_id (ID___MODIFIED__);
  __modified__.set_hidden (true);
  init ();
}

void
base_properties::set (const caseless_str& pname, const octave_value& val)
{
  if (pname.compare ("beingdeleted"))
    set_beingdeleted (val);
  else if (pname.compare ("busyaction"))
    set_busyaction (val);
  else if (pname.compare ("buttondownfcn"))
    set_buttondownfcn (val);
  else if (pname.compare ("children"))
    set_children (val);
  else if (pname.compare ("clipping"))
    set_clipping (val);
  else if (pname.compare ("createfcn"))
    set_createfcn (val);
  else if (pname.compare ("deletefcn"))
    set_deletefcn (val);
  else if (pname.compare ("handlevisibility"))
    set_handlevisibility (val);
  else if (pname.compare ("hittest"))
    set_hittest (val);
  else if (pname.compare ("interruptible"))
    set_interruptible (val);
  else if (pname.compare ("parent"))
    set_parent (val);
  else if (pname.compare ("pickableparts"))
    set_pickableparts (val);
  else if (pname.compare ("selected"))
    set_selected (val);
  else if (pname.compare ("selectionhighlight"))
    set_selectionhighlight (val);
  else if (pname.compare ("tag"))
    set_tag (val);
  else if (pname.compare ("uicontextmenu"))
    set_uicontextmenu (val);
  else if (pname.compare ("userdata"))
    set_userdata (val);
  else if (pname.compare ("visible"))
    set_visible (val);
  else if (pname.compare ("__modified__"))
    set___modified__ (val);
  else
    set_dynamic (pname, val);
}

octave_value
base_properties::get (bool all) const
{
  octave_map m = get_dynamic (all).map_value ();

  m.assign ("beingdeleted", octave_value (get_beingdeleted ()));
  m.assign ("busyaction", octave_value (get_busyaction ()));
  m.assign ("buttondownfcn", octave_value (get_buttondownfcn ()));
  m.assign ("children", octave_value (get_children ()));
  m.assign ("clipping", octave_value (get_clipping ()));
  m.assign ("createfcn", octave_value (get_createfcn ()));
  m.assign ("deletefcn", octave_value (get_deletefcn ()));
  m.assign ("handlevisibility", octave_value (get_handlevisibility ()));
  m.assign ("hittest", octave_value (get_hittest ()));
  m.assign ("interruptible", octave_value (get_interruptible ()));
  m.assign ("parent", octave_value (get_parent ().as_octave_value ()));
  m.assign ("pickableparts", octave_value (get_pickableparts ()));
  m.assign ("selected", octave_value (get_selected ()));
  m.assign ("selectionhighlight", octave_value (get_selectionhighlight ()));
  m.assign ("tag", octave_value (get_tag ()));
  m.assign ("type", octave_value (get_type ()));
  m.assign ("uicontextmenu", octave_value (get_uicontextmenu ().as_octave_value ()));
  m.assign ("userdata", octave_value (get_userdata ()));
  m.assign ("visible", octave_value (get_visible ()));
  if (all)
    m.assign ("__modified__", octave_value (get___modified__ ()));
  if (all)
    m.assign ("__myhandle__", octave_value (get___myhandle__ ().as_octave_value ()));

  return m;
}

octave_value
base_properties::get (const caseless_str& pname) const
{
  octave_value retval;

  if (pname.compare ("beingdeleted"))
    retval = get_beingdeleted ();
  else if (pname.compare ("busyaction"))
    retval = get_busyaction ();
  else if (pname.compare ("buttondownfcn"))
    retval = get_buttondownfcn ();
  else if (pname.compare ("children"))
    retval = get_children ();
  else if (pname.compare ("clipping"))
    retval = get_clipping ();
  else if (pname.compare ("createfcn"))
    retval = get_createfcn ();
  else if (pname.compare ("deletefcn"))
    retval = get_deletefcn ();
  else if (pname.compare ("handlevisibility"))
    retval = get_handlevisibility ();
  else if (pname.compare ("hittest"))
    retval = get_hittest ();
  else if (pname.compare ("interruptible"))
    retval = get_interruptible ();
  else if (pname.compare ("parent"))
    retval = get_parent ().as_octave_value ();
  else if (pname.compare ("pickableparts"))
    retval = get_pickableparts ();
  else if (pname.compare ("selected"))
    retval = get_selected ();
  else if (pname.compare ("selectionhighlight"))
    retval = get_selectionhighlight ();
  else if (pname.compare ("tag"))
    retval = get_tag ();
  else if (pname.compare ("type"))
    retval = get_type ();
  else if (pname.compare ("uicontextmenu"))
    retval = get_uicontextmenu ().as_octave_value ();
  else if (pname.compare ("userdata"))
    retval = get_userdata ();
  else if (pname.compare ("visible"))
    retval = get_visible ();
  else if (pname.compare ("__modified__"))
    retval = get___modified__ ();
  else if (pname.compare ("__myhandle__"))
    retval = get___myhandle__ ().as_octave_value ();
  else
    retval = get_dynamic (pname);

  return retval;
}

property
base_properties::get_property (const caseless_str& pname)
{
  if (pname.compare ("beingdeleted"))
    return property (&beingdeleted, true);
  else if (pname.compare ("busyaction"))
    return property (&busyaction, true);
  else if (pname.compare ("buttondownfcn"))
    return property (&buttondownfcn, true);
  else if (pname.compare ("children"))
    return property (&children, true);
  else if (pname.compare ("clipping"))
    return property (&clipping, true);
  else if (pname.compare ("createfcn"))
    return property (&createfcn, true);
  else if (pname.compare ("deletefcn"))
    return property (&deletefcn, true);
  else if (pname.compare ("handlevisibility"))
    return property (&handlevisibility, true);
  else if (pname.compare ("hittest"))
    return property (&hittest, true);
  else if (pname.compare ("interruptible"))
    return property (&interruptible, true);
  else if (pname.compare ("parent"))
    return property (&parent, true);
  else if (pname.compare ("pickableparts"))
    return property (&pickableparts, true);
  else if (pname.compare ("selected"))
    return property (&selected, true);
  else if (pname.compare ("selectionhighlight"))
    return property (&selectionhighlight, true);
  else if (pname.compare ("tag"))
    return property (&tag, true);
  else if (pname.compare ("type"))
    return property (&type, true);
  else if (pname.compare ("uicontextmenu"))
    return property (&uicontextmenu, true);
  else if (pname.compare ("userdata"))
    return property (&userdata, true);
  else if (pname.compare ("visible"))
    return property (&visible, true);
  else if (pname.compare ("__modified__"))
    return property (&__modified__, true);
  else
    return get_property_dynamic (pname);
}

property_list::pval_map_type
base_properties::factory_defaults (void)
{
  property_list::pval_map_type m;

  m["beingdeleted"] = "off";
  m["busyaction"] = "queue";
  m["buttondownfcn"] = Matrix ();
  m["clipping"] = "on";
  m["createfcn"] = Matrix ();
  m["deletefcn"] = Matrix ();
  m["handlevisibility"] = "on";
  m["hittest"] = "on";
  m["interruptible"] = "on";
  m["pickableparts"] = "visible";
  m["selected"] = "off";
  m["selectionhighlight"] = "on";
  m["tag"] = "";
  m["uicontextmenu"] = graphics_handle ().as_octave_value ();
  m["userdata"] = Matrix ();
  m["visible"] = "on";
  m["__modified__"] = "on";

  return m;
}

std::set<std::string>
base_properties::core_property_names (void)
{
  static std::set<std::string> all_pnames;

  static bool initialized = false;

  if (! initialized)
    {
      all_pnames.insert ("beingdeleted");
      all_pnames.insert ("busyaction");
      all_pnames.insert ("buttondownfcn");
      all_pnames.insert ("children");
      all_pnames.insert ("clipping");
      all_pnames.insert ("createfcn");
      all_pnames.insert ("deletefcn");
      all_pnames.insert ("handlevisibility");
      all_pnames.insert ("hittest");
      all_pnames.insert ("interruptible");
      all_pnames.insert ("parent");
      all_pnames.insert ("pickableparts");
      all_pnames.insert ("selected");
      all_pnames.insert ("selectionhighlight");
      all_pnames.insert ("tag");
      all_pnames.insert ("type");
      all_pnames.insert ("uicontextmenu");
      all_pnames.insert ("userdata");
      all_pnames.insert ("visible");
      all_pnames.insert ("__modified__");
      all_pnames.insert ("__myhandle__");

      initialized = true;
    }

  return all_pnames;
}

bool
base_properties::has_core_property (const caseless_str& pname)
{
  std::set<std::string> pnames = core_property_names ();

  return pnames.find (pname) != pnames.end ();
}

std::set<std::string>
base_properties::readonly_property_names (void)
{
  static std::set<std::string> all_pnames;

  static bool initialized = false;

  if (! initialized)
    {
      all_pnames.insert ("type");
      all_pnames.insert ("__myhandle__");

      initialized = true;
    }

  return all_pnames;
}

bool
base_properties::has_readonly_property (const caseless_str& pname)
{
  std::set<std::string> pnames = readonly_property_names ();

  return pnames.find (pname) != pnames.end ();
}

std::set<std::string>
base_properties::all_property_names (void) const
{
  static std::set<std::string> all_pnames = core_property_names ();

  std::set<std::string> retval = all_pnames;
  std::set<std::string> dyn_props = dynamic_property_names ();
  retval.insert (dyn_props.begin (), dyn_props.end ());
  for (std::map<caseless_str, property, cmp_caseless_str>::const_iterator p = all_props.begin ();
       p != all_props.end (); p++)
    retval.insert (p->first);

  return retval;
}

// ******** root_figure ********

root_figure::properties::properties (const graphics_handle& mh, const graphics_handle& p)
  : base_properties (go_name, mh, p),
    callbackobject ("callbackobject", mh, graphics_handle ()),
    commandwindowsize ("commandwindowsize", mh, Matrix (1, 2, 0)),
    currentfigure ("currentfigure", mh, graphics_handle ()),
    fixedwidthfontname ("fixedwidthfontname", mh, "Courier"),
    monitorpositions ("monitorpositions", mh, default_screensize ()),
    pointerlocation ("pointerlocation", mh, Matrix (1, 2, 0)),
    pointerwindow ("pointerwindow", mh, 0.0),
    screendepth ("screendepth", mh, default_screendepth ()),
    screenpixelsperinch ("screenpixelsperinch", mh, default_screenpixelsperinch ()),
    screensize ("screensize", mh, default_screensize ()),
    showhiddenhandles ("showhiddenhandles", mh, "off"),
    units ("units", mh, "inches|centimeters|normalized|points|{pixels}")
{
  callbackobject.set_id (ID_CALLBACKOBJECT);
  commandwindowsize.set_id (ID_COMMANDWINDOWSIZE);
  currentfigure.set_id (ID_CURRENTFIGURE);
  fixedwidthfontname.set_id (ID_FIXEDWIDTHFONTNAME);
  monitorpositions.set_id (ID_MONITORPOSITIONS);
  pointerlocation.set_id (ID_POINTERLOCATION);
  pointerwindow.set_id (ID_POINTERWINDOW);
  screendepth.set_id (ID_SCREENDEPTH);
  screenpixelsperinch.set_id (ID_SCREENPIXELSPERINCH);
  screensize.set_id (ID_SCREENSIZE);
  showhiddenhandles.set_id (ID_SHOWHIDDENHANDLES);
  units.set_id (ID_UNITS);
  init ();
}

void
root_figure::properties::set (const caseless_str& pname_arg, const octave_value& val)
{
  const std::set<std::string>& pnames = all_property_names ();

  caseless_str pname = validate_property_name ("set", go_name, pnames, pname_arg);

  if (has_readonly_property (pname))
    {
      error ("set: \"%s\" is read-only", pname.c_str ());
      return;
    }

  if (pname.compare ("currentfigure"))
    set_currentfigure (val);
  else if (pname.compare ("fixedwidthfontname"))
    set_fixedwidthfontname (val);
  else if (pname.compare ("pointerlocation"))
    set_pointerlocation (val);
  else if (pname.compare ("showhiddenhandles"))
    set_showhiddenhandles (val);
  else if (pname.compare ("units"))
    set_units (val);
  else
    base_properties::set (pname, val);
}

octave_value
root_figure::properties::get (bool all) const
{
  octave_map m = base_properties::get (all).map_value ();

  m.assign ("callbackobject", octave_value (get_callbackobject ().as_octave_value ()));
  m.assign ("commandwindowsize", octave_value (get_commandwindowsize ()));
  m.assign ("currentfigure", octave_value (get_currentfigure ().as_octave_value ()));
  m.assign ("fixedwidthfontname", octave_value (get_fixedwidthfontname ()));
  m.assign ("monitorpositions", octave_value (get_monitorpositions ()));
  m.assign ("pointerlocation", octave_value (get_pointerlocation ()));
  m.assign ("pointerwindow", octave_value (get_pointerwindow ()));
  m.assign ("screendepth", octave_value (get_screendepth ()));
  m.assign ("screenpixelsperinch", octave_value (get_screenpixelsperinch ()));
  m.assign ("screensize", octave_value (get_screensize ()));
  m.assign ("showhiddenhandles", octave_value (get_showhiddenhandles ()));
  m.assign ("units", octave_value (get_units ()));

  return m;
}

octave_value
root_figure::properties::get (const caseless_str& pname_arg) const
{
  octave_value retval;

  const std::set<std::string>& pnames = all_property_names ();

  caseless_str pname = validate_property_name ("get", go_name, pnames, pname_arg);

  if (pname.compare ("callbackobject"))
    retval = get_callbackobject ().as_octave_value ();
  else if (pname.compare ("commandwindowsize"))
    retval = get_commandwindowsize ();
  else if (pname.compare ("currentfigure"))
    retval = get_currentfigure ().as_octave_value ();
  else if (pname.compare ("fixedwidthfontname"))
    retval = get_fixedwidthfontname ();
  else if (pname.compare ("monitorpositions"))
    retval = get_monitorpositions ();
  else if (pname.compare ("pointerlocation"))
    retval = get_pointerlocation ();
  else if (pname.compare ("pointerwindow"))
    retval = get_pointerwindow ();
  else if (pname.compare ("screendepth"))
    retval = get_screendepth ();
  else if (pname.compare ("screenpixelsperinch"))
    retval = get_screenpixelsperinch ();
  else if (pname.compare ("screensize"))
    retval = get_screensize ();
  else if (pname.compare ("showhiddenhandles"))
    retval = get_showhiddenhandles ();
  else if (pname.compare ("units"))
    retval = get_units ();
  else
    retval = base_properties::get (pname);

  return retval;
}

property
root_figure::properties::get_property (const caseless_str& pname_arg)
{
  const std::set<std::string>& pnames = all_property_names ();

  caseless_str pname = validate_property_name ("get", go_name, pnames, pname_arg);

  if (pname.compare ("callbackobject"))
    return property (&callbackobject, true);
  else if (pname.compare ("commandwindowsize"))
    return property (&commandwindowsize, true);
  else if (pname.compare ("currentfigure"))
    return property (&currentfigure, true);
  else if (pname.compare ("fixedwidthfontname"))
    return property (&fixedwidthfontname, true);
  else if (pname.compare ("monitorpositions"))
    return property (&monitorpositions, true);
  else if (pname.compare ("pointerlocation"))
    return property (&pointerlocation, true);
  else if (pname.compare ("pointerwindow"))
    return property (&pointerwindow, true);
  else if (pname.compare ("screendepth"))
    return property (&screendepth, true);
  else if (pname.compare ("screenpixelsperinch"))
    return property (&screenpixelsperinch, true);
  else if (pname.compare ("screensize"))
    return property (&screensize, true);
  else if (pname.compare ("showhiddenhandles"))
    return property (&showhiddenhandles, true);
  else if (pname.compare ("units"))
    return property (&units, true);
  else
    return base_properties::get_property (pname);
}

property_list::pval_map_type
root_figure::properties::factory_defaults (void)
{
  property_list::pval_map_type m = base_properties::factory_defaults ();

  m["callbackobject"] = graphics_handle ().as_octave_value ();
  m["commandwindowsize"] = Matrix (1, 2, 0);
  m["currentfigure"] = graphics_handle ().as_octave_value ();
  m["fixedwidthfontname"] = "Courier";
  m["monitorpositions"] = default_screensize ();
  m["pointerlocation"] = Matrix (1, 2, 0);
  m["pointerwindow"] = 0.0;
  m["screendepth"] = default_screendepth ();
  m["screenpixelsperinch"] = default_screenpixelsperinch ();
  m["screensize"] = default_screensize ();
  m["showhiddenhandles"] = "off";
  m["units"] = "pixels";

  return m;
}

std::string root_figure::properties::go_name ("root");

std::set<std::string>
root_figure::properties::core_property_names (void)
{
  static std::set<std::string> all_pnames;

  static bool initialized = false;

  if (! initialized)
    {
      all_pnames.insert ("callbackobject");
      all_pnames.insert ("commandwindowsize");
      all_pnames.insert ("currentfigure");
      all_pnames.insert ("fixedwidthfontname");
      all_pnames.insert ("monitorpositions");
      all_pnames.insert ("pointerlocation");
      all_pnames.insert ("pointerwindow");
      all_pnames.insert ("screendepth");
      all_pnames.insert ("screenpixelsperinch");
      all_pnames.insert ("screensize");
      all_pnames.insert ("showhiddenhandles");
      all_pnames.insert ("units");

      std::set<std::string> base_pnames = base_properties::core_property_names ();
      all_pnames.insert (base_pnames.begin (), base_pnames.end ());

      initialized = true;
    }

  return all_pnames;
}

bool
root_figure::properties::has_core_property (const caseless_str& pname)
{
  std::set<std::string> pnames = core_property_names ();

  return pnames.find (pname) != pnames.end ();
}

std::set<std::string>
root_figure::properties::readonly_property_names (void)
{
  static std::set<std::string> all_pnames;

  static bool initialized = false;

  if (! initialized)
    {
      all_pnames.insert ("callbackobject");
      all_pnames.insert ("commandwindowsize");
      all_pnames.insert ("monitorpositions");
      all_pnames.insert ("pointerwindow");
      all_pnames.insert ("screendepth");
      all_pnames.insert ("screenpixelsperinch");
      all_pnames.insert ("screensize");

      std::set<std::string> base_pnames = base_properties::readonly_property_names ();
      all_pnames.insert (base_pnames.begin (), base_pnames.end ());

      initialized = true;
    }

  return all_pnames;
}

bool
root_figure::properties::has_readonly_property (const caseless_str& pname)
{
  std::set<std::string> pnames = readonly_property_names ();

  return pnames.find (pname) != pnames.end ();
}

std::set<std::string>
root_figure::properties::all_property_names (void) const
{
  static std::set<std::string> all_pnames = core_property_names ();

  std::set<std::string> retval = all_pnames;
  std::set<std::string> base_props = base_properties::all_property_names ();
  retval.insert (base_props.begin (), base_props.end ());

  return retval;
}

bool
root_figure::properties::has_property (const caseless_str& pname) const
{
  std::set<std::string> pnames = all_property_names ();

  return pnames.find (pname) != pnames.end ();
}

// ******** figure ********

figure::properties::properties (const graphics_handle& mh, const graphics_handle& p)
  : base_properties (go_name, mh, p),
    alphamap ("alphamap", mh, Matrix (64, 1, 1)),
    buttondownfcn ("buttondownfcn", mh, Matrix ()),
    closerequestfcn ("closerequestfcn", mh, "closereq"),
    color ("color", mh, color_property (color_values (1, 1, 1), radio_values ("none"))),
    colormap ("colormap", mh, viridis_colormap ()),
    currentaxes ("currentaxes", mh, graphics_handle ()),
    currentcharacter ("currentcharacter", mh, ""),
    currentobject ("currentobject", mh, graphics_handle ()),
    currentpoint ("currentpoint", mh, Matrix (2, 1, 0)),
    dockcontrols ("dockcontrols", mh, "off"),
    filename ("filename", mh, ""),
    graphicssmoothing ("graphicssmoothing", mh, "on"),
    integerhandle ("integerhandle", mh, "on"),
    inverthardcopy ("inverthardcopy", mh, "on"),
    keypressfcn ("keypressfcn", mh, Matrix ()),
    keyreleasefcn ("keyreleasefcn", mh, Matrix ()),
    menubar ("menubar", mh, "{figure}|none"),
    name ("name", mh, ""),
    nextplot ("nextplot", mh, "{add}|new|replace|replacechildren"),
    numbertitle ("numbertitle", mh, "on"),
    outerposition ("outerposition", mh, Matrix (1, 4, -1.0)),
    paperorientation ("paperorientation", mh, "{portrait}|landscape"),
    paperposition ("paperposition", mh, default_figure_paperposition ()),
    paperpositionmode ("paperpositionmode", mh, "auto|{manual}"),
    papersize ("papersize", mh, default_figure_papersize ()),
    papertype ("papertype", mh, "{usletter}|uslegal|a0|a1|a2|a3|a4|a5|b0|b1|b2|b3|b4|b5|arch-a|arch-b|arch-c|arch-d|arch-e|a|b|c|d|e|tabloid|<custom>"),
    paperunits ("paperunits", mh, "{inches}|centimeters|normalized|points"),
    pointer ("pointer", mh, "crosshair|fullcrosshair|{arrow}|ibeam|watch|topl|topr|botl|botr|left|top|right|bottom|circle|cross|fleur|custom|hand"),
    pointershapecdata ("pointershapecdata", mh, Matrix (16, 16, 0)),
    pointershapehotspot ("pointershapehotspot", mh, Matrix (1, 2, 0)),
    position ("position", mh, default_figure_position ()),
    renderer ("renderer", mh, "{opengl}|painters"),
    renderermode ("renderermode", mh, "{auto}|manual"),
    resize ("resize", mh, "on"),
    resizefcn ("resizefcn", mh, Matrix ()),
    selectiontype ("selectiontype", mh, "{normal}|extend|alt|open"),
    sizechangedfcn ("sizechangedfcn", mh, Matrix ()),
    toolbar ("toolbar", mh, "{auto}|figure|none"),
    units ("units", mh, "{pixels}|normalized|inches|centimeters|points|characters"),
    windowbuttondownfcn ("windowbuttondownfcn", mh, Matrix ()),
    windowbuttonmotionfcn ("windowbuttonmotionfcn", mh, Matrix ()),
    windowbuttonupfcn ("windowbuttonupfcn", mh, Matrix ()),
    windowkeypressfcn ("windowkeypressfcn", mh, Matrix ()),
    windowkeyreleasefcn ("windowkeyreleasefcn", mh, Matrix ()),
    windowscrollwheelfcn ("windowscrollwheelfcn", mh, Matrix ()),
    windowstyle ("windowstyle", mh, "{normal}|modal|docked"),
    pickableparts ("pickableparts", mh, "{visible}"),
    __gl_extensions__ ("__gl_extensions__", mh, ""),
    __gl_renderer__ ("__gl_renderer__", mh, ""),
    __gl_vendor__ ("__gl_vendor__", mh, ""),
    __gl_version__ ("__gl_version__", mh, ""),
    __gl_window__ ("__gl_window__", mh, "off"),
    __graphics_toolkit__ ("__graphics_toolkit__", mh, default_graphics_toolkit ()),
    __guidata__ ("__guidata__", mh, Matrix ()),
    __mouse_mode__ ("__mouse_mode__", mh, "{none}|pan|rotate|select|text|zoom"),
    __printing__ ("__printing__", mh, "off"),
    __pan_mode__ ("__pan_mode__", mh, Matrix ()),
    __plot_stream__ ("__plot_stream__", mh, Matrix ()),
    __rotate_mode__ ("__rotate_mode__", mh, Matrix ()),
    __zoom_mode__ ("__zoom_mode__", mh, Matrix ()),
    doublebuffer ("doublebuffer", mh, "on"),
    mincolormap ("mincolormap", mh, 64),
    wvisual ("wvisual", mh, ""),
    wvisualmode ("wvisualmode", mh, "{auto}|manual"),
    xdisplay ("xdisplay", mh, ""),
    xvisual ("xvisual", mh, ""),
    xvisualmode ("xvisualmode", mh, "{auto}|manual")
{
  alphamap.set_id (ID_ALPHAMAP);
  buttondownfcn.set_id (ID_BUTTONDOWNFCN);
  closerequestfcn.set_id (ID_CLOSEREQUESTFCN);
  color.set_id (ID_COLOR);
  colormap.set_id (ID_COLORMAP);
  currentaxes.set_id (ID_CURRENTAXES);
  currentcharacter.set_id (ID_CURRENTCHARACTER);
  currentobject.set_id (ID_CURRENTOBJECT);
  currentpoint.set_id (ID_CURRENTPOINT);
  dockcontrols.set_id (ID_DOCKCONTROLS);
  filename.set_id (ID_FILENAME);
  graphicssmoothing.set_id (ID_GRAPHICSSMOOTHING);
  integerhandle.set_id (ID_INTEGERHANDLE);
  inverthardcopy.set_id (ID_INVERTHARDCOPY);
  keypressfcn.set_id (ID_KEYPRESSFCN);
  keyreleasefcn.set_id (ID_KEYRELEASEFCN);
  menubar.set_id (ID_MENUBAR);
  name.set_id (ID_NAME);
  nextplot.set_id (ID_NEXTPLOT);
  numbertitle.set_id (ID_NUMBERTITLE);
  outerposition.set_id (ID_OUTERPOSITION);
  paperorientation.set_id (ID_PAPERORIENTATION);
  paperposition.set_id (ID_PAPERPOSITION);
  paperpositionmode.set_id (ID_PAPERPOSITIONMODE);
  papersize.set_id (ID_PAPERSIZE);
  papertype.set_id (ID_PAPERTYPE);
  paperunits.set_id (ID_PAPERUNITS);
  pointer.set_id (ID_POINTER);
  pointershapecdata.set_id (ID_POINTERSHAPECDATA);
  pointershapehotspot.set_id (ID_POINTERSHAPEHOTSPOT);
  position.set_id (ID_POSITION);
  renderer.set_id (ID_RENDERER);
  renderermode.set_id (ID_RENDERERMODE);
  resize.set_id (ID_RESIZE);
  resizefcn.set_id (ID_RESIZEFCN);
  selectiontype.set_id (ID_SELECTIONTYPE);
  sizechangedfcn.set_id (ID_SIZECHANGEDFCN);
  toolbar.set_id (ID_TOOLBAR);
  units.set_id (ID_UNITS);
  windowbuttondownfcn.set_id (ID_WINDOWBUTTONDOWNFCN);
  windowbuttonmotionfcn.set_id (ID_WINDOWBUTTONMOTIONFCN);
  windowbuttonupfcn.set_id (ID_WINDOWBUTTONUPFCN);
  windowkeypressfcn.set_id (ID_WINDOWKEYPRESSFCN);
  windowkeyreleasefcn.set_id (ID_WINDOWKEYRELEASEFCN);
  windowscrollwheelfcn.set_id (ID_WINDOWSCROLLWHEELFCN);
  windowstyle.set_id (ID_WINDOWSTYLE);
  pickableparts.set_id (ID_PICKABLEPARTS);
  pickableparts.set_hidden (true);
  __gl_extensions__.set_id (ID___GL_EXTENSIONS__);
  __gl_extensions__.set_hidden (true);
  __gl_renderer__.set_id (ID___GL_RENDERER__);
  __gl_renderer__.set_hidden (true);
  __gl_vendor__.set_id (ID___GL_VENDOR__);
  __gl_vendor__.set_hidden (true);
  __gl_version__.set_id (ID___GL_VERSION__);
  __gl_version__.set_hidden (true);
  __gl_window__.set_id (ID___GL_WINDOW__);
  __gl_window__.set_hidden (true);
  __graphics_toolkit__.set_id (ID___GRAPHICS_TOOLKIT__);
  __graphics_toolkit__.set_hidden (true);
  __guidata__.set_id (ID___GUIDATA__);
  __guidata__.set_hidden (true);
  __mouse_mode__.set_id (ID___MOUSE_MODE__);
  __mouse_mode__.set_hidden (true);
  __printing__.set_id (ID___PRINTING__);
  __printing__.set_hidden (true);
  __pan_mode__.set_id (ID___PAN_MODE__);
  __pan_mode__.set_hidden (true);
  __plot_stream__.set_id (ID___PLOT_STREAM__);
  __plot_stream__.set_hidden (true);
  __rotate_mode__.set_id (ID___ROTATE_MODE__);
  __rotate_mode__.set_hidden (true);
  __zoom_mode__.set_id (ID___ZOOM_MODE__);
  __zoom_mode__.set_hidden (true);
  doublebuffer.set_id (ID_DOUBLEBUFFER);
  doublebuffer.set_hidden (true);
  mincolormap.set_id (ID_MINCOLORMAP);
  mincolormap.set_hidden (true);
  wvisual.set_id (ID_WVISUAL);
  wvisual.set_hidden (true);
  wvisualmode.set_id (ID_WVISUALMODE);
  wvisualmode.set_hidden (true);
  xdisplay.set_id (ID_XDISPLAY);
  xdisplay.set_hidden (true);
  xvisual.set_id (ID_XVISUAL);
  xvisual.set_hidden (true);
  xvisualmode.set_id (ID_XVISUALMODE);
  xvisualmode.set_hidden (true);
  init ();
}

void
figure::properties::set (const caseless_str& pname_arg, const octave_value& val)
{
  const std::set<std::string>& pnames = all_property_names ();

  caseless_str pname = validate_property_name ("set", go_name, pnames, pname_arg);

  if (has_readonly_property (pname))
    {
      error ("set: \"%s\" is read-only", pname.c_str ());
      return;
    }

  if (pname.compare ("alphamap"))
    set_alphamap (val);
  else if (pname.compare ("buttondownfcn"))
    set_buttondownfcn (val);
  else if (pname.compare ("closerequestfcn"))
    set_closerequestfcn (val);
  else if (pname.compare ("color"))
    set_color (val);
  else if (pname.compare ("colormap"))
    set_colormap (val);
  else if (pname.compare ("currentaxes"))
    set_currentaxes (val);
  else if (pname.compare ("dockcontrols"))
    set_dockcontrols (val);
  else if (pname.compare ("filename"))
    set_filename (val);
  else if (pname.compare ("graphicssmoothing"))
    set_graphicssmoothing (val);
  else if (pname.compare ("integerhandle"))
    set_integerhandle (val);
  else if (pname.compare ("inverthardcopy"))
    set_inverthardcopy (val);
  else if (pname.compare ("keypressfcn"))
    set_keypressfcn (val);
  else if (pname.compare ("keyreleasefcn"))
    set_keyreleasefcn (val);
  else if (pname.compare ("menubar"))
    set_menubar (val);
  else if (pname.compare ("name"))
    set_name (val);
  else if (pname.compare ("nextplot"))
    set_nextplot (val);
  else if (pname.compare ("numbertitle"))
    set_numbertitle (val);
  else if (pname.compare ("outerposition"))
    set_outerposition (val);
  else if (pname.compare ("paperorientation"))
    set_paperorientation (val);
  else if (pname.compare ("paperposition"))
    set_paperposition (val);
  else if (pname.compare ("paperpositionmode"))
    set_paperpositionmode (val);
  else if (pname.compare ("papersize"))
    set_papersize (val);
  else if (pname.compare ("papertype"))
    set_papertype (val);
  else if (pname.compare ("paperunits"))
    set_paperunits (val);
  else if (pname.compare ("pointer"))
    set_pointer (val);
  else if (pname.compare ("pointershapecdata"))
    set_pointershapecdata (val);
  else if (pname.compare ("pointershapehotspot"))
    set_pointershapehotspot (val);
  else if (pname.compare ("position"))
    set_position (val);
  else if (pname.compare ("renderer"))
    set_renderer (val);
  else if (pname.compare ("renderermode"))
    set_renderermode (val);
  else if (pname.compare ("resize"))
    set_resize (val);
  else if (pname.compare ("resizefcn"))
    set_resizefcn (val);
  else if (pname.compare ("selectiontype"))
    set_selectiontype (val);
  else if (pname.compare ("sizechangedfcn"))
    set_sizechangedfcn (val);
  else if (pname.compare ("toolbar"))
    set_toolbar (val);
  else if (pname.compare ("units"))
    set_units (val);
  else if (pname.compare ("windowbuttondownfcn"))
    set_windowbuttondownfcn (val);
  else if (pname.compare ("windowbuttonmotionfcn"))
    set_windowbuttonmotionfcn (val);
  else if (pname.compare ("windowbuttonupfcn"))
    set_windowbuttonupfcn (val);
  else if (pname.compare ("windowkeypressfcn"))
    set_windowkeypressfcn (val);
  else if (pname.compare ("windowkeyreleasefcn"))
    set_windowkeyreleasefcn (val);
  else if (pname.compare ("windowscrollwheelfcn"))
    set_windowscrollwheelfcn (val);
  else if (pname.compare ("windowstyle"))
    set_windowstyle (val);
  else if (pname.compare ("pickableparts"))
    set_pickableparts (val);
  else if (pname.compare ("__gl_window__"))
    set___gl_window__ (val);
  else if (pname.compare ("__graphics_toolkit__"))
    set___graphics_toolkit__ (val);
  else if (pname.compare ("__guidata__"))
    set___guidata__ (val);
  else if (pname.compare ("__mouse_mode__"))
    set___mouse_mode__ (val);
  else if (pname.compare ("__printing__"))
    set___printing__ (val);
  else if (pname.compare ("__pan_mode__"))
    set___pan_mode__ (val);
  else if (pname.compare ("__plot_stream__"))
    set___plot_stream__ (val);
  else if (pname.compare ("__rotate_mode__"))
    set___rotate_mode__ (val);
  else if (pname.compare ("__zoom_mode__"))
    set___zoom_mode__ (val);
  else if (pname.compare ("doublebuffer"))
    set_doublebuffer (val);
  else if (pname.compare ("mincolormap"))
    set_mincolormap (val);
  else if (pname.compare ("wvisual"))
    set_wvisual (val);
  else if (pname.compare ("wvisualmode"))
    set_wvisualmode (val);
  else if (pname.compare ("xdisplay"))
    set_xdisplay (val);
  else if (pname.compare ("xvisual"))
    set_xvisual (val);
  else if (pname.compare ("xvisualmode"))
    set_xvisualmode (val);
  else
    base_properties::set (pname, val);
}

octave_value
figure::properties::get (bool all) const
{
  octave_map m = base_properties::get (all).map_value ();

  m.assign ("alphamap", octave_value (get_alphamap ()));
  m.assign ("buttondownfcn", octave_value (get_buttondownfcn ()));
  m.assign ("closerequestfcn", octave_value (get_closerequestfcn ()));
  m.assign ("color", octave_value (get_color ()));
  m.assign ("colormap", octave_value (get_colormap ()));
  m.assign ("currentaxes", octave_value (get_currentaxes ().as_octave_value ()));
  m.assign ("currentcharacter", octave_value (get_currentcharacter ()));
  m.assign ("currentobject", octave_value (get_currentobject ().as_octave_value ()));
  m.assign ("currentpoint", octave_value (get_currentpoint ()));
  m.assign ("dockcontrols", octave_value (get_dockcontrols ()));
  m.assign ("filename", octave_value (get_filename ()));
  m.assign ("graphicssmoothing", octave_value (get_graphicssmoothing ()));
  m.assign ("integerhandle", octave_value (get_integerhandle ()));
  m.assign ("inverthardcopy", octave_value (get_inverthardcopy ()));
  m.assign ("keypressfcn", octave_value (get_keypressfcn ()));
  m.assign ("keyreleasefcn", octave_value (get_keyreleasefcn ()));
  m.assign ("menubar", octave_value (get_menubar ()));
  m.assign ("name", octave_value (get_name ()));
  m.assign ("nextplot", octave_value (get_nextplot ()));
  m.assign ("numbertitle", octave_value (get_numbertitle ()));
  m.assign ("outerposition", octave_value (get_outerposition ()));
  m.assign ("paperorientation", octave_value (get_paperorientation ()));
  m.assign ("paperposition", octave_value (get_paperposition ()));
  m.assign ("paperpositionmode", octave_value (get_paperpositionmode ()));
  m.assign ("papersize", octave_value (get_papersize ()));
  m.assign ("papertype", octave_value (get_papertype ()));
  m.assign ("paperunits", octave_value (get_paperunits ()));
  m.assign ("pointer", octave_value (get_pointer ()));
  m.assign ("pointershapecdata", octave_value (get_pointershapecdata ()));
  m.assign ("pointershapehotspot", octave_value (get_pointershapehotspot ()));
  m.assign ("position", octave_value (get_position ()));
  m.assign ("renderer", octave_value (get_renderer ()));
  m.assign ("renderermode", octave_value (get_renderermode ()));
  m.assign ("resize", octave_value (get_resize ()));
  m.assign ("resizefcn", octave_value (get_resizefcn ()));
  m.assign ("selectiontype", octave_value (get_selectiontype ()));
  m.assign ("sizechangedfcn", octave_value (get_sizechangedfcn ()));
  m.assign ("toolbar", octave_value (get_toolbar ()));
  m.assign ("units", octave_value (get_units ()));
  m.assign ("windowbuttondownfcn", octave_value (get_windowbuttondownfcn ()));
  m.assign ("windowbuttonmotionfcn", octave_value (get_windowbuttonmotionfcn ()));
  m.assign ("windowbuttonupfcn", octave_value (get_windowbuttonupfcn ()));
  m.assign ("windowkeypressfcn", octave_value (get_windowkeypressfcn ()));
  m.assign ("windowkeyreleasefcn", octave_value (get_windowkeyreleasefcn ()));
  m.assign ("windowscrollwheelfcn", octave_value (get_windowscrollwheelfcn ()));
  m.assign ("windowstyle", octave_value (get_windowstyle ()));
  if (all)
    m.assign ("pickableparts", octave_value (get_pickableparts ()));
  if (all)
    m.assign ("__gl_extensions__", octave_value (get___gl_extensions__ ()));
  if (all)
    m.assign ("__gl_renderer__", octave_value (get___gl_renderer__ ()));
  if (all)
    m.assign ("__gl_vendor__", octave_value (get___gl_vendor__ ()));
  if (all)
    m.assign ("__gl_version__", octave_value (get___gl_version__ ()));
  if (all)
    m.assign ("__gl_window__", octave_value (get___gl_window__ ()));
  if (all)
    m.assign ("__graphics_toolkit__", octave_value (get___graphics_toolkit__ ()));
  if (all)
    m.assign ("__guidata__", octave_value (get___guidata__ ()));
  if (all)
    m.assign ("__mouse_mode__", octave_value (get___mouse_mode__ ()));
  if (all)
    m.assign ("__printing__", octave_value (get___printing__ ()));
  if (all)
    m.assign ("__pan_mode__", octave_value (get___pan_mode__ ()));
  if (all)
    m.assign ("__plot_stream__", octave_value (get___plot_stream__ ()));
  if (all)
    m.assign ("__rotate_mode__", octave_value (get___rotate_mode__ ()));
  if (all)
    m.assign ("__zoom_mode__", octave_value (get___zoom_mode__ ()));
  if (all)
    m.assign ("doublebuffer", octave_value (get_doublebuffer ()));
  if (all)
    m.assign ("mincolormap", octave_value (get_mincolormap ()));
  if (all)
    m.assign ("wvisual", octave_value (get_wvisual ()));
  if (all)
    m.assign ("wvisualmode", octave_value (get_wvisualmode ()));
  if (all)
    m.assign ("xdisplay", octave_value (get_xdisplay ()));
  if (all)
    m.assign ("xvisual", octave_value (get_xvisual ()));
  if (all)
    m.assign ("xvisualmode", octave_value (get_xvisualmode ()));

  return m;
}

octave_value
figure::properties::get (const caseless_str& pname_arg) const
{
  octave_value retval;

  const std::set<std::string>& pnames = all_property_names ();

  caseless_str pname = validate_property_name ("get", go_name, pnames, pname_arg);

  if (pname.compare ("alphamap"))
    retval = get_alphamap ();
  else if (pname.compare ("buttondownfcn"))
    retval = get_buttondownfcn ();
  else if (pname.compare ("closerequestfcn"))
    retval = get_closerequestfcn ();
  else if (pname.compare ("color"))
    retval = get_color ();
  else if (pname.compare ("colormap"))
    retval = get_colormap ();
  else if (pname.compare ("currentaxes"))
    retval = get_currentaxes ().as_octave_value ();
  else if (pname.compare ("currentcharacter"))
    retval = get_currentcharacter ();
  else if (pname.compare ("currentobject"))
    retval = get_currentobject ().as_octave_value ();
  else if (pname.compare ("currentpoint"))
    retval = get_currentpoint ();
  else if (pname.compare ("dockcontrols"))
    retval = get_dockcontrols ();
  else if (pname.compare ("filename"))
    retval = get_filename ();
  else if (pname.compare ("graphicssmoothing"))
    retval = get_graphicssmoothing ();
  else if (pname.compare ("integerhandle"))
    retval = get_integerhandle ();
  else if (pname.compare ("inverthardcopy"))
    retval = get_inverthardcopy ();
  else if (pname.compare ("keypressfcn"))
    retval = get_keypressfcn ();
  else if (pname.compare ("keyreleasefcn"))
    retval = get_keyreleasefcn ();
  else if (pname.compare ("menubar"))
    retval = get_menubar ();
  else if (pname.compare ("name"))
    retval = get_name ();
  else if (pname.compare ("nextplot"))
    retval = get_nextplot ();
  else if (pname.compare ("numbertitle"))
    retval = get_numbertitle ();
  else if (pname.compare ("outerposition"))
    retval = get_outerposition ();
  else if (pname.compare ("paperorientation"))
    retval = get_paperorientation ();
  else if (pname.compare ("paperposition"))
    retval = get_paperposition ();
  else if (pname.compare ("paperpositionmode"))
    retval = get_paperpositionmode ();
  else if (pname.compare ("papersize"))
    retval = get_papersize ();
  else if (pname.compare ("papertype"))
    retval = get_papertype ();
  else if (pname.compare ("paperunits"))
    retval = get_paperunits ();
  else if (pname.compare ("pointer"))
    retval = get_pointer ();
  else if (pname.compare ("pointershapecdata"))
    retval = get_pointershapecdata ();
  else if (pname.compare ("pointershapehotspot"))
    retval = get_pointershapehotspot ();
  else if (pname.compare ("position"))
    retval = get_position ();
  else if (pname.compare ("renderer"))
    retval = get_renderer ();
  else if (pname.compare ("renderermode"))
    retval = get_renderermode ();
  else if (pname.compare ("resize"))
    retval = get_resize ();
  else if (pname.compare ("resizefcn"))
    retval = get_resizefcn ();
  else if (pname.compare ("selectiontype"))
    retval = get_selectiontype ();
  else if (pname.compare ("sizechangedfcn"))
    retval = get_sizechangedfcn ();
  else if (pname.compare ("toolbar"))
    retval = get_toolbar ();
  else if (pname.compare ("units"))
    retval = get_units ();
  else if (pname.compare ("windowbuttondownfcn"))
    retval = get_windowbuttondownfcn ();
  else if (pname.compare ("windowbuttonmotionfcn"))
    retval = get_windowbuttonmotionfcn ();
  else if (pname.compare ("windowbuttonupfcn"))
    retval = get_windowbuttonupfcn ();
  else if (pname.compare ("windowkeypressfcn"))
    retval = get_windowkeypressfcn ();
  else if (pname.compare ("windowkeyreleasefcn"))
    retval = get_windowkeyreleasefcn ();
  else if (pname.compare ("windowscrollwheelfcn"))
    retval = get_windowscrollwheelfcn ();
  else if (pname.compare ("windowstyle"))
    retval = get_windowstyle ();
  else if (pname.compare ("pickableparts"))
    retval = get_pickableparts ();
  else if (pname.compare ("__gl_extensions__"))
    retval = get___gl_extensions__ ();
  else if (pname.compare ("__gl_renderer__"))
    retval = get___gl_renderer__ ();
  else if (pname.compare ("__gl_vendor__"))
    retval = get___gl_vendor__ ();
  else if (pname.compare ("__gl_version__"))
    retval = get___gl_version__ ();
  else if (pname.compare ("__gl_window__"))
    retval = get___gl_window__ ();
  else if (pname.compare ("__graphics_toolkit__"))
    retval = get___graphics_toolkit__ ();
  else if (pname.compare ("__guidata__"))
    retval = get___guidata__ ();
  else if (pname.compare ("__mouse_mode__"))
    retval = get___mouse_mode__ ();
  else if (pname.compare ("__printing__"))
    retval = get___printing__ ();
  else if (pname.compare ("__pan_mode__"))
    retval = get___pan_mode__ ();
  else if (pname.compare ("__plot_stream__"))
    retval = get___plot_stream__ ();
  else if (pname.compare ("__rotate_mode__"))
    retval = get___rotate_mode__ ();
  else if (pname.compare ("__zoom_mode__"))
    retval = get___zoom_mode__ ();
  else if (pname.compare ("doublebuffer"))
    retval = get_doublebuffer ();
  else if (pname.compare ("mincolormap"))
    retval = get_mincolormap ();
  else if (pname.compare ("wvisual"))
    retval = get_wvisual ();
  else if (pname.compare ("wvisualmode"))
    retval = get_wvisualmode ();
  else if (pname.compare ("xdisplay"))
    retval = get_xdisplay ();
  else if (pname.compare ("xvisual"))
    retval = get_xvisual ();
  else if (pname.compare ("xvisualmode"))
    retval = get_xvisualmode ();
  else
    retval = base_properties::get (pname);

  return retval;
}

property
figure::properties::get_property (const caseless_str& pname_arg)
{
  const std::set<std::string>& pnames = all_property_names ();

  caseless_str pname = validate_property_name ("get", go_name, pnames, pname_arg);

  if (pname.compare ("alphamap"))
    return property (&alphamap, true);
  else if (pname.compare ("buttondownfcn"))
    return property (&buttondownfcn, true);
  else if (pname.compare ("closerequestfcn"))
    return property (&closerequestfcn, true);
  else if (pname.compare ("color"))
    return property (&color, true);
  else if (pname.compare ("colormap"))
    return property (&colormap, true);
  else if (pname.compare ("currentaxes"))
    return property (&currentaxes, true);
  else if (pname.compare ("currentcharacter"))
    return property (&currentcharacter, true);
  else if (pname.compare ("currentobject"))
    return property (&currentobject, true);
  else if (pname.compare ("currentpoint"))
    return property (&currentpoint, true);
  else if (pname.compare ("dockcontrols"))
    return property (&dockcontrols, true);
  else if (pname.compare ("filename"))
    return property (&filename, true);
  else if (pname.compare ("graphicssmoothing"))
    return property (&graphicssmoothing, true);
  else if (pname.compare ("integerhandle"))
    return property (&integerhandle, true);
  else if (pname.compare ("inverthardcopy"))
    return property (&inverthardcopy, true);
  else if (pname.compare ("keypressfcn"))
    return property (&keypressfcn, true);
  else if (pname.compare ("keyreleasefcn"))
    return property (&keyreleasefcn, true);
  else if (pname.compare ("menubar"))
    return property (&menubar, true);
  else if (pname.compare ("name"))
    return property (&name, true);
  else if (pname.compare ("nextplot"))
    return property (&nextplot, true);
  else if (pname.compare ("numbertitle"))
    return property (&numbertitle, true);
  else if (pname.compare ("outerposition"))
    return property (&outerposition, true);
  else if (pname.compare ("paperorientation"))
    return property (&paperorientation, true);
  else if (pname.compare ("paperposition"))
    return property (&paperposition, true);
  else if (pname.compare ("paperpositionmode"))
    return property (&paperpositionmode, true);
  else if (pname.compare ("papersize"))
    return property (&papersize, true);
  else if (pname.compare ("papertype"))
    return property (&papertype, true);
  else if (pname.compare ("paperunits"))
    return property (&paperunits, true);
  else if (pname.compare ("pointer"))
    return property (&pointer, true);
  else if (pname.compare ("pointershapecdata"))
    return property (&pointershapecdata, true);
  else if (pname.compare ("pointershapehotspot"))
    return property (&pointershapehotspot, true);
  else if (pname.compare ("position"))
    return property (&position, true);
  else if (pname.compare ("renderer"))
    return property (&renderer, true);
  else if (pname.compare ("renderermode"))
    return property (&renderermode, true);
  else if (pname.compare ("resize"))
    return property (&resize, true);
  else if (pname.compare ("resizefcn"))
    return property (&resizefcn, true);
  else if (pname.compare ("selectiontype"))
    return property (&selectiontype, true);
  else if (pname.compare ("sizechangedfcn"))
    return property (&sizechangedfcn, true);
  else if (pname.compare ("toolbar"))
    return property (&toolbar, true);
  else if (pname.compare ("units"))
    return property (&units, true);
  else if (pname.compare ("windowbuttondownfcn"))
    return property (&windowbuttondownfcn, true);
  else if (pname.compare ("windowbuttonmotionfcn"))
    return property (&windowbuttonmotionfcn, true);
  else if (pname.compare ("windowbuttonupfcn"))
    return property (&windowbuttonupfcn, true);
  else if (pname.compare ("windowkeypressfcn"))
    return property (&windowkeypressfcn, true);
  else if (pname.compare ("windowkeyreleasefcn"))
    return property (&windowkeyreleasefcn, true);
  else if (pname.compare ("windowscrollwheelfcn"))
    return property (&windowscrollwheelfcn, true);
  else if (pname.compare ("windowstyle"))
    return property (&windowstyle, true);
  else if (pname.compare ("pickableparts"))
    return property (&pickableparts, true);
  else if (pname.compare ("__gl_extensions__"))
    return property (&__gl_extensions__, true);
  else if (pname.compare ("__gl_renderer__"))
    return property (&__gl_renderer__, true);
  else if (pname.compare ("__gl_vendor__"))
    return property (&__gl_vendor__, true);
  else if (pname.compare ("__gl_version__"))
    return property (&__gl_version__, true);
  else if (pname.compare ("__gl_window__"))
    return property (&__gl_window__, true);
  else if (pname.compare ("__graphics_toolkit__"))
    return property (&__graphics_toolkit__, true);
  else if (pname.compare ("__guidata__"))
    return property (&__guidata__, true);
  else if (pname.compare ("__mouse_mode__"))
    return property (&__mouse_mode__, true);
  else if (pname.compare ("__printing__"))
    return property (&__printing__, true);
  else if (pname.compare ("__pan_mode__"))
    return property (&__pan_mode__, true);
  else if (pname.compare ("__plot_stream__"))
    return property (&__plot_stream__, true);
  else if (pname.compare ("__rotate_mode__"))
    return property (&__rotate_mode__, true);
  else if (pname.compare ("__zoom_mode__"))
    return property (&__zoom_mode__, true);
  else if (pname.compare ("doublebuffer"))
    return property (&doublebuffer, true);
  else if (pname.compare ("mincolormap"))
    return property (&mincolormap, true);
  else if (pname.compare ("wvisual"))
    return property (&wvisual, true);
  else if (pname.compare ("wvisualmode"))
    return property (&wvisualmode, true);
  else if (pname.compare ("xdisplay"))
    return property (&xdisplay, true);
  else if (pname.compare ("xvisual"))
    return property (&xvisual, true);
  else if (pname.compare ("xvisualmode"))
    return property (&xvisualmode, true);
  else
    return base_properties::get_property (pname);
}

property_list::pval_map_type
figure::properties::factory_defaults (void)
{
  property_list::pval_map_type m = base_properties::factory_defaults ();

  m["alphamap"] = Matrix (64, 1, 1);
  m["buttondownfcn"] = Matrix ();
  m["closerequestfcn"] = "closereq";
  m["color"] = color_property (color_values (1, 1, 1), radio_values ("none"));
  m["colormap"] = viridis_colormap ();
  m["currentaxes"] = graphics_handle ().as_octave_value ();
  m["currentcharacter"] = "";
  m["currentobject"] = graphics_handle ().as_octave_value ();
  m["currentpoint"] = Matrix (2, 1, 0);
  m["dockcontrols"] = "off";
  m["filename"] = "";
  m["graphicssmoothing"] = "on";
  m["integerhandle"] = "on";
  m["inverthardcopy"] = "on";
  m["keypressfcn"] = Matrix ();
  m["keyreleasefcn"] = Matrix ();
  m["menubar"] = "figure";
  m["name"] = "";
  m["nextplot"] = "add";
  m["numbertitle"] = "on";
  m["outerposition"] = Matrix (1, 4, -1.0);
  m["paperorientation"] = "portrait";
  m["paperposition"] = default_figure_paperposition ();
  m["paperpositionmode"] = "manual";
  m["papersize"] = default_figure_papersize ();
  m["papertype"] = "usletter";
  m["paperunits"] = "inches";
  m["pointer"] = "arrow";
  m["pointershapecdata"] = Matrix (16, 16, 0);
  m["pointershapehotspot"] = Matrix (1, 2, 0);
  m["position"] = default_figure_position ();
  m["renderer"] = "opengl";
  m["renderermode"] = "auto";
  m["resize"] = "on";
  m["resizefcn"] = Matrix ();
  m["selectiontype"] = "normal";
  m["sizechangedfcn"] = Matrix ();
  m["toolbar"] = "auto";
  m["units"] = "pixels";
  m["windowbuttondownfcn"] = Matrix ();
  m["windowbuttonmotionfcn"] = Matrix ();
  m["windowbuttonupfcn"] = Matrix ();
  m["windowkeypressfcn"] = Matrix ();
  m["windowkeyreleasefcn"] = Matrix ();
  m["windowscrollwheelfcn"] = Matrix ();
  m["windowstyle"] = "normal";
  m["pickableparts"] = "visible";
  m["__gl_extensions__"] = "";
  m["__gl_renderer__"] = "";
  m["__gl_vendor__"] = "";
  m["__gl_version__"] = "";
  m["__gl_window__"] = "off";
  m["__graphics_toolkit__"] = default_graphics_toolkit ();
  m["__guidata__"] = Matrix ();
  m["__mouse_mode__"] = "none";
  m["__printing__"] = "off";
  m["__pan_mode__"] = Matrix ();
  m["__plot_stream__"] = Matrix ();
  m["__rotate_mode__"] = Matrix ();
  m["__zoom_mode__"] = Matrix ();
  m["doublebuffer"] = "on";
  m["mincolormap"] = 64;
  m["wvisual"] = "";
  m["wvisualmode"] = "auto";
  m["xdisplay"] = "";
  m["xvisual"] = "";
  m["xvisualmode"] = "auto";

  return m;
}

std::string figure::properties::go_name ("figure");

std::set<std::string>
figure::properties::core_property_names (void)
{
  static std::set<std::string> all_pnames;

  static bool initialized = false;

  if (! initialized)
    {
      all_pnames.insert ("alphamap");
      all_pnames.insert ("buttondownfcn");
      all_pnames.insert ("closerequestfcn");
      all_pnames.insert ("color");
      all_pnames.insert ("colormap");
      all_pnames.insert ("currentaxes");
      all_pnames.insert ("currentcharacter");
      all_pnames.insert ("currentobject");
      all_pnames.insert ("currentpoint");
      all_pnames.insert ("dockcontrols");
      all_pnames.insert ("filename");
      all_pnames.insert ("graphicssmoothing");
      all_pnames.insert ("integerhandle");
      all_pnames.insert ("inverthardcopy");
      all_pnames.insert ("keypressfcn");
      all_pnames.insert ("keyreleasefcn");
      all_pnames.insert ("menubar");
      all_pnames.insert ("name");
      all_pnames.insert ("nextplot");
      all_pnames.insert ("numbertitle");
      all_pnames.insert ("outerposition");
      all_pnames.insert ("paperorientation");
      all_pnames.insert ("paperposition");
      all_pnames.insert ("paperpositionmode");
      all_pnames.insert ("papersize");
      all_pnames.insert ("papertype");
      all_pnames.insert ("paperunits");
      all_pnames.insert ("pointer");
      all_pnames.insert ("pointershapecdata");
      all_pnames.insert ("pointershapehotspot");
      all_pnames.insert ("position");
      all_pnames.insert ("renderer");
      all_pnames.insert ("renderermode");
      all_pnames.insert ("resize");
      all_pnames.insert ("resizefcn");
      all_pnames.insert ("selectiontype");
      all_pnames.insert ("sizechangedfcn");
      all_pnames.insert ("toolbar");
      all_pnames.insert ("units");
      all_pnames.insert ("windowbuttondownfcn");
      all_pnames.insert ("windowbuttonmotionfcn");
      all_pnames.insert ("windowbuttonupfcn");
      all_pnames.insert ("windowkeypressfcn");
      all_pnames.insert ("windowkeyreleasefcn");
      all_pnames.insert ("windowscrollwheelfcn");
      all_pnames.insert ("windowstyle");
      all_pnames.insert ("pickableparts");
      all_pnames.insert ("__gl_extensions__");
      all_pnames.insert ("__gl_renderer__");
      all_pnames.insert ("__gl_vendor__");
      all_pnames.insert ("__gl_version__");
      all_pnames.insert ("__gl_window__");
      all_pnames.insert ("__graphics_toolkit__");
      all_pnames.insert ("__guidata__");
      all_pnames.insert ("__mouse_mode__");
      all_pnames.insert ("__printing__");
      all_pnames.insert ("__pan_mode__");
      all_pnames.insert ("__plot_stream__");
      all_pnames.insert ("__rotate_mode__");
      all_pnames.insert ("__zoom_mode__");
      all_pnames.insert ("doublebuffer");
      all_pnames.insert ("mincolormap");
      all_pnames.insert ("wvisual");
      all_pnames.insert ("wvisualmode");
      all_pnames.insert ("xdisplay");
      all_pnames.insert ("xvisual");
      all_pnames.insert ("xvisualmode");

      std::set<std::string> base_pnames = base_properties::core_property_names ();
      all_pnames.insert (base_pnames.begin (), base_pnames.end ());

      initialized = true;
    }

  return all_pnames;
}

bool
figure::properties::has_core_property (const caseless_str& pname)
{
  std::set<std::string> pnames = core_property_names ();

  return pnames.find (pname) != pnames.end ();
}

std::set<std::string>
figure::properties::readonly_property_names (void)
{
  static std::set<std::string> all_pnames;

  static bool initialized = false;

  if (! initialized)
    {
      all_pnames.insert ("currentcharacter");
      all_pnames.insert ("currentobject");
      all_pnames.insert ("currentpoint");
      all_pnames.insert ("__gl_extensions__");
      all_pnames.insert ("__gl_renderer__");
      all_pnames.insert ("__gl_vendor__");
      all_pnames.insert ("__gl_version__");

      std::set<std::string> base_pnames = base_properties::readonly_property_names ();
      all_pnames.insert (base_pnames.begin (), base_pnames.end ());

      initialized = true;
    }

  return all_pnames;
}

bool
figure::properties::has_readonly_property (const caseless_str& pname)
{
  std::set<std::string> pnames = readonly_property_names ();

  return pnames.find (pname) != pnames.end ();
}

std::set<std::string>
figure::properties::all_property_names (void) const
{
  static std::set<std::string> all_pnames = core_property_names ();

  std::set<std::string> retval = all_pnames;
  std::set<std::string> base_props = base_properties::all_property_names ();
  retval.insert (base_props.begin (), base_props.end ());

  return retval;
}

bool
figure::properties::has_property (const caseless_str& pname) const
{
  std::set<std::string> pnames = all_property_names ();

  return pnames.find (pname) != pnames.end ();
}

// ******** axes ********

axes::properties::properties (const graphics_handle& mh, const graphics_handle& p)
  : base_properties (go_name, mh, p),
    activepositionproperty ("activepositionproperty", mh, "{outerposition}|position"),
    alim ("alim", mh, default_lim ()),
    alimmode ("alimmode", mh, "{auto}|manual"),
    ambientlightcolor ("ambientlightcolor", mh, color_values (1, 1, 1)),
    box ("box", mh, "off"),
    boxstyle ("boxstyle", mh, "{back}|full"),
    cameraposition ("cameraposition", mh, Matrix (1, 3, 0.0)),
    camerapositionmode ("camerapositionmode", mh, "{auto}|manual"),
    cameratarget ("cameratarget", mh, Matrix (1, 3, 0.0)),
    cameratargetmode ("cameratargetmode", mh, "{auto}|manual"),
    cameraupvector ("cameraupvector", mh, Matrix (1, 3, 0.0)),
    cameraupvectormode ("cameraupvectormode", mh, "{auto}|manual"),
    cameraviewangle ("cameraviewangle", mh, 6.6086),
    cameraviewanglemode ("cameraviewanglemode", mh, "{auto}|manual"),
    clim ("clim", mh, default_lim ()),
    climmode ("climmode", mh, "{auto}|manual"),
    clippingstyle ("clippingstyle", mh, "{3dbox}|rectangle"),
    color ("color", mh, color_property (color_values (1, 1, 1), radio_values ("none"))),
    colormap ("colormap", mh, Matrix ()),
    colororder ("colororder", mh, default_colororder ()),
    colororderindex ("colororderindex", mh, 1.0),
    currentpoint ("currentpoint", mh, Matrix (2, 3, 0.0)),
    dataaspectratio ("dataaspectratio", mh, Matrix (1, 3, 1.0)),
    dataaspectratiomode ("dataaspectratiomode", mh, "{auto}|manual"),
    drawmode ("drawmode", mh, "{normal}|fast"),
    fontangle ("fontangle", mh, "{normal}|italic"),
    fontname ("fontname", mh, OCTAVE_DEFAULT_FONTNAME),
    fontsize ("fontsize", mh, 10),
    fontunits ("fontunits", mh, "{points}|inches|centimeters|normalized|pixels"),
    fontsmoothing ("fontsmoothing", mh, "on"),
    fontweight ("fontweight", mh, "{normal}|bold"),
    gridalpha ("gridalpha", mh, 0.15),
    gridalphamode ("gridalphamode", mh, "{auto}|manual"),
    gridcolor ("gridcolor", mh, color_property (color_values (0.15, 0.15, 0.15), radio_values ("none"))),
    gridcolormode ("gridcolormode", mh, "{auto}|manual"),
    gridlinestyle ("gridlinestyle", mh, "{-}|--|:|-.|none"),
    labelfontsizemultiplier ("labelfontsizemultiplier", mh, 1.1),
    layer ("layer", mh, "{bottom}|top"),
    linestyleorder ("linestyleorder", mh, "-"),
    linestyleorderindex ("linestyleorderindex", mh, 1.0),
    linewidth ("linewidth", mh, 0.5),
    minorgridalpha ("minorgridalpha", mh, 0.25),
    minorgridalphamode ("minorgridalphamode", mh, "{auto}|manual"),
    minorgridcolor ("minorgridcolor", mh, color_property (color_values (0.1, 0.1, 0.1), radio_values ("none"))),
    minorgridcolormode ("minorgridcolormode", mh, "{auto}|manual"),
    minorgridlinestyle ("minorgridlinestyle", mh, "{:}|-|--|-.|none"),
    nextplot ("nextplot", mh, "{replace}|add|replacechildren"),
    outerposition ("outerposition", mh, default_axes_outerposition ()),
    plotboxaspectratio ("plotboxaspectratio", mh, Matrix (1, 3, 1.0)),
    plotboxaspectratiomode ("plotboxaspectratiomode", mh, "{auto}|manual"),
    position ("position", mh, default_axes_position ()),
    projection ("projection", mh, "{orthographic}|perspective"),
    sortmethod ("sortmethod", mh, "{depth}|childorder"),
    tickdir ("tickdir", mh, "{in}|out"),
    tickdirmode ("tickdirmode", mh, "{auto}|manual"),
    ticklabelinterpreter ("ticklabelinterpreter", mh, "{tex}|latex|none"),
    ticklength ("ticklength", mh, default_axes_ticklength ()),
    tightinset ("tightinset", mh, Matrix (1, 4, 0.0)),
    title ("title", mh, gh_manager::make_graphics_handle ("text", __myhandle__, false, false, false)),
    titlefontsizemultiplier ("titlefontsizemultiplier", mh, 1.1),
    titlefontweight ("titlefontweight", mh, "{bold}|normal"),
    units ("units", mh, "{normalized}|inches|centimeters|points|pixels|characters"),
    view ("view", mh, default_axes_view ()),
    xaxislocation ("xaxislocation", mh, "{bottom}|top|origin|zero"),
    xcolor ("xcolor", mh, color_values (0.15, 0.15, 0.15)),
    xcolormode ("xcolormode", mh, "{auto}|manual"),
    xdir ("xdir", mh, "{normal}|reverse"),
    xgrid ("xgrid", mh, "off"),
    xlabel ("xlabel", mh, gh_manager::make_graphics_handle ("text", __myhandle__, false, false, false)),
    xlim ("xlim", mh, default_lim ()),
    xlimmode ("xlimmode", mh, "{auto}|manual"),
    xminorgrid ("xminorgrid", mh, "off"),
    xminortick ("xminortick", mh, "off"),
    xscale ("xscale", mh, "{linear}|log"),
    xtick ("xtick", mh, default_axes_tick ()),
    xticklabel ("xticklabel", mh, ""),
    xticklabelmode ("xticklabelmode", mh, "{auto}|manual"),
    xticklabelrotation ("xticklabelrotation", mh, 0.0),
    xtickmode ("xtickmode", mh, "{auto}|manual"),
    yaxislocation ("yaxislocation", mh, "{left}|right|origin|zero"),
    ycolor ("ycolor", mh, color_values (0.15, 0.15, 0.15)),
    ycolormode ("ycolormode", mh, "{auto}|manual"),
    ydir ("ydir", mh, "{normal}|reverse"),
    ygrid ("ygrid", mh, "off"),
    ylabel ("ylabel", mh, gh_manager::make_graphics_handle ("text", __myhandle__, false, false, false)),
    ylim ("ylim", mh, default_lim ()),
    ylimmode ("ylimmode", mh, "{auto}|manual"),
    yminorgrid ("yminorgrid", mh, "off"),
    yminortick ("yminortick", mh, "off"),
    yscale ("yscale", mh, "{linear}|log"),
    ytick ("ytick", mh, default_axes_tick ()),
    yticklabel ("yticklabel", mh, ""),
    yticklabelmode ("yticklabelmode", mh, "{auto}|manual"),
    yticklabelrotation ("yticklabelrotation", mh, 0.0),
    ytickmode ("ytickmode", mh, "{auto}|manual"),
    zcolor ("zcolor", mh, color_values (0.15, 0.15, 0.15)),
    zcolormode ("zcolormode", mh, "{auto}|manual"),
    zdir ("zdir", mh, "{normal}|reverse"),
    zgrid ("zgrid", mh, "off"),
    zlabel ("zlabel", mh, gh_manager::make_graphics_handle ("text", __myhandle__, false, false, false)),
    zlim ("zlim", mh, default_lim ()),
    zlimmode ("zlimmode", mh, "{auto}|manual"),
    zminorgrid ("zminorgrid", mh, "off"),
    zminortick ("zminortick", mh, "off"),
    zscale ("zscale", mh, "{linear}|log"),
    ztick ("ztick", mh, default_axes_tick ()),
    zticklabel ("zticklabel", mh, ""),
    zticklabelmode ("zticklabelmode", mh, "{auto}|manual"),
    zticklabelrotation ("zticklabelrotation", mh, 0.0),
    ztickmode ("ztickmode", mh, "{auto}|manual"),
    __colormap__ ("__colormap__", mh, Matrix ()),
    mousewheelzoom ("mousewheelzoom", mh, 0.5),
    __autopos_tag__ ("__autopos_tag__", mh, "{none}|subplot"),
    looseinset ("looseinset", mh, Matrix (1, 4, 0.0)),
    xminortickvalues ("xminortickvalues", mh, Matrix ()),
    yminortickvalues ("yminortickvalues", mh, Matrix ()),
    zminortickvalues ("zminortickvalues", mh, Matrix ()),
    __fontsize_points__ ("__fontsize_points__", mh, 0)
{
  activepositionproperty.set_id (ID_ACTIVEPOSITIONPROPERTY);
  alim.set_id (ID_ALIM);
  alimmode.set_id (ID_ALIMMODE);
  ambientlightcolor.set_id (ID_AMBIENTLIGHTCOLOR);
  box.set_id (ID_BOX);
  boxstyle.set_id (ID_BOXSTYLE);
  cameraposition.set_id (ID_CAMERAPOSITION);
  camerapositionmode.set_id (ID_CAMERAPOSITIONMODE);
  cameratarget.set_id (ID_CAMERATARGET);
  cameratargetmode.set_id (ID_CAMERATARGETMODE);
  cameraupvector.set_id (ID_CAMERAUPVECTOR);
  cameraupvectormode.set_id (ID_CAMERAUPVECTORMODE);
  cameraviewangle.set_id (ID_CAMERAVIEWANGLE);
  cameraviewanglemode.set_id (ID_CAMERAVIEWANGLEMODE);
  clim.set_id (ID_CLIM);
  climmode.set_id (ID_CLIMMODE);
  clippingstyle.set_id (ID_CLIPPINGSTYLE);
  color.set_id (ID_COLOR);
  colormap.set_id (ID_COLORMAP);
  colororder.set_id (ID_COLORORDER);
  colororderindex.set_id (ID_COLORORDERINDEX);
  currentpoint.set_id (ID_CURRENTPOINT);
  dataaspectratio.set_id (ID_DATAASPECTRATIO);
  dataaspectratiomode.set_id (ID_DATAASPECTRATIOMODE);
  drawmode.set_id (ID_DRAWMODE);
  drawmode.set_hidden (true);
  fontangle.set_id (ID_FONTANGLE);
  fontname.set_id (ID_FONTNAME);
  fontsize.set_id (ID_FONTSIZE);
  fontunits.set_id (ID_FONTUNITS);
  fontsmoothing.set_id (ID_FONTSMOOTHING);
  fontweight.set_id (ID_FONTWEIGHT);
  gridalpha.set_id (ID_GRIDALPHA);
  gridalphamode.set_id (ID_GRIDALPHAMODE);
  gridcolor.set_id (ID_GRIDCOLOR);
  gridcolormode.set_id (ID_GRIDCOLORMODE);
  gridlinestyle.set_id (ID_GRIDLINESTYLE);
  labelfontsizemultiplier.set_id (ID_LABELFONTSIZEMULTIPLIER);
  layer.set_id (ID_LAYER);
  linestyleorder.set_id (ID_LINESTYLEORDER);
  linestyleorderindex.set_id (ID_LINESTYLEORDERINDEX);
  linewidth.set_id (ID_LINEWIDTH);
  minorgridalpha.set_id (ID_MINORGRIDALPHA);
  minorgridalphamode.set_id (ID_MINORGRIDALPHAMODE);
  minorgridcolor.set_id (ID_MINORGRIDCOLOR);
  minorgridcolormode.set_id (ID_MINORGRIDCOLORMODE);
  minorgridlinestyle.set_id (ID_MINORGRIDLINESTYLE);
  nextplot.set_id (ID_NEXTPLOT);
  outerposition.set_id (ID_OUTERPOSITION);
  plotboxaspectratio.set_id (ID_PLOTBOXASPECTRATIO);
  plotboxaspectratiomode.set_id (ID_PLOTBOXASPECTRATIOMODE);
  position.set_id (ID_POSITION);
  projection.set_id (ID_PROJECTION);
  sortmethod.set_id (ID_SORTMETHOD);
  tickdir.set_id (ID_TICKDIR);
  tickdirmode.set_id (ID_TICKDIRMODE);
  ticklabelinterpreter.set_id (ID_TICKLABELINTERPRETER);
  ticklength.set_id (ID_TICKLENGTH);
  tightinset.set_id (ID_TIGHTINSET);
  title.set_id (ID_TITLE);
  titlefontsizemultiplier.set_id (ID_TITLEFONTSIZEMULTIPLIER);
  titlefontweight.set_id (ID_TITLEFONTWEIGHT);
  units.set_id (ID_UNITS);
  view.set_id (ID_VIEW);
  xaxislocation.set_id (ID_XAXISLOCATION);
  xcolor.set_id (ID_XCOLOR);
  xcolormode.set_id (ID_XCOLORMODE);
  xdir.set_id (ID_XDIR);
  xgrid.set_id (ID_XGRID);
  xlabel.set_id (ID_XLABEL);
  xlim.set_id (ID_XLIM);
  xlimmode.set_id (ID_XLIMMODE);
  xminorgrid.set_id (ID_XMINORGRID);
  xminortick.set_id (ID_XMINORTICK);
  xscale.set_id (ID_XSCALE);
  xtick.set_id (ID_XTICK);
  xticklabel.set_id (ID_XTICKLABEL);
  xticklabelmode.set_id (ID_XTICKLABELMODE);
  xticklabelrotation.set_id (ID_XTICKLABELROTATION);
  xtickmode.set_id (ID_XTICKMODE);
  yaxislocation.set_id (ID_YAXISLOCATION);
  ycolor.set_id (ID_YCOLOR);
  ycolormode.set_id (ID_YCOLORMODE);
  ydir.set_id (ID_YDIR);
  ygrid.set_id (ID_YGRID);
  ylabel.set_id (ID_YLABEL);
  ylim.set_id (ID_YLIM);
  ylimmode.set_id (ID_YLIMMODE);
  yminorgrid.set_id (ID_YMINORGRID);
  yminortick.set_id (ID_YMINORTICK);
  yscale.set_id (ID_YSCALE);
  ytick.set_id (ID_YTICK);
  yticklabel.set_id (ID_YTICKLABEL);
  yticklabelmode.set_id (ID_YTICKLABELMODE);
  yticklabelrotation.set_id (ID_YTICKLABELROTATION);
  ytickmode.set_id (ID_YTICKMODE);
  zcolor.set_id (ID_ZCOLOR);
  zcolormode.set_id (ID_ZCOLORMODE);
  zdir.set_id (ID_ZDIR);
  zgrid.set_id (ID_ZGRID);
  zlabel.set_id (ID_ZLABEL);
  zlim.set_id (ID_ZLIM);
  zlimmode.set_id (ID_ZLIMMODE);
  zminorgrid.set_id (ID_ZMINORGRID);
  zminortick.set_id (ID_ZMINORTICK);
  zscale.set_id (ID_ZSCALE);
  ztick.set_id (ID_ZTICK);
  zticklabel.set_id (ID_ZTICKLABEL);
  zticklabelmode.set_id (ID_ZTICKLABELMODE);
  zticklabelrotation.set_id (ID_ZTICKLABELROTATION);
  ztickmode.set_id (ID_ZTICKMODE);
  __colormap__.set_id (ID___COLORMAP__);
  __colormap__.set_hidden (true);
  mousewheelzoom.set_id (ID_MOUSEWHEELZOOM);
  __autopos_tag__.set_id (ID___AUTOPOS_TAG__);
  __autopos_tag__.set_hidden (true);
  looseinset.set_id (ID_LOOSEINSET);
  looseinset.set_hidden (true);
  xminortickvalues.set_id (ID_XMINORTICKVALUES);
  xminortickvalues.set_hidden (true);
  yminortickvalues.set_id (ID_YMINORTICKVALUES);
  yminortickvalues.set_hidden (true);
  zminortickvalues.set_id (ID_ZMINORTICKVALUES);
  zminortickvalues.set_hidden (true);
  __fontsize_points__.set_id (ID___FONTSIZE_POINTS__);
  __fontsize_points__.set_hidden (true);
  init ();
}

void
axes::properties::set (const caseless_str& pname_arg, const octave_value& val)
{
  const std::set<std::string>& pnames = all_property_names ();

  caseless_str pname = validate_property_name ("set", go_name, pnames, pname_arg);

  if (has_readonly_property (pname))
    {
      error ("set: \"%s\" is read-only", pname.c_str ());
      return;
    }

  if (pname.compare ("activepositionproperty"))
    set_activepositionproperty (val);
  else if (pname.compare ("alim"))
    set_alim (val);
  else if (pname.compare ("alimmode"))
    set_alimmode (val);
  else if (pname.compare ("ambientlightcolor"))
    set_ambientlightcolor (val);
  else if (pname.compare ("box"))
    set_box (val);
  else if (pname.compare ("boxstyle"))
    set_boxstyle (val);
  else if (pname.compare ("cameraposition"))
    set_cameraposition (val);
  else if (pname.compare ("camerapositionmode"))
    set_camerapositionmode (val);
  else if (pname.compare ("cameratarget"))
    set_cameratarget (val);
  else if (pname.compare ("cameratargetmode"))
    set_cameratargetmode (val);
  else if (pname.compare ("cameraupvector"))
    set_cameraupvector (val);
  else if (pname.compare ("cameraupvectormode"))
    set_cameraupvectormode (val);
  else if (pname.compare ("cameraviewangle"))
    set_cameraviewangle (val);
  else if (pname.compare ("cameraviewanglemode"))
    set_cameraviewanglemode (val);
  else if (pname.compare ("clim"))
    set_clim (val);
  else if (pname.compare ("climmode"))
    set_climmode (val);
  else if (pname.compare ("clippingstyle"))
    set_clippingstyle (val);
  else if (pname.compare ("color"))
    set_color (val);
  else if (pname.compare ("colormap"))
    set_colormap (val);
  else if (pname.compare ("colororder"))
    set_colororder (val);
  else if (pname.compare ("colororderindex"))
    set_colororderindex (val);
  else if (pname.compare ("currentpoint"))
    set_currentpoint (val);
  else if (pname.compare ("dataaspectratio"))
    set_dataaspectratio (val);
  else if (pname.compare ("dataaspectratiomode"))
    set_dataaspectratiomode (val);
  else if (pname.compare ("drawmode"))
    set_drawmode (val);
  else if (pname.compare ("fontangle"))
    set_fontangle (val);
  else if (pname.compare ("fontname"))
    set_fontname (val);
  else if (pname.compare ("fontsize"))
    set_fontsize (val);
  else if (pname.compare ("fontunits"))
    set_fontunits (val);
  else if (pname.compare ("fontsmoothing"))
    set_fontsmoothing (val);
  else if (pname.compare ("fontweight"))
    set_fontweight (val);
  else if (pname.compare ("gridalpha"))
    set_gridalpha (val);
  else if (pname.compare ("gridalphamode"))
    set_gridalphamode (val);
  else if (pname.compare ("gridcolor"))
    set_gridcolor (val);
  else if (pname.compare ("gridcolormode"))
    set_gridcolormode (val);
  else if (pname.compare ("gridlinestyle"))
    set_gridlinestyle (val);
  else if (pname.compare ("labelfontsizemultiplier"))
    set_labelfontsizemultiplier (val);
  else if (pname.compare ("layer"))
    set_layer (val);
  else if (pname.compare ("linestyleorder"))
    set_linestyleorder (val);
  else if (pname.compare ("linestyleorderindex"))
    set_linestyleorderindex (val);
  else if (pname.compare ("linewidth"))
    set_linewidth (val);
  else if (pname.compare ("minorgridalpha"))
    set_minorgridalpha (val);
  else if (pname.compare ("minorgridalphamode"))
    set_minorgridalphamode (val);
  else if (pname.compare ("minorgridcolor"))
    set_minorgridcolor (val);
  else if (pname.compare ("minorgridcolormode"))
    set_minorgridcolormode (val);
  else if (pname.compare ("minorgridlinestyle"))
    set_minorgridlinestyle (val);
  else if (pname.compare ("nextplot"))
    set_nextplot (val);
  else if (pname.compare ("outerposition"))
    set_outerposition (val);
  else if (pname.compare ("plotboxaspectratio"))
    set_plotboxaspectratio (val);
  else if (pname.compare ("plotboxaspectratiomode"))
    set_plotboxaspectratiomode (val);
  else if (pname.compare ("position"))
    set_position (val);
  else if (pname.compare ("projection"))
    set_projection (val);
  else if (pname.compare ("sortmethod"))
    set_sortmethod (val);
  else if (pname.compare ("tickdir"))
    set_tickdir (val);
  else if (pname.compare ("tickdirmode"))
    set_tickdirmode (val);
  else if (pname.compare ("ticklabelinterpreter"))
    set_ticklabelinterpreter (val);
  else if (pname.compare ("ticklength"))
    set_ticklength (val);
  else if (pname.compare ("title"))
    set_title (val);
  else if (pname.compare ("titlefontsizemultiplier"))
    set_titlefontsizemultiplier (val);
  else if (pname.compare ("titlefontweight"))
    set_titlefontweight (val);
  else if (pname.compare ("units"))
    set_units (val);
  else if (pname.compare ("view"))
    set_view (val);
  else if (pname.compare ("xaxislocation"))
    set_xaxislocation (val);
  else if (pname.compare ("xcolor"))
    set_xcolor (val);
  else if (pname.compare ("xcolormode"))
    set_xcolormode (val);
  else if (pname.compare ("xdir"))
    set_xdir (val);
  else if (pname.compare ("xgrid"))
    set_xgrid (val);
  else if (pname.compare ("xlabel"))
    set_xlabel (val);
  else if (pname.compare ("xlim"))
    set_xlim (val);
  else if (pname.compare ("xlimmode"))
    set_xlimmode (val);
  else if (pname.compare ("xminorgrid"))
    set_xminorgrid (val);
  else if (pname.compare ("xminortick"))
    set_xminortick (val);
  else if (pname.compare ("xscale"))
    set_xscale (val);
  else if (pname.compare ("xtick"))
    set_xtick (val);
  else if (pname.compare ("xticklabel"))
    set_xticklabel (val);
  else if (pname.compare ("xticklabelmode"))
    set_xticklabelmode (val);
  else if (pname.compare ("xticklabelrotation"))
    set_xticklabelrotation (val);
  else if (pname.compare ("xtickmode"))
    set_xtickmode (val);
  else if (pname.compare ("yaxislocation"))
    set_yaxislocation (val);
  else if (pname.compare ("ycolor"))
    set_ycolor (val);
  else if (pname.compare ("ycolormode"))
    set_ycolormode (val);
  else if (pname.compare ("ydir"))
    set_ydir (val);
  else if (pname.compare ("ygrid"))
    set_ygrid (val);
  else if (pname.compare ("ylabel"))
    set_ylabel (val);
  else if (pname.compare ("ylim"))
    set_ylim (val);
  else if (pname.compare ("ylimmode"))
    set_ylimmode (val);
  else if (pname.compare ("yminorgrid"))
    set_yminorgrid (val);
  else if (pname.compare ("yminortick"))
    set_yminortick (val);
  else if (pname.compare ("yscale"))
    set_yscale (val);
  else if (pname.compare ("ytick"))
    set_ytick (val);
  else if (pname.compare ("yticklabel"))
    set_yticklabel (val);
  else if (pname.compare ("yticklabelmode"))
    set_yticklabelmode (val);
  else if (pname.compare ("yticklabelrotation"))
    set_yticklabelrotation (val);
  else if (pname.compare ("ytickmode"))
    set_ytickmode (val);
  else if (pname.compare ("zcolor"))
    set_zcolor (val);
  else if (pname.compare ("zcolormode"))
    set_zcolormode (val);
  else if (pname.compare ("zdir"))
    set_zdir (val);
  else if (pname.compare ("zgrid"))
    set_zgrid (val);
  else if (pname.compare ("zlabel"))
    set_zlabel (val);
  else if (pname.compare ("zlim"))
    set_zlim (val);
  else if (pname.compare ("zlimmode"))
    set_zlimmode (val);
  else if (pname.compare ("zminorgrid"))
    set_zminorgrid (val);
  else if (pname.compare ("zminortick"))
    set_zminortick (val);
  else if (pname.compare ("zscale"))
    set_zscale (val);
  else if (pname.compare ("ztick"))
    set_ztick (val);
  else if (pname.compare ("zticklabel"))
    set_zticklabel (val);
  else if (pname.compare ("zticklabelmode"))
    set_zticklabelmode (val);
  else if (pname.compare ("zticklabelrotation"))
    set_zticklabelrotation (val);
  else if (pname.compare ("ztickmode"))
    set_ztickmode (val);
  else if (pname.compare ("__colormap__"))
    set___colormap__ (val);
  else if (pname.compare ("mousewheelzoom"))
    set_mousewheelzoom (val);
  else if (pname.compare ("__autopos_tag__"))
    set___autopos_tag__ (val);
  else if (pname.compare ("looseinset"))
    set_looseinset (val);
  else if (pname.compare ("xminortickvalues"))
    set_xminortickvalues (val);
  else if (pname.compare ("yminortickvalues"))
    set_yminortickvalues (val);
  else if (pname.compare ("zminortickvalues"))
    set_zminortickvalues (val);
  else
    base_properties::set (pname, val);
}

octave_value
axes::properties::get (bool all) const
{
  octave_map m = base_properties::get (all).map_value ();

  m.assign ("activepositionproperty", octave_value (get_activepositionproperty ()));
  m.assign ("alim", octave_value (get_alim ()));
  m.assign ("alimmode", octave_value (get_alimmode ()));
  m.assign ("ambientlightcolor", octave_value (get_ambientlightcolor ()));
  m.assign ("box", octave_value (get_box ()));
  m.assign ("boxstyle", octave_value (get_boxstyle ()));
  m.assign ("cameraposition", octave_value (get_cameraposition ()));
  m.assign ("camerapositionmode", octave_value (get_camerapositionmode ()));
  m.assign ("cameratarget", octave_value (get_cameratarget ()));
  m.assign ("cameratargetmode", octave_value (get_cameratargetmode ()));
  m.assign ("cameraupvector", octave_value (get_cameraupvector ()));
  m.assign ("cameraupvectormode", octave_value (get_cameraupvectormode ()));
  m.assign ("cameraviewangle", octave_value (get_cameraviewangle ()));
  m.assign ("cameraviewanglemode", octave_value (get_cameraviewanglemode ()));
  m.assign ("clim", octave_value (get_clim ()));
  m.assign ("climmode", octave_value (get_climmode ()));
  m.assign ("clippingstyle", octave_value (get_clippingstyle ()));
  m.assign ("color", octave_value (get_color ()));
  m.assign ("colormap", octave_value (get_colormap ()));
  m.assign ("colororder", octave_value (get_colororder ()));
  m.assign ("colororderindex", octave_value (get_colororderindex ()));
  m.assign ("currentpoint", octave_value (get_currentpoint ()));
  m.assign ("dataaspectratio", octave_value (get_dataaspectratio ()));
  m.assign ("dataaspectratiomode", octave_value (get_dataaspectratiomode ()));
  if (all)
    m.assign ("drawmode", octave_value (get_drawmode ()));
  m.assign ("fontangle", octave_value (get_fontangle ()));
  m.assign ("fontname", octave_value (get_fontname ()));
  m.assign ("fontsize", octave_value (get_fontsize ()));
  m.assign ("fontunits", octave_value (get_fontunits ()));
  m.assign ("fontsmoothing", octave_value (get_fontsmoothing ()));
  m.assign ("fontweight", octave_value (get_fontweight ()));
  m.assign ("gridalpha", octave_value (get_gridalpha ()));
  m.assign ("gridalphamode", octave_value (get_gridalphamode ()));
  m.assign ("gridcolor", octave_value (get_gridcolor ()));
  m.assign ("gridcolormode", octave_value (get_gridcolormode ()));
  m.assign ("gridlinestyle", octave_value (get_gridlinestyle ()));
  m.assign ("labelfontsizemultiplier", octave_value (get_labelfontsizemultiplier ()));
  m.assign ("layer", octave_value (get_layer ()));
  m.assign ("linestyleorder", octave_value (get_linestyleorder ()));
  m.assign ("linestyleorderindex", octave_value (get_linestyleorderindex ()));
  m.assign ("linewidth", octave_value (get_linewidth ()));
  m.assign ("minorgridalpha", octave_value (get_minorgridalpha ()));
  m.assign ("minorgridalphamode", octave_value (get_minorgridalphamode ()));
  m.assign ("minorgridcolor", octave_value (get_minorgridcolor ()));
  m.assign ("minorgridcolormode", octave_value (get_minorgridcolormode ()));
  m.assign ("minorgridlinestyle", octave_value (get_minorgridlinestyle ()));
  m.assign ("nextplot", octave_value (get_nextplot ()));
  m.assign ("outerposition", octave_value (get_outerposition ()));
  m.assign ("plotboxaspectratio", octave_value (get_plotboxaspectratio ()));
  m.assign ("plotboxaspectratiomode", octave_value (get_plotboxaspectratiomode ()));
  m.assign ("position", octave_value (get_position ()));
  m.assign ("projection", octave_value (get_projection ()));
  m.assign ("sortmethod", octave_value (get_sortmethod ()));
  m.assign ("tickdir", octave_value (get_tickdir ()));
  m.assign ("tickdirmode", octave_value (get_tickdirmode ()));
  m.assign ("ticklabelinterpreter", octave_value (get_ticklabelinterpreter ()));
  m.assign ("ticklength", octave_value (get_ticklength ()));
  m.assign ("tightinset", octave_value (get_tightinset ()));
  m.assign ("title", octave_value (get_title ().as_octave_value ()));
  m.assign ("titlefontsizemultiplier", octave_value (get_titlefontsizemultiplier ()));
  m.assign ("titlefontweight", octave_value (get_titlefontweight ()));
  m.assign ("units", octave_value (get_units ()));
  m.assign ("view", octave_value (get_view ()));
  m.assign ("xaxislocation", octave_value (get_xaxislocation ()));
  m.assign ("xcolor", octave_value (get_xcolor ()));
  m.assign ("xcolormode", octave_value (get_xcolormode ()));
  m.assign ("xdir", octave_value (get_xdir ()));
  m.assign ("xgrid", octave_value (get_xgrid ()));
  m.assign ("xlabel", octave_value (get_xlabel ().as_octave_value ()));
  m.assign ("xlim", octave_value (get_xlim ()));
  m.assign ("xlimmode", octave_value (get_xlimmode ()));
  m.assign ("xminorgrid", octave_value (get_xminorgrid ()));
  m.assign ("xminortick", octave_value (get_xminortick ()));
  m.assign ("xscale", octave_value (get_xscale ()));
  m.assign ("xtick", octave_value (get_xtick ()));
  m.assign ("xticklabel", octave_value (get_xticklabel ()));
  m.assign ("xticklabelmode", octave_value (get_xticklabelmode ()));
  m.assign ("xticklabelrotation", octave_value (get_xticklabelrotation ()));
  m.assign ("xtickmode", octave_value (get_xtickmode ()));
  m.assign ("yaxislocation", octave_value (get_yaxislocation ()));
  m.assign ("ycolor", octave_value (get_ycolor ()));
  m.assign ("ycolormode", octave_value (get_ycolormode ()));
  m.assign ("ydir", octave_value (get_ydir ()));
  m.assign ("ygrid", octave_value (get_ygrid ()));
  m.assign ("ylabel", octave_value (get_ylabel ().as_octave_value ()));
  m.assign ("ylim", octave_value (get_ylim ()));
  m.assign ("ylimmode", octave_value (get_ylimmode ()));
  m.assign ("yminorgrid", octave_value (get_yminorgrid ()));
  m.assign ("yminortick", octave_value (get_yminortick ()));
  m.assign ("yscale", octave_value (get_yscale ()));
  m.assign ("ytick", octave_value (get_ytick ()));
  m.assign ("yticklabel", octave_value (get_yticklabel ()));
  m.assign ("yticklabelmode", octave_value (get_yticklabelmode ()));
  m.assign ("yticklabelrotation", octave_value (get_yticklabelrotation ()));
  m.assign ("ytickmode", octave_value (get_ytickmode ()));
  m.assign ("zcolor", octave_value (get_zcolor ()));
  m.assign ("zcolormode", octave_value (get_zcolormode ()));
  m.assign ("zdir", octave_value (get_zdir ()));
  m.assign ("zgrid", octave_value (get_zgrid ()));
  m.assign ("zlabel", octave_value (get_zlabel ().as_octave_value ()));
  m.assign ("zlim", octave_value (get_zlim ()));
  m.assign ("zlimmode", octave_value (get_zlimmode ()));
  m.assign ("zminorgrid", octave_value (get_zminorgrid ()));
  m.assign ("zminortick", octave_value (get_zminortick ()));
  m.assign ("zscale", octave_value (get_zscale ()));
  m.assign ("ztick", octave_value (get_ztick ()));
  m.assign ("zticklabel", octave_value (get_zticklabel ()));
  m.assign ("zticklabelmode", octave_value (get_zticklabelmode ()));
  m.assign ("zticklabelrotation", octave_value (get_zticklabelrotation ()));
  m.assign ("ztickmode", octave_value (get_ztickmode ()));
  if (all)
    m.assign ("__colormap__", octave_value (get___colormap__ ()));
  m.assign ("mousewheelzoom", octave_value (get_mousewheelzoom ()));
  if (all)
    m.assign ("__autopos_tag__", octave_value (get___autopos_tag__ ()));
  if (all)
    m.assign ("looseinset", octave_value (get_looseinset ()));
  if (all)
    m.assign ("xminortickvalues", octave_value (get_xminortickvalues ()));
  if (all)
    m.assign ("yminortickvalues", octave_value (get_yminortickvalues ()));
  if (all)
    m.assign ("zminortickvalues", octave_value (get_zminortickvalues ()));
  if (all)
    m.assign ("__fontsize_points__", octave_value (get___fontsize_points__ ()));

  return m;
}

octave_value
axes::properties::get (const caseless_str& pname_arg) const
{
  octave_value retval;

  const std::set<std::string>& pnames = all_property_names ();

  caseless_str pname = validate_property_name ("get", go_name, pnames, pname_arg);

  if (pname.compare ("activepositionproperty"))
    retval = get_activepositionproperty ();
  else if (pname.compare ("alim"))
    retval = get_alim ();
  else if (pname.compare ("alimmode"))
    retval = get_alimmode ();
  else if (pname.compare ("ambientlightcolor"))
    retval = get_ambientlightcolor ();
  else if (pname.compare ("box"))
    retval = get_box ();
  else if (pname.compare ("boxstyle"))
    retval = get_boxstyle ();
  else if (pname.compare ("cameraposition"))
    retval = get_cameraposition ();
  else if (pname.compare ("camerapositionmode"))
    retval = get_camerapositionmode ();
  else if (pname.compare ("cameratarget"))
    retval = get_cameratarget ();
  else if (pname.compare ("cameratargetmode"))
    retval = get_cameratargetmode ();
  else if (pname.compare ("cameraupvector"))
    retval = get_cameraupvector ();
  else if (pname.compare ("cameraupvectormode"))
    retval = get_cameraupvectormode ();
  else if (pname.compare ("cameraviewangle"))
    retval = get_cameraviewangle ();
  else if (pname.compare ("cameraviewanglemode"))
    retval = get_cameraviewanglemode ();
  else if (pname.compare ("clim"))
    retval = get_clim ();
  else if (pname.compare ("climmode"))
    retval = get_climmode ();
  else if (pname.compare ("clippingstyle"))
    retval = get_clippingstyle ();
  else if (pname.compare ("color"))
    retval = get_color ();
  else if (pname.compare ("colormap"))
    retval = get_colormap ();
  else if (pname.compare ("colororder"))
    retval = get_colororder ();
  else if (pname.compare ("colororderindex"))
    retval = get_colororderindex ();
  else if (pname.compare ("currentpoint"))
    retval = get_currentpoint ();
  else if (pname.compare ("dataaspectratio"))
    retval = get_dataaspectratio ();
  else if (pname.compare ("dataaspectratiomode"))
    retval = get_dataaspectratiomode ();
  else if (pname.compare ("drawmode"))
    retval = get_drawmode ();
  else if (pname.compare ("fontangle"))
    retval = get_fontangle ();
  else if (pname.compare ("fontname"))
    retval = get_fontname ();
  else if (pname.compare ("fontsize"))
    retval = get_fontsize ();
  else if (pname.compare ("fontunits"))
    retval = get_fontunits ();
  else if (pname.compare ("fontsmoothing"))
    retval = get_fontsmoothing ();
  else if (pname.compare ("fontweight"))
    retval = get_fontweight ();
  else if (pname.compare ("gridalpha"))
    retval = get_gridalpha ();
  else if (pname.compare ("gridalphamode"))
    retval = get_gridalphamode ();
  else if (pname.compare ("gridcolor"))
    retval = get_gridcolor ();
  else if (pname.compare ("gridcolormode"))
    retval = get_gridcolormode ();
  else if (pname.compare ("gridlinestyle"))
    retval = get_gridlinestyle ();
  else if (pname.compare ("labelfontsizemultiplier"))
    retval = get_labelfontsizemultiplier ();
  else if (pname.compare ("layer"))
    retval = get_layer ();
  else if (pname.compare ("linestyleorder"))
    retval = get_linestyleorder ();
  else if (pname.compare ("linestyleorderindex"))
    retval = get_linestyleorderindex ();
  else if (pname.compare ("linewidth"))
    retval = get_linewidth ();
  else if (pname.compare ("minorgridalpha"))
    retval = get_minorgridalpha ();
  else if (pname.compare ("minorgridalphamode"))
    retval = get_minorgridalphamode ();
  else if (pname.compare ("minorgridcolor"))
    retval = get_minorgridcolor ();
  else if (pname.compare ("minorgridcolormode"))
    retval = get_minorgridcolormode ();
  else if (pname.compare ("minorgridlinestyle"))
    retval = get_minorgridlinestyle ();
  else if (pname.compare ("nextplot"))
    retval = get_nextplot ();
  else if (pname.compare ("outerposition"))
    retval = get_outerposition ();
  else if (pname.compare ("plotboxaspectratio"))
    retval = get_plotboxaspectratio ();
  else if (pname.compare ("plotboxaspectratiomode"))
    retval = get_plotboxaspectratiomode ();
  else if (pname.compare ("position"))
    retval = get_position ();
  else if (pname.compare ("projection"))
    retval = get_projection ();
  else if (pname.compare ("sortmethod"))
    retval = get_sortmethod ();
  else if (pname.compare ("tickdir"))
    retval = get_tickdir ();
  else if (pname.compare ("tickdirmode"))
    retval = get_tickdirmode ();
  else if (pname.compare ("ticklabelinterpreter"))
    retval = get_ticklabelinterpreter ();
  else if (pname.compare ("ticklength"))
    retval = get_ticklength ();
  else if (pname.compare ("tightinset"))
    retval = get_tightinset ();
  else if (pname.compare ("title"))
    retval = get_title ().as_octave_value ();
  else if (pname.compare ("titlefontsizemultiplier"))
    retval = get_titlefontsizemultiplier ();
  else if (pname.compare ("titlefontweight"))
    retval = get_titlefontweight ();
  else if (pname.compare ("units"))
    retval = get_units ();
  else if (pname.compare ("view"))
    retval = get_view ();
  else if (pname.compare ("xaxislocation"))
    retval = get_xaxislocation ();
  else if (pname.compare ("xcolor"))
    retval = get_xcolor ();
  else if (pname.compare ("xcolormode"))
    retval = get_xcolormode ();
  else if (pname.compare ("xdir"))
    retval = get_xdir ();
  else if (pname.compare ("xgrid"))
    retval = get_xgrid ();
  else if (pname.compare ("xlabel"))
    retval = get_xlabel ().as_octave_value ();
  else if (pname.compare ("xlim"))
    retval = get_xlim ();
  else if (pname.compare ("xlimmode"))
    retval = get_xlimmode ();
  else if (pname.compare ("xminorgrid"))
    retval = get_xminorgrid ();
  else if (pname.compare ("xminortick"))
    retval = get_xminortick ();
  else if (pname.compare ("xscale"))
    retval = get_xscale ();
  else if (pname.compare ("xtick"))
    retval = get_xtick ();
  else if (pname.compare ("xticklabel"))
    retval = get_xticklabel ();
  else if (pname.compare ("xticklabelmode"))
    retval = get_xticklabelmode ();
  else if (pname.compare ("xticklabelrotation"))
    retval = get_xticklabelrotation ();
  else if (pname.compare ("xtickmode"))
    retval = get_xtickmode ();
  else if (pname.compare ("yaxislocation"))
    retval = get_yaxislocation ();
  else if (pname.compare ("ycolor"))
    retval = get_ycolor ();
  else if (pname.compare ("ycolormode"))
    retval = get_ycolormode ();
  else if (pname.compare ("ydir"))
    retval = get_ydir ();
  else if (pname.compare ("ygrid"))
    retval = get_ygrid ();
  else if (pname.compare ("ylabel"))
    retval = get_ylabel ().as_octave_value ();
  else if (pname.compare ("ylim"))
    retval = get_ylim ();
  else if (pname.compare ("ylimmode"))
    retval = get_ylimmode ();
  else if (pname.compare ("yminorgrid"))
    retval = get_yminorgrid ();
  else if (pname.compare ("yminortick"))
    retval = get_yminortick ();
  else if (pname.compare ("yscale"))
    retval = get_yscale ();
  else if (pname.compare ("ytick"))
    retval = get_ytick ();
  else if (pname.compare ("yticklabel"))
    retval = get_yticklabel ();
  else if (pname.compare ("yticklabelmode"))
    retval = get_yticklabelmode ();
  else if (pname.compare ("yticklabelrotation"))
    retval = get_yticklabelrotation ();
  else if (pname.compare ("ytickmode"))
    retval = get_ytickmode ();
  else if (pname.compare ("zcolor"))
    retval = get_zcolor ();
  else if (pname.compare ("zcolormode"))
    retval = get_zcolormode ();
  else if (pname.compare ("zdir"))
    retval = get_zdir ();
  else if (pname.compare ("zgrid"))
    retval = get_zgrid ();
  else if (pname.compare ("zlabel"))
    retval = get_zlabel ().as_octave_value ();
  else if (pname.compare ("zlim"))
    retval = get_zlim ();
  else if (pname.compare ("zlimmode"))
    retval = get_zlimmode ();
  else if (pname.compare ("zminorgrid"))
    retval = get_zminorgrid ();
  else if (pname.compare ("zminortick"))
    retval = get_zminortick ();
  else if (pname.compare ("zscale"))
    retval = get_zscale ();
  else if (pname.compare ("ztick"))
    retval = get_ztick ();
  else if (pname.compare ("zticklabel"))
    retval = get_zticklabel ();
  else if (pname.compare ("zticklabelmode"))
    retval = get_zticklabelmode ();
  else if (pname.compare ("zticklabelrotation"))
    retval = get_zticklabelrotation ();
  else if (pname.compare ("ztickmode"))
    retval = get_ztickmode ();
  else if (pname.compare ("__colormap__"))
    retval = get___colormap__ ();
  else if (pname.compare ("mousewheelzoom"))
    retval = get_mousewheelzoom ();
  else if (pname.compare ("__autopos_tag__"))
    retval = get___autopos_tag__ ();
  else if (pname.compare ("looseinset"))
    retval = get_looseinset ();
  else if (pname.compare ("xminortickvalues"))
    retval = get_xminortickvalues ();
  else if (pname.compare ("yminortickvalues"))
    retval = get_yminortickvalues ();
  else if (pname.compare ("zminortickvalues"))
    retval = get_zminortickvalues ();
  else if (pname.compare ("__fontsize_points__"))
    retval = get___fontsize_points__ ();
  else
    retval = base_properties::get (pname);

  return retval;
}

property
axes::properties::get_property (const caseless_str& pname_arg)
{
  const std::set<std::string>& pnames = all_property_names ();

  caseless_str pname = validate_property_name ("get", go_name, pnames, pname_arg);

  if (pname.compare ("activepositionproperty"))
    return property (&activepositionproperty, true);
  else if (pname.compare ("alim"))
    return property (&alim, true);
  else if (pname.compare ("alimmode"))
    return property (&alimmode, true);
  else if (pname.compare ("ambientlightcolor"))
    return property (&ambientlightcolor, true);
  else if (pname.compare ("box"))
    return property (&box, true);
  else if (pname.compare ("boxstyle"))
    return property (&boxstyle, true);
  else if (pname.compare ("cameraposition"))
    return property (&cameraposition, true);
  else if (pname.compare ("camerapositionmode"))
    return property (&camerapositionmode, true);
  else if (pname.compare ("cameratarget"))
    return property (&cameratarget, true);
  else if (pname.compare ("cameratargetmode"))
    return property (&cameratargetmode, true);
  else if (pname.compare ("cameraupvector"))
    return property (&cameraupvector, true);
  else if (pname.compare ("cameraupvectormode"))
    return property (&cameraupvectormode, true);
  else if (pname.compare ("cameraviewangle"))
    return property (&cameraviewangle, true);
  else if (pname.compare ("cameraviewanglemode"))
    return property (&cameraviewanglemode, true);
  else if (pname.compare ("clim"))
    return property (&clim, true);
  else if (pname.compare ("climmode"))
    return property (&climmode, true);
  else if (pname.compare ("clippingstyle"))
    return property (&clippingstyle, true);
  else if (pname.compare ("color"))
    return property (&color, true);
  else if (pname.compare ("colormap"))
    return property (&colormap, true);
  else if (pname.compare ("colororder"))
    return property (&colororder, true);
  else if (pname.compare ("colororderindex"))
    return property (&colororderindex, true);
  else if (pname.compare ("currentpoint"))
    return property (&currentpoint, true);
  else if (pname.compare ("dataaspectratio"))
    return property (&dataaspectratio, true);
  else if (pname.compare ("dataaspectratiomode"))
    return property (&dataaspectratiomode, true);
  else if (pname.compare ("drawmode"))
    return property (&drawmode, true);
  else if (pname.compare ("fontangle"))
    return property (&fontangle, true);
  else if (pname.compare ("fontname"))
    return property (&fontname, true);
  else if (pname.compare ("fontsize"))
    return property (&fontsize, true);
  else if (pname.compare ("fontunits"))
    return property (&fontunits, true);
  else if (pname.compare ("fontsmoothing"))
    return property (&fontsmoothing, true);
  else if (pname.compare ("fontweight"))
    return property (&fontweight, true);
  else if (pname.compare ("gridalpha"))
    return property (&gridalpha, true);
  else if (pname.compare ("gridalphamode"))
    return property (&gridalphamode, true);
  else if (pname.compare ("gridcolor"))
    return property (&gridcolor, true);
  else if (pname.compare ("gridcolormode"))
    return property (&gridcolormode, true);
  else if (pname.compare ("gridlinestyle"))
    return property (&gridlinestyle, true);
  else if (pname.compare ("labelfontsizemultiplier"))
    return property (&labelfontsizemultiplier, true);
  else if (pname.compare ("layer"))
    return property (&layer, true);
  else if (pname.compare ("linestyleorder"))
    return property (&linestyleorder, true);
  else if (pname.compare ("linestyleorderindex"))
    return property (&linestyleorderindex, true);
  else if (pname.compare ("linewidth"))
    return property (&linewidth, true);
  else if (pname.compare ("minorgridalpha"))
    return property (&minorgridalpha, true);
  else if (pname.compare ("minorgridalphamode"))
    return property (&minorgridalphamode, true);
  else if (pname.compare ("minorgridcolor"))
    return property (&minorgridcolor, true);
  else if (pname.compare ("minorgridcolormode"))
    return property (&minorgridcolormode, true);
  else if (pname.compare ("minorgridlinestyle"))
    return property (&minorgridlinestyle, true);
  else if (pname.compare ("nextplot"))
    return property (&nextplot, true);
  else if (pname.compare ("outerposition"))
    return property (&outerposition, true);
  else if (pname.compare ("plotboxaspectratio"))
    return property (&plotboxaspectratio, true);
  else if (pname.compare ("plotboxaspectratiomode"))
    return property (&plotboxaspectratiomode, true);
  else if (pname.compare ("position"))
    return property (&position, true);
  else if (pname.compare ("projection"))
    return property (&projection, true);
  else if (pname.compare ("sortmethod"))
    return property (&sortmethod, true);
  else if (pname.compare ("tickdir"))
    return property (&tickdir, true);
  else if (pname.compare ("tickdirmode"))
    return property (&tickdirmode, true);
  else if (pname.compare ("ticklabelinterpreter"))
    return property (&ticklabelinterpreter, true);
  else if (pname.compare ("ticklength"))
    return property (&ticklength, true);
  else if (pname.compare ("tightinset"))
    return property (&tightinset, true);
  else if (pname.compare ("title"))
    return property (&title, true);
  else if (pname.compare ("titlefontsizemultiplier"))
    return property (&titlefontsizemultiplier, true);
  else if (pname.compare ("titlefontweight"))
    return property (&titlefontweight, true);
  else if (pname.compare ("units"))
    return property (&units, true);
  else if (pname.compare ("view"))
    return property (&view, true);
  else if (pname.compare ("xaxislocation"))
    return property (&xaxislocation, true);
  else if (pname.compare ("xcolor"))
    return property (&xcolor, true);
  else if (pname.compare ("xcolormode"))
    return property (&xcolormode, true);
  else if (pname.compare ("xdir"))
    return property (&xdir, true);
  else if (pname.compare ("xgrid"))
    return property (&xgrid, true);
  else if (pname.compare ("xlabel"))
    return property (&xlabel, true);
  else if (pname.compare ("xlim"))
    return property (&xlim, true);
  else if (pname.compare ("xlimmode"))
    return property (&xlimmode, true);
  else if (pname.compare ("xminorgrid"))
    return property (&xminorgrid, true);
  else if (pname.compare ("xminortick"))
    return property (&xminortick, true);
  else if (pname.compare ("xscale"))
    return property (&xscale, true);
  else if (pname.compare ("xtick"))
    return property (&xtick, true);
  else if (pname.compare ("xticklabel"))
    return property (&xticklabel, true);
  else if (pname.compare ("xticklabelmode"))
    return property (&xticklabelmode, true);
  else if (pname.compare ("xticklabelrotation"))
    return property (&xticklabelrotation, true);
  else if (pname.compare ("xtickmode"))
    return property (&xtickmode, true);
  else if (pname.compare ("yaxislocation"))
    return property (&yaxislocation, true);
  else if (pname.compare ("ycolor"))
    return property (&ycolor, true);
  else if (pname.compare ("ycolormode"))
    return property (&ycolormode, true);
  else if (pname.compare ("ydir"))
    return property (&ydir, true);
  else if (pname.compare ("ygrid"))
    return property (&ygrid, true);
  else if (pname.compare ("ylabel"))
    return property (&ylabel, true);
  else if (pname.compare ("ylim"))
    return property (&ylim, true);
  else if (pname.compare ("ylimmode"))
    return property (&ylimmode, true);
  else if (pname.compare ("yminorgrid"))
    return property (&yminorgrid, true);
  else if (pname.compare ("yminortick"))
    return property (&yminortick, true);
  else if (pname.compare ("yscale"))
    return property (&yscale, true);
  else if (pname.compare ("ytick"))
    return property (&ytick, true);
  else if (pname.compare ("yticklabel"))
    return property (&yticklabel, true);
  else if (pname.compare ("yticklabelmode"))
    return property (&yticklabelmode, true);
  else if (pname.compare ("yticklabelrotation"))
    return property (&yticklabelrotation, true);
  else if (pname.compare ("ytickmode"))
    return property (&ytickmode, true);
  else if (pname.compare ("zcolor"))
    return property (&zcolor, true);
  else if (pname.compare ("zcolormode"))
    return property (&zcolormode, true);
  else if (pname.compare ("zdir"))
    return property (&zdir, true);
  else if (pname.compare ("zgrid"))
    return property (&zgrid, true);
  else if (pname.compare ("zlabel"))
    return property (&zlabel, true);
  else if (pname.compare ("zlim"))
    return property (&zlim, true);
  else if (pname.compare ("zlimmode"))
    return property (&zlimmode, true);
  else if (pname.compare ("zminorgrid"))
    return property (&zminorgrid, true);
  else if (pname.compare ("zminortick"))
    return property (&zminortick, true);
  else if (pname.compare ("zscale"))
    return property (&zscale, true);
  else if (pname.compare ("ztick"))
    return property (&ztick, true);
  else if (pname.compare ("zticklabel"))
    return property (&zticklabel, true);
  else if (pname.compare ("zticklabelmode"))
    return property (&zticklabelmode, true);
  else if (pname.compare ("zticklabelrotation"))
    return property (&zticklabelrotation, true);
  else if (pname.compare ("ztickmode"))
    return property (&ztickmode, true);
  else if (pname.compare ("__colormap__"))
    return property (&__colormap__, true);
  else if (pname.compare ("mousewheelzoom"))
    return property (&mousewheelzoom, true);
  else if (pname.compare ("__autopos_tag__"))
    return property (&__autopos_tag__, true);
  else if (pname.compare ("looseinset"))
    return property (&looseinset, true);
  else if (pname.compare ("xminortickvalues"))
    return property (&xminortickvalues, true);
  else if (pname.compare ("yminortickvalues"))
    return property (&yminortickvalues, true);
  else if (pname.compare ("zminortickvalues"))
    return property (&zminortickvalues, true);
  else if (pname.compare ("__fontsize_points__"))
    return property (&__fontsize_points__, true);
  else
    return base_properties::get_property (pname);
}

property_list::pval_map_type
axes::properties::factory_defaults (void)
{
  property_list::pval_map_type m = base_properties::factory_defaults ();

  m["activepositionproperty"] = "outerposition";
  m["alim"] = default_lim ();
  m["alimmode"] = "auto";
  m["ambientlightcolor"] = color_values (1, 1, 1);
  m["box"] = "off";
  m["boxstyle"] = "back";
  m["cameraposition"] = Matrix (1, 3, 0.0);
  m["camerapositionmode"] = "auto";
  m["cameratarget"] = Matrix (1, 3, 0.0);
  m["cameratargetmode"] = "auto";
  m["cameraupvector"] = Matrix (1, 3, 0.0);
  m["cameraupvectormode"] = "auto";
  m["cameraviewangle"] = 6.6086;
  m["cameraviewanglemode"] = "auto";
  m["clim"] = default_lim ();
  m["climmode"] = "auto";
  m["clippingstyle"] = "3dbox";
  m["color"] = color_property (color_values (1, 1, 1), radio_values ("none"));
  m["colormap"] = Matrix ();
  m["colororder"] = default_colororder ();
  m["colororderindex"] = 1.0;
  m["currentpoint"] = Matrix (2, 3, 0.0);
  m["dataaspectratio"] = Matrix (1, 3, 1.0);
  m["dataaspectratiomode"] = "auto";
  m["drawmode"] = "normal";
  m["fontangle"] = "normal";
  m["fontname"] = OCTAVE_DEFAULT_FONTNAME;
  m["fontsize"] = 10;
  m["fontunits"] = "points";
  m["fontsmoothing"] = "on";
  m["fontweight"] = "normal";
  m["gridalpha"] = 0.15;
  m["gridalphamode"] = "auto";
  m["gridcolor"] = color_property (color_values (0.15, 0.15, 0.15), radio_values ("none"));
  m["gridcolormode"] = "auto";
  m["gridlinestyle"] = "-";
  m["labelfontsizemultiplier"] = 1.1;
  m["layer"] = "bottom";
  m["linestyleorder"] = "-";
  m["linestyleorderindex"] = 1.0;
  m["linewidth"] = 0.5;
  m["minorgridalpha"] = 0.25;
  m["minorgridalphamode"] = "auto";
  m["minorgridcolor"] = color_property (color_values (0.1, 0.1, 0.1), radio_values ("none"));
  m["minorgridcolormode"] = "auto";
  m["minorgridlinestyle"] = ":";
  m["nextplot"] = "replace";
  m["outerposition"] = default_axes_outerposition ();
  m["plotboxaspectratio"] = Matrix (1, 3, 1.0);
  m["plotboxaspectratiomode"] = "auto";
  m["position"] = default_axes_position ();
  m["projection"] = "orthographic";
  m["sortmethod"] = "depth";
  m["tickdir"] = "in";
  m["tickdirmode"] = "auto";
  m["ticklabelinterpreter"] = "tex";
  m["ticklength"] = default_axes_ticklength ();
  m["tightinset"] = Matrix (1, 4, 0.0);
  m["titlefontsizemultiplier"] = 1.1;
  m["titlefontweight"] = "bold";
  m["units"] = "normalized";
  m["view"] = default_axes_view ();
  m["xaxislocation"] = "bottom";
  m["xcolor"] = color_values (0.15, 0.15, 0.15);
  m["xcolormode"] = "auto";
  m["xdir"] = "normal";
  m["xgrid"] = "off";
  m["xlim"] = default_lim ();
  m["xlimmode"] = "auto";
  m["xminorgrid"] = "off";
  m["xminortick"] = "off";
  m["xscale"] = "linear";
  m["xtick"] = default_axes_tick ();
  m["xticklabel"] = "";
  m["xticklabelmode"] = "auto";
  m["xticklabelrotation"] = 0.0;
  m["xtickmode"] = "auto";
  m["yaxislocation"] = "left";
  m["ycolor"] = color_values (0.15, 0.15, 0.15);
  m["ycolormode"] = "auto";
  m["ydir"] = "normal";
  m["ygrid"] = "off";
  m["ylim"] = default_lim ();
  m["ylimmode"] = "auto";
  m["yminorgrid"] = "off";
  m["yminortick"] = "off";
  m["yscale"] = "linear";
  m["ytick"] = default_axes_tick ();
  m["yticklabel"] = "";
  m["yticklabelmode"] = "auto";
  m["yticklabelrotation"] = 0.0;
  m["ytickmode"] = "auto";
  m["zcolor"] = color_values (0.15, 0.15, 0.15);
  m["zcolormode"] = "auto";
  m["zdir"] = "normal";
  m["zgrid"] = "off";
  m["zlim"] = default_lim ();
  m["zlimmode"] = "auto";
  m["zminorgrid"] = "off";
  m["zminortick"] = "off";
  m["zscale"] = "linear";
  m["ztick"] = default_axes_tick ();
  m["zticklabel"] = "";
  m["zticklabelmode"] = "auto";
  m["zticklabelrotation"] = 0.0;
  m["ztickmode"] = "auto";
  m["__colormap__"] = Matrix ();
  m["mousewheelzoom"] = 0.5;
  m["__autopos_tag__"] = "none";
  m["looseinset"] = Matrix (1, 4, 0.0);
  m["xminortickvalues"] = Matrix ();
  m["yminortickvalues"] = Matrix ();
  m["zminortickvalues"] = Matrix ();
  m["__fontsize_points__"] = 0;

  return m;
}

std::string axes::properties::go_name ("axes");

std::set<std::string>
axes::properties::core_property_names (void)
{
  static std::set<std::string> all_pnames;

  static bool initialized = false;

  if (! initialized)
    {
      all_pnames.insert ("activepositionproperty");
      all_pnames.insert ("alim");
      all_pnames.insert ("alimmode");
      all_pnames.insert ("ambientlightcolor");
      all_pnames.insert ("box");
      all_pnames.insert ("boxstyle");
      all_pnames.insert ("cameraposition");
      all_pnames.insert ("camerapositionmode");
      all_pnames.insert ("cameratarget");
      all_pnames.insert ("cameratargetmode");
      all_pnames.insert ("cameraupvector");
      all_pnames.insert ("cameraupvectormode");
      all_pnames.insert ("cameraviewangle");
      all_pnames.insert ("cameraviewanglemode");
      all_pnames.insert ("clim");
      all_pnames.insert ("climmode");
      all_pnames.insert ("clippingstyle");
      all_pnames.insert ("color");
      all_pnames.insert ("colormap");
      all_pnames.insert ("colororder");
      all_pnames.insert ("colororderindex");
      all_pnames.insert ("currentpoint");
      all_pnames.insert ("dataaspectratio");
      all_pnames.insert ("dataaspectratiomode");
      all_pnames.insert ("drawmode");
      all_pnames.insert ("fontangle");
      all_pnames.insert ("fontname");
      all_pnames.insert ("fontsize");
      all_pnames.insert ("fontunits");
      all_pnames.insert ("fontsmoothing");
      all_pnames.insert ("fontweight");
      all_pnames.insert ("gridalpha");
      all_pnames.insert ("gridalphamode");
      all_pnames.insert ("gridcolor");
      all_pnames.insert ("gridcolormode");
      all_pnames.insert ("gridlinestyle");
      all_pnames.insert ("labelfontsizemultiplier");
      all_pnames.insert ("layer");
      all_pnames.insert ("linestyleorder");
      all_pnames.insert ("linestyleorderindex");
      all_pnames.insert ("linewidth");
      all_pnames.insert ("minorgridalpha");
      all_pnames.insert ("minorgridalphamode");
      all_pnames.insert ("minorgridcolor");
      all_pnames.insert ("minorgridcolormode");
      all_pnames.insert ("minorgridlinestyle");
      all_pnames.insert ("nextplot");
      all_pnames.insert ("outerposition");
      all_pnames.insert ("plotboxaspectratio");
      all_pnames.insert ("plotboxaspectratiomode");
      all_pnames.insert ("position");
      all_pnames.insert ("projection");
      all_pnames.insert ("sortmethod");
      all_pnames.insert ("tickdir");
      all_pnames.insert ("tickdirmode");
      all_pnames.insert ("ticklabelinterpreter");
      all_pnames.insert ("ticklength");
      all_pnames.insert ("tightinset");
      all_pnames.insert ("title");
      all_pnames.insert ("titlefontsizemultiplier");
      all_pnames.insert ("titlefontweight");
      all_pnames.insert ("units");
      all_pnames.insert ("view");
      all_pnames.insert ("xaxislocation");
      all_pnames.insert ("xcolor");
      all_pnames.insert ("xcolormode");
      all_pnames.insert ("xdir");
      all_pnames.insert ("xgrid");
      all_pnames.insert ("xlabel");
      all_pnames.insert ("xlim");
      all_pnames.insert ("xlimmode");
      all_pnames.insert ("xminorgrid");
      all_pnames.insert ("xminortick");
      all_pnames.insert ("xscale");
      all_pnames.insert ("xtick");
      all_pnames.insert ("xticklabel");
      all_pnames.insert ("xticklabelmode");
      all_pnames.insert ("xticklabelrotation");
      all_pnames.insert ("xtickmode");
      all_pnames.insert ("yaxislocation");
      all_pnames.insert ("ycolor");
      all_pnames.insert ("ycolormode");
      all_pnames.insert ("ydir");
      all_pnames.insert ("ygrid");
      all_pnames.insert ("ylabel");
      all_pnames.insert ("ylim");
      all_pnames.insert ("ylimmode");
      all_pnames.insert ("yminorgrid");
      all_pnames.insert ("yminortick");
      all_pnames.insert ("yscale");
      all_pnames.insert ("ytick");
      all_pnames.insert ("yticklabel");
      all_pnames.insert ("yticklabelmode");
      all_pnames.insert ("yticklabelrotation");
      all_pnames.insert ("ytickmode");
      all_pnames.insert ("zcolor");
      all_pnames.insert ("zcolormode");
      all_pnames.insert ("zdir");
      all_pnames.insert ("zgrid");
      all_pnames.insert ("zlabel");
      all_pnames.insert ("zlim");
      all_pnames.insert ("zlimmode");
      all_pnames.insert ("zminorgrid");
      all_pnames.insert ("zminortick");
      all_pnames.insert ("zscale");
      all_pnames.insert ("ztick");
      all_pnames.insert ("zticklabel");
      all_pnames.insert ("zticklabelmode");
      all_pnames.insert ("zticklabelrotation");
      all_pnames.insert ("ztickmode");
      all_pnames.insert ("__colormap__");
      all_pnames.insert ("mousewheelzoom");
      all_pnames.insert ("__autopos_tag__");
      all_pnames.insert ("looseinset");
      all_pnames.insert ("xminortickvalues");
      all_pnames.insert ("yminortickvalues");
      all_pnames.insert ("zminortickvalues");
      all_pnames.insert ("__fontsize_points__");

      std::set<std::string> base_pnames = base_properties::core_property_names ();
      all_pnames.insert (base_pnames.begin (), base_pnames.end ());

      initialized = true;
    }

  return all_pnames;
}

bool
axes::properties::has_core_property (const caseless_str& pname)
{
  std::set<std::string> pnames = core_property_names ();

  return pnames.find (pname) != pnames.end ();
}

std::set<std::string>
axes::properties::readonly_property_names (void)
{
  static std::set<std::string> all_pnames;

  static bool initialized = false;

  if (! initialized)
    {
      all_pnames.insert ("tightinset");
      all_pnames.insert ("__fontsize_points__");

      std::set<std::string> base_pnames = base_properties::readonly_property_names ();
      all_pnames.insert (base_pnames.begin (), base_pnames.end ());

      initialized = true;
    }

  return all_pnames;
}

bool
axes::properties::has_readonly_property (const caseless_str& pname)
{
  std::set<std::string> pnames = readonly_property_names ();

  return pnames.find (pname) != pnames.end ();
}

std::set<std::string>
axes::properties::all_property_names (void) const
{
  static std::set<std::string> all_pnames = core_property_names ();

  std::set<std::string> retval = all_pnames;
  std::set<std::string> base_props = base_properties::all_property_names ();
  retval.insert (base_props.begin (), base_props.end ());

  return retval;
}

bool
axes::properties::has_property (const caseless_str& pname) const
{
  std::set<std::string> pnames = all_property_names ();

  return pnames.find (pname) != pnames.end ();
}

// ******** line ********

line::properties::properties (const graphics_handle& mh, const graphics_handle& p)
  : base_properties (go_name, mh, p),
    color ("color", mh, color_property (color_values (0, 0, 0), radio_values ("none"))),
    displayname ("displayname", mh, ""),
    erasemode ("erasemode", mh, "{normal}|none|xor|background"),
    interpreter ("interpreter", mh, "{tex}|none|latex"),
    linejoin ("linejoin", mh, "{round}|miter|chamfer"),
    linestyle ("linestyle", mh, "{-}|--|:|-.|none"),
    linewidth ("linewidth", mh, 0.5),
    marker ("marker", mh, "{none}|+|o|*|.|x|s|square|d|diamond|^|v|>|<|p|pentagram|h|hexagram"),
    markeredgecolor ("markeredgecolor", mh, color_property (radio_values ("{auto}|none"), color_values (0, 0, 0))),
    markerfacecolor ("markerfacecolor", mh, color_property (radio_values ("auto|{none}"), color_values (0, 0, 0))),
    markersize ("markersize", mh, 6),
    xdata ("xdata", mh, default_data ()),
    xdatasource ("xdatasource", mh, ""),
    ydata ("ydata", mh, default_data ()),
    ydatasource ("ydatasource", mh, ""),
    zdata ("zdata", mh, Matrix ()),
    zdatasource ("zdatasource", mh, ""),
    xlim ("xlim", mh, Matrix ()),
    ylim ("ylim", mh, Matrix ()),
    zlim ("zlim", mh, Matrix ()),
    xliminclude ("xliminclude", mh, "on"),
    yliminclude ("yliminclude", mh, "on"),
    zliminclude ("zliminclude", mh, "off")
{
  color.set_id (ID_COLOR);
  displayname.set_id (ID_DISPLAYNAME);
  erasemode.set_id (ID_ERASEMODE);
  erasemode.set_hidden (true);
  interpreter.set_id (ID_INTERPRETER);
  interpreter.set_hidden (true);
  linejoin.set_id (ID_LINEJOIN);
  linestyle.set_id (ID_LINESTYLE);
  linewidth.set_id (ID_LINEWIDTH);
  marker.set_id (ID_MARKER);
  markeredgecolor.set_id (ID_MARKEREDGECOLOR);
  markerfacecolor.set_id (ID_MARKERFACECOLOR);
  markersize.set_id (ID_MARKERSIZE);
  xdata.set_id (ID_XDATA);
  xdatasource.set_id (ID_XDATASOURCE);
  ydata.set_id (ID_YDATA);
  ydatasource.set_id (ID_YDATASOURCE);
  zdata.set_id (ID_ZDATA);
  zdatasource.set_id (ID_ZDATASOURCE);
  xlim.set_id (ID_XLIM);
  xlim.set_hidden (true);
  ylim.set_id (ID_YLIM);
  ylim.set_hidden (true);
  zlim.set_id (ID_ZLIM);
  zlim.set_hidden (true);
  xliminclude.set_id (ID_XLIMINCLUDE);
  xliminclude.set_hidden (true);
  yliminclude.set_id (ID_YLIMINCLUDE);
  yliminclude.set_hidden (true);
  zliminclude.set_id (ID_ZLIMINCLUDE);
  zliminclude.set_hidden (true);
  init ();
}

void
line::properties::set (const caseless_str& pname_arg, const octave_value& val)
{
  const std::set<std::string>& pnames = all_property_names ();

  caseless_str pname = validate_property_name ("set", go_name, pnames, pname_arg);

  if (has_readonly_property (pname))
    {
      error ("set: \"%s\" is read-only", pname.c_str ());
      return;
    }

  if (pname.compare ("color"))
    set_color (val);
  else if (pname.compare ("displayname"))
    set_displayname (val);
  else if (pname.compare ("erasemode"))
    set_erasemode (val);
  else if (pname.compare ("interpreter"))
    set_interpreter (val);
  else if (pname.compare ("linejoin"))
    set_linejoin (val);
  else if (pname.compare ("linestyle"))
    set_linestyle (val);
  else if (pname.compare ("linewidth"))
    set_linewidth (val);
  else if (pname.compare ("marker"))
    set_marker (val);
  else if (pname.compare ("markeredgecolor"))
    set_markeredgecolor (val);
  else if (pname.compare ("markerfacecolor"))
    set_markerfacecolor (val);
  else if (pname.compare ("markersize"))
    set_markersize (val);
  else if (pname.compare ("xdata"))
    set_xdata (val);
  else if (pname.compare ("xdatasource"))
    set_xdatasource (val);
  else if (pname.compare ("ydata"))
    set_ydata (val);
  else if (pname.compare ("ydatasource"))
    set_ydatasource (val);
  else if (pname.compare ("zdata"))
    set_zdata (val);
  else if (pname.compare ("zdatasource"))
    set_zdatasource (val);
  else if (pname.compare ("xliminclude"))
    set_xliminclude (val);
  else if (pname.compare ("yliminclude"))
    set_yliminclude (val);
  else if (pname.compare ("zliminclude"))
    set_zliminclude (val);
  else
    base_properties::set (pname, val);
}

octave_value
line::properties::get (bool all) const
{
  octave_map m = base_properties::get (all).map_value ();

  m.assign ("color", octave_value (get_color ()));
  m.assign ("displayname", octave_value (get_displayname ()));
  if (all)
    m.assign ("erasemode", octave_value (get_erasemode ()));
  if (all)
    m.assign ("interpreter", octave_value (get_interpreter ()));
  m.assign ("linejoin", octave_value (get_linejoin ()));
  m.assign ("linestyle", octave_value (get_linestyle ()));
  m.assign ("linewidth", octave_value (get_linewidth ()));
  m.assign ("marker", octave_value (get_marker ()));
  m.assign ("markeredgecolor", octave_value (get_markeredgecolor ()));
  m.assign ("markerfacecolor", octave_value (get_markerfacecolor ()));
  m.assign ("markersize", octave_value (get_markersize ()));
  m.assign ("xdata", octave_value (get_xdata ()));
  m.assign ("xdatasource", octave_value (get_xdatasource ()));
  m.assign ("ydata", octave_value (get_ydata ()));
  m.assign ("ydatasource", octave_value (get_ydatasource ()));
  m.assign ("zdata", octave_value (get_zdata ()));
  m.assign ("zdatasource", octave_value (get_zdatasource ()));
  if (all)
    m.assign ("xlim", octave_value (get_xlim ()));
  if (all)
    m.assign ("ylim", octave_value (get_ylim ()));
  if (all)
    m.assign ("zlim", octave_value (get_zlim ()));
  if (all)
    m.assign ("xliminclude", octave_value (get_xliminclude ()));
  if (all)
    m.assign ("yliminclude", octave_value (get_yliminclude ()));
  if (all)
    m.assign ("zliminclude", octave_value (get_zliminclude ()));

  return m;
}

octave_value
line::properties::get (const caseless_str& pname_arg) const
{
  octave_value retval;

  const std::set<std::string>& pnames = all_property_names ();

  caseless_str pname = validate_property_name ("get", go_name, pnames, pname_arg);

  if (pname.compare ("color"))
    retval = get_color ();
  else if (pname.compare ("displayname"))
    retval = get_displayname ();
  else if (pname.compare ("erasemode"))
    retval = get_erasemode ();
  else if (pname.compare ("interpreter"))
    retval = get_interpreter ();
  else if (pname.compare ("linejoin"))
    retval = get_linejoin ();
  else if (pname.compare ("linestyle"))
    retval = get_linestyle ();
  else if (pname.compare ("linewidth"))
    retval = get_linewidth ();
  else if (pname.compare ("marker"))
    retval = get_marker ();
  else if (pname.compare ("markeredgecolor"))
    retval = get_markeredgecolor ();
  else if (pname.compare ("markerfacecolor"))
    retval = get_markerfacecolor ();
  else if (pname.compare ("markersize"))
    retval = get_markersize ();
  else if (pname.compare ("xdata"))
    retval = get_xdata ();
  else if (pname.compare ("xdatasource"))
    retval = get_xdatasource ();
  else if (pname.compare ("ydata"))
    retval = get_ydata ();
  else if (pname.compare ("ydatasource"))
    retval = get_ydatasource ();
  else if (pname.compare ("zdata"))
    retval = get_zdata ();
  else if (pname.compare ("zdatasource"))
    retval = get_zdatasource ();
  else if (pname.compare ("xlim"))
    retval = get_xlim ();
  else if (pname.compare ("ylim"))
    retval = get_ylim ();
  else if (pname.compare ("zlim"))
    retval = get_zlim ();
  else if (pname.compare ("xliminclude"))
    retval = get_xliminclude ();
  else if (pname.compare ("yliminclude"))
    retval = get_yliminclude ();
  else if (pname.compare ("zliminclude"))
    retval = get_zliminclude ();
  else
    retval = base_properties::get (pname);

  return retval;
}

property
line::properties::get_property (const caseless_str& pname_arg)
{
  const std::set<std::string>& pnames = all_property_names ();

  caseless_str pname = validate_property_name ("get", go_name, pnames, pname_arg);

  if (pname.compare ("color"))
    return property (&color, true);
  else if (pname.compare ("displayname"))
    return property (&displayname, true);
  else if (pname.compare ("erasemode"))
    return property (&erasemode, true);
  else if (pname.compare ("interpreter"))
    return property (&interpreter, true);
  else if (pname.compare ("linejoin"))
    return property (&linejoin, true);
  else if (pname.compare ("linestyle"))
    return property (&linestyle, true);
  else if (pname.compare ("linewidth"))
    return property (&linewidth, true);
  else if (pname.compare ("marker"))
    return property (&marker, true);
  else if (pname.compare ("markeredgecolor"))
    return property (&markeredgecolor, true);
  else if (pname.compare ("markerfacecolor"))
    return property (&markerfacecolor, true);
  else if (pname.compare ("markersize"))
    return property (&markersize, true);
  else if (pname.compare ("xdata"))
    return property (&xdata, true);
  else if (pname.compare ("xdatasource"))
    return property (&xdatasource, true);
  else if (pname.compare ("ydata"))
    return property (&ydata, true);
  else if (pname.compare ("ydatasource"))
    return property (&ydatasource, true);
  else if (pname.compare ("zdata"))
    return property (&zdata, true);
  else if (pname.compare ("zdatasource"))
    return property (&zdatasource, true);
  else if (pname.compare ("xlim"))
    return property (&xlim, true);
  else if (pname.compare ("ylim"))
    return property (&ylim, true);
  else if (pname.compare ("zlim"))
    return property (&zlim, true);
  else if (pname.compare ("xliminclude"))
    return property (&xliminclude, true);
  else if (pname.compare ("yliminclude"))
    return property (&yliminclude, true);
  else if (pname.compare ("zliminclude"))
    return property (&zliminclude, true);
  else
    return base_properties::get_property (pname);
}

property_list::pval_map_type
line::properties::factory_defaults (void)
{
  property_list::pval_map_type m = base_properties::factory_defaults ();

  m["color"] = color_property (color_values (0, 0, 0), radio_values ("none"));
  m["displayname"] = "";
  m["erasemode"] = "normal";
  m["interpreter"] = "tex";
  m["linejoin"] = "round";
  m["linestyle"] = "-";
  m["linewidth"] = 0.5;
  m["marker"] = "none";
  m["markeredgecolor"] = color_property (radio_values ("{auto}|none"), color_values (0, 0, 0));
  m["markerfacecolor"] = color_property (radio_values ("auto|{none}"), color_values (0, 0, 0));
  m["markersize"] = 6;
  m["xdata"] = default_data ();
  m["xdatasource"] = "";
  m["ydata"] = default_data ();
  m["ydatasource"] = "";
  m["zdata"] = Matrix ();
  m["zdatasource"] = "";
  m["xlim"] = Matrix ();
  m["ylim"] = Matrix ();
  m["zlim"] = Matrix ();
  m["xliminclude"] = "on";
  m["yliminclude"] = "on";
  m["zliminclude"] = "off";

  return m;
}

std::string line::properties::go_name ("line");

std::set<std::string>
line::properties::core_property_names (void)
{
  static std::set<std::string> all_pnames;

  static bool initialized = false;

  if (! initialized)
    {
      all_pnames.insert ("color");
      all_pnames.insert ("displayname");
      all_pnames.insert ("erasemode");
      all_pnames.insert ("interpreter");
      all_pnames.insert ("linejoin");
      all_pnames.insert ("linestyle");
      all_pnames.insert ("linewidth");
      all_pnames.insert ("marker");
      all_pnames.insert ("markeredgecolor");
      all_pnames.insert ("markerfacecolor");
      all_pnames.insert ("markersize");
      all_pnames.insert ("xdata");
      all_pnames.insert ("xdatasource");
      all_pnames.insert ("ydata");
      all_pnames.insert ("ydatasource");
      all_pnames.insert ("zdata");
      all_pnames.insert ("zdatasource");
      all_pnames.insert ("xlim");
      all_pnames.insert ("ylim");
      all_pnames.insert ("zlim");
      all_pnames.insert ("xliminclude");
      all_pnames.insert ("yliminclude");
      all_pnames.insert ("zliminclude");

      std::set<std::string> base_pnames = base_properties::core_property_names ();
      all_pnames.insert (base_pnames.begin (), base_pnames.end ());

      initialized = true;
    }

  return all_pnames;
}

bool
line::properties::has_core_property (const caseless_str& pname)
{
  std::set<std::string> pnames = core_property_names ();

  return pnames.find (pname) != pnames.end ();
}

std::set<std::string>
line::properties::readonly_property_names (void)
{
  static std::set<std::string> all_pnames;

  static bool initialized = false;

  if (! initialized)
    {
      all_pnames.insert ("xlim");
      all_pnames.insert ("ylim");
      all_pnames.insert ("zlim");

      std::set<std::string> base_pnames = base_properties::readonly_property_names ();
      all_pnames.insert (base_pnames.begin (), base_pnames.end ());

      initialized = true;
    }

  return all_pnames;
}

bool
line::properties::has_readonly_property (const caseless_str& pname)
{
  std::set<std::string> pnames = readonly_property_names ();

  return pnames.find (pname) != pnames.end ();
}

std::set<std::string>
line::properties::all_property_names (void) const
{
  static std::set<std::string> all_pnames = core_property_names ();

  std::set<std::string> retval = all_pnames;
  std::set<std::string> base_props = base_properties::all_property_names ();
  retval.insert (base_props.begin (), base_props.end ());

  return retval;
}

bool
line::properties::has_property (const caseless_str& pname) const
{
  std::set<std::string> pnames = all_property_names ();

  return pnames.find (pname) != pnames.end ();
}

// ******** text ********

text::properties::properties (const graphics_handle& mh, const graphics_handle& p)
  : base_properties (go_name, mh, p),
    backgroundcolor ("backgroundcolor", mh, color_property (radio_values ("{none}"), color_values (1, 1, 1))),
    color ("color", mh, color_values (0, 0, 0)),
    edgecolor ("edgecolor", mh, color_property (radio_values ("{none}"), color_values (0, 0, 0))),
    editing ("editing", mh, "off"),
    erasemode ("erasemode", mh, "{normal}|none|xor|background"),
    extent ("extent", mh, Matrix (1, 4, 0.0)),
    fontangle ("fontangle", mh, "{normal}|italic|oblique"),
    fontname ("fontname", mh, OCTAVE_DEFAULT_FONTNAME),
    fontsize ("fontsize", mh, 10),
    fontunits ("fontunits", mh, "inches|centimeters|normalized|{points}|pixels"),
    fontweight ("fontweight", mh, "light|{normal}|demi|bold"),
    horizontalalignment ("horizontalalignment", mh, "{left}|center|right"),
    interpreter ("interpreter", mh, "{tex}|none|latex"),
    linestyle ("linestyle", mh, "{-}|--|:|-.|none"),
    linewidth ("linewidth", mh, 0.5),
    margin ("margin", mh, 2),
    position ("position", mh, Matrix (1, 3, 0.0)),
    rotation ("rotation", mh, 0),
    string ("string", mh, ""),
    units ("units", mh, "{data}|pixels|normalized|inches|centimeters|points"),
    verticalalignment ("verticalalignment", mh, "top|cap|{middle}|baseline|bottom"),
    xlim ("xlim", mh, Matrix ()),
    ylim ("ylim", mh, Matrix ()),
    zlim ("zlim", mh, Matrix ()),
    xliminclude ("xliminclude", mh, "off"),
    yliminclude ("yliminclude", mh, "off"),
    zliminclude ("zliminclude", mh, "off"),
    positionmode ("positionmode", mh, "{auto}|manual"),
    rotationmode ("rotationmode", mh, "{auto}|manual"),
    horizontalalignmentmode ("horizontalalignmentmode", mh, "{auto}|manual"),
    verticalalignmentmode ("verticalalignmentmode", mh, "{auto}|manual"),
    __autopos_tag__ ("__autopos_tag__", mh, "{none}|xlabel|ylabel|zlabel|title"),
    __fontsize_points__ ("__fontsize_points__", mh, 0)
{
  backgroundcolor.set_id (ID_BACKGROUNDCOLOR);
  color.set_id (ID_COLOR);
  edgecolor.set_id (ID_EDGECOLOR);
  editing.set_id (ID_EDITING);
  erasemode.set_id (ID_ERASEMODE);
  erasemode.set_hidden (true);
  extent.set_id (ID_EXTENT);
  fontangle.set_id (ID_FONTANGLE);
  fontname.set_id (ID_FONTNAME);
  fontsize.set_id (ID_FONTSIZE);
  fontunits.set_id (ID_FONTUNITS);
  fontweight.set_id (ID_FONTWEIGHT);
  horizontalalignment.set_id (ID_HORIZONTALALIGNMENT);
  interpreter.set_id (ID_INTERPRETER);
  linestyle.set_id (ID_LINESTYLE);
  linewidth.set_id (ID_LINEWIDTH);
  margin.set_id (ID_MARGIN);
  position.set_id (ID_POSITION);
  rotation.set_id (ID_ROTATION);
  string.set_id (ID_STRING);
  units.set_id (ID_UNITS);
  verticalalignment.set_id (ID_VERTICALALIGNMENT);
  xlim.set_id (ID_XLIM);
  xlim.set_hidden (true);
  ylim.set_id (ID_YLIM);
  ylim.set_hidden (true);
  zlim.set_id (ID_ZLIM);
  zlim.set_hidden (true);
  xliminclude.set_id (ID_XLIMINCLUDE);
  xliminclude.set_hidden (true);
  yliminclude.set_id (ID_YLIMINCLUDE);
  yliminclude.set_hidden (true);
  zliminclude.set_id (ID_ZLIMINCLUDE);
  zliminclude.set_hidden (true);
  positionmode.set_id (ID_POSITIONMODE);
  positionmode.set_hidden (true);
  rotationmode.set_id (ID_ROTATIONMODE);
  rotationmode.set_hidden (true);
  horizontalalignmentmode.set_id (ID_HORIZONTALALIGNMENTMODE);
  horizontalalignmentmode.set_hidden (true);
  verticalalignmentmode.set_id (ID_VERTICALALIGNMENTMODE);
  verticalalignmentmode.set_hidden (true);
  __autopos_tag__.set_id (ID___AUTOPOS_TAG__);
  __autopos_tag__.set_hidden (true);
  __fontsize_points__.set_id (ID___FONTSIZE_POINTS__);
  __fontsize_points__.set_hidden (true);
  init ();
}

void
text::properties::set (const caseless_str& pname_arg, const octave_value& val)
{
  const std::set<std::string>& pnames = all_property_names ();

  caseless_str pname = validate_property_name ("set", go_name, pnames, pname_arg);

  if (has_readonly_property (pname))
    {
      error ("set: \"%s\" is read-only", pname.c_str ());
      return;
    }

  if (pname.compare ("backgroundcolor"))
    set_backgroundcolor (val);
  else if (pname.compare ("color"))
    set_color (val);
  else if (pname.compare ("edgecolor"))
    set_edgecolor (val);
  else if (pname.compare ("editing"))
    set_editing (val);
  else if (pname.compare ("erasemode"))
    set_erasemode (val);
  else if (pname.compare ("fontangle"))
    set_fontangle (val);
  else if (pname.compare ("fontname"))
    set_fontname (val);
  else if (pname.compare ("fontsize"))
    set_fontsize (val);
  else if (pname.compare ("fontunits"))
    set_fontunits (val);
  else if (pname.compare ("fontweight"))
    set_fontweight (val);
  else if (pname.compare ("horizontalalignment"))
    set_horizontalalignment (val);
  else if (pname.compare ("interpreter"))
    set_interpreter (val);
  else if (pname.compare ("linestyle"))
    set_linestyle (val);
  else if (pname.compare ("linewidth"))
    set_linewidth (val);
  else if (pname.compare ("margin"))
    set_margin (val);
  else if (pname.compare ("position"))
    set_position (val);
  else if (pname.compare ("rotation"))
    set_rotation (val);
  else if (pname.compare ("string"))
    set_string (val);
  else if (pname.compare ("units"))
    set_units (val);
  else if (pname.compare ("verticalalignment"))
    set_verticalalignment (val);
  else if (pname.compare ("xliminclude"))
    set_xliminclude (val);
  else if (pname.compare ("yliminclude"))
    set_yliminclude (val);
  else if (pname.compare ("zliminclude"))
    set_zliminclude (val);
  else if (pname.compare ("positionmode"))
    set_positionmode (val);
  else if (pname.compare ("rotationmode"))
    set_rotationmode (val);
  else if (pname.compare ("horizontalalignmentmode"))
    set_horizontalalignmentmode (val);
  else if (pname.compare ("verticalalignmentmode"))
    set_verticalalignmentmode (val);
  else if (pname.compare ("__autopos_tag__"))
    set___autopos_tag__ (val);
  else
    base_properties::set (pname, val);
}

octave_value
text::properties::get (bool all) const
{
  octave_map m = base_properties::get (all).map_value ();

  m.assign ("backgroundcolor", octave_value (get_backgroundcolor ()));
  m.assign ("color", octave_value (get_color ()));
  m.assign ("edgecolor", octave_value (get_edgecolor ()));
  m.assign ("editing", octave_value (get_editing ()));
  if (all)
    m.assign ("erasemode", octave_value (get_erasemode ()));
  m.assign ("extent", octave_value (get_extent ()));
  m.assign ("fontangle", octave_value (get_fontangle ()));
  m.assign ("fontname", octave_value (get_fontname ()));
  m.assign ("fontsize", octave_value (get_fontsize ()));
  m.assign ("fontunits", octave_value (get_fontunits ()));
  m.assign ("fontweight", octave_value (get_fontweight ()));
  m.assign ("horizontalalignment", octave_value (get_horizontalalignment ()));
  m.assign ("interpreter", octave_value (get_interpreter ()));
  m.assign ("linestyle", octave_value (get_linestyle ()));
  m.assign ("linewidth", octave_value (get_linewidth ()));
  m.assign ("margin", octave_value (get_margin ()));
  m.assign ("position", octave_value (get_position ()));
  m.assign ("rotation", octave_value (get_rotation ()));
  m.assign ("string", octave_value (get_string ()));
  m.assign ("units", octave_value (get_units ()));
  m.assign ("verticalalignment", octave_value (get_verticalalignment ()));
  if (all)
    m.assign ("xlim", octave_value (get_xlim ()));
  if (all)
    m.assign ("ylim", octave_value (get_ylim ()));
  if (all)
    m.assign ("zlim", octave_value (get_zlim ()));
  if (all)
    m.assign ("xliminclude", octave_value (get_xliminclude ()));
  if (all)
    m.assign ("yliminclude", octave_value (get_yliminclude ()));
  if (all)
    m.assign ("zliminclude", octave_value (get_zliminclude ()));
  if (all)
    m.assign ("positionmode", octave_value (get_positionmode ()));
  if (all)
    m.assign ("rotationmode", octave_value (get_rotationmode ()));
  if (all)
    m.assign ("horizontalalignmentmode", octave_value (get_horizontalalignmentmode ()));
  if (all)
    m.assign ("verticalalignmentmode", octave_value (get_verticalalignmentmode ()));
  if (all)
    m.assign ("__autopos_tag__", octave_value (get___autopos_tag__ ()));
  if (all)
    m.assign ("__fontsize_points__", octave_value (get___fontsize_points__ ()));

  return m;
}

octave_value
text::properties::get (const caseless_str& pname_arg) const
{
  octave_value retval;

  const std::set<std::string>& pnames = all_property_names ();

  caseless_str pname = validate_property_name ("get", go_name, pnames, pname_arg);

  if (pname.compare ("backgroundcolor"))
    retval = get_backgroundcolor ();
  else if (pname.compare ("color"))
    retval = get_color ();
  else if (pname.compare ("edgecolor"))
    retval = get_edgecolor ();
  else if (pname.compare ("editing"))
    retval = get_editing ();
  else if (pname.compare ("erasemode"))
    retval = get_erasemode ();
  else if (pname.compare ("extent"))
    retval = get_extent ();
  else if (pname.compare ("fontangle"))
    retval = get_fontangle ();
  else if (pname.compare ("fontname"))
    retval = get_fontname ();
  else if (pname.compare ("fontsize"))
    retval = get_fontsize ();
  else if (pname.compare ("fontunits"))
    retval = get_fontunits ();
  else if (pname.compare ("fontweight"))
    retval = get_fontweight ();
  else if (pname.compare ("horizontalalignment"))
    retval = get_horizontalalignment ();
  else if (pname.compare ("interpreter"))
    retval = get_interpreter ();
  else if (pname.compare ("linestyle"))
    retval = get_linestyle ();
  else if (pname.compare ("linewidth"))
    retval = get_linewidth ();
  else if (pname.compare ("margin"))
    retval = get_margin ();
  else if (pname.compare ("position"))
    retval = get_position ();
  else if (pname.compare ("rotation"))
    retval = get_rotation ();
  else if (pname.compare ("string"))
    retval = get_string ();
  else if (pname.compare ("units"))
    retval = get_units ();
  else if (pname.compare ("verticalalignment"))
    retval = get_verticalalignment ();
  else if (pname.compare ("xlim"))
    retval = get_xlim ();
  else if (pname.compare ("ylim"))
    retval = get_ylim ();
  else if (pname.compare ("zlim"))
    retval = get_zlim ();
  else if (pname.compare ("xliminclude"))
    retval = get_xliminclude ();
  else if (pname.compare ("yliminclude"))
    retval = get_yliminclude ();
  else if (pname.compare ("zliminclude"))
    retval = get_zliminclude ();
  else if (pname.compare ("positionmode"))
    retval = get_positionmode ();
  else if (pname.compare ("rotationmode"))
    retval = get_rotationmode ();
  else if (pname.compare ("horizontalalignmentmode"))
    retval = get_horizontalalignmentmode ();
  else if (pname.compare ("verticalalignmentmode"))
    retval = get_verticalalignmentmode ();
  else if (pname.compare ("__autopos_tag__"))
    retval = get___autopos_tag__ ();
  else if (pname.compare ("__fontsize_points__"))
    retval = get___fontsize_points__ ();
  else
    retval = base_properties::get (pname);

  return retval;
}

property
text::properties::get_property (const caseless_str& pname_arg)
{
  const std::set<std::string>& pnames = all_property_names ();

  caseless_str pname = validate_property_name ("get", go_name, pnames, pname_arg);

  if (pname.compare ("backgroundcolor"))
    return property (&backgroundcolor, true);
  else if (pname.compare ("color"))
    return property (&color, true);
  else if (pname.compare ("edgecolor"))
    return property (&edgecolor, true);
  else if (pname.compare ("editing"))
    return property (&editing, true);
  else if (pname.compare ("erasemode"))
    return property (&erasemode, true);
  else if (pname.compare ("extent"))
    return property (&extent, true);
  else if (pname.compare ("fontangle"))
    return property (&fontangle, true);
  else if (pname.compare ("fontname"))
    return property (&fontname, true);
  else if (pname.compare ("fontsize"))
    return property (&fontsize, true);
  else if (pname.compare ("fontunits"))
    return property (&fontunits, true);
  else if (pname.compare ("fontweight"))
    return property (&fontweight, true);
  else if (pname.compare ("horizontalalignment"))
    return property (&horizontalalignment, true);
  else if (pname.compare ("interpreter"))
    return property (&interpreter, true);
  else if (pname.compare ("linestyle"))
    return property (&linestyle, true);
  else if (pname.compare ("linewidth"))
    return property (&linewidth, true);
  else if (pname.compare ("margin"))
    return property (&margin, true);
  else if (pname.compare ("position"))
    return property (&position, true);
  else if (pname.compare ("rotation"))
    return property (&rotation, true);
  else if (pname.compare ("string"))
    return property (&string, true);
  else if (pname.compare ("units"))
    return property (&units, true);
  else if (pname.compare ("verticalalignment"))
    return property (&verticalalignment, true);
  else if (pname.compare ("xlim"))
    return property (&xlim, true);
  else if (pname.compare ("ylim"))
    return property (&ylim, true);
  else if (pname.compare ("zlim"))
    return property (&zlim, true);
  else if (pname.compare ("xliminclude"))
    return property (&xliminclude, true);
  else if (pname.compare ("yliminclude"))
    return property (&yliminclude, true);
  else if (pname.compare ("zliminclude"))
    return property (&zliminclude, true);
  else if (pname.compare ("positionmode"))
    return property (&positionmode, true);
  else if (pname.compare ("rotationmode"))
    return property (&rotationmode, true);
  else if (pname.compare ("horizontalalignmentmode"))
    return property (&horizontalalignmentmode, true);
  else if (pname.compare ("verticalalignmentmode"))
    return property (&verticalalignmentmode, true);
  else if (pname.compare ("__autopos_tag__"))
    return property (&__autopos_tag__, true);
  else if (pname.compare ("__fontsize_points__"))
    return property (&__fontsize_points__, true);
  else
    return base_properties::get_property (pname);
}

property_list::pval_map_type
text::properties::factory_defaults (void)
{
  property_list::pval_map_type m = base_properties::factory_defaults ();

  m["backgroundcolor"] = color_property (radio_values ("{none}"), color_values (1, 1, 1));
  m["color"] = color_values (0, 0, 0);
  m["edgecolor"] = color_property (radio_values ("{none}"), color_values (0, 0, 0));
  m["editing"] = "off";
  m["erasemode"] = "normal";
  m["extent"] = Matrix (1, 4, 0.0);
  m["fontangle"] = "normal";
  m["fontname"] = OCTAVE_DEFAULT_FONTNAME;
  m["fontsize"] = 10;
  m["fontunits"] = "points";
  m["fontweight"] = "normal";
  m["horizontalalignment"] = "left";
  m["interpreter"] = "tex";
  m["linestyle"] = "-";
  m["linewidth"] = 0.5;
  m["margin"] = 2;
  m["position"] = Matrix (1, 3, 0.0);
  m["rotation"] = 0;
  m["string"] = "";
  m["units"] = "data";
  m["verticalalignment"] = "middle";
  m["xlim"] = Matrix ();
  m["ylim"] = Matrix ();
  m["zlim"] = Matrix ();
  m["xliminclude"] = "off";
  m["yliminclude"] = "off";
  m["zliminclude"] = "off";
  m["positionmode"] = "auto";
  m["rotationmode"] = "auto";
  m["horizontalalignmentmode"] = "auto";
  m["verticalalignmentmode"] = "auto";
  m["__autopos_tag__"] = "none";
  m["__fontsize_points__"] = 0;

  return m;
}

std::string text::properties::go_name ("text");

std::set<std::string>
text::properties::core_property_names (void)
{
  static std::set<std::string> all_pnames;

  static bool initialized = false;

  if (! initialized)
    {
      all_pnames.insert ("backgroundcolor");
      all_pnames.insert ("color");
      all_pnames.insert ("edgecolor");
      all_pnames.insert ("editing");
      all_pnames.insert ("erasemode");
      all_pnames.insert ("extent");
      all_pnames.insert ("fontangle");
      all_pnames.insert ("fontname");
      all_pnames.insert ("fontsize");
      all_pnames.insert ("fontunits");
      all_pnames.insert ("fontweight");
      all_pnames.insert ("horizontalalignment");
      all_pnames.insert ("interpreter");
      all_pnames.insert ("linestyle");
      all_pnames.insert ("linewidth");
      all_pnames.insert ("margin");
      all_pnames.insert ("position");
      all_pnames.insert ("rotation");
      all_pnames.insert ("string");
      all_pnames.insert ("units");
      all_pnames.insert ("verticalalignment");
      all_pnames.insert ("xlim");
      all_pnames.insert ("ylim");
      all_pnames.insert ("zlim");
      all_pnames.insert ("xliminclude");
      all_pnames.insert ("yliminclude");
      all_pnames.insert ("zliminclude");
      all_pnames.insert ("positionmode");
      all_pnames.insert ("rotationmode");
      all_pnames.insert ("horizontalalignmentmode");
      all_pnames.insert ("verticalalignmentmode");
      all_pnames.insert ("__autopos_tag__");
      all_pnames.insert ("__fontsize_points__");

      std::set<std::string> base_pnames = base_properties::core_property_names ();
      all_pnames.insert (base_pnames.begin (), base_pnames.end ());

      initialized = true;
    }

  return all_pnames;
}

bool
text::properties::has_core_property (const caseless_str& pname)
{
  std::set<std::string> pnames = core_property_names ();

  return pnames.find (pname) != pnames.end ();
}

std::set<std::string>
text::properties::readonly_property_names (void)
{
  static std::set<std::string> all_pnames;

  static bool initialized = false;

  if (! initialized)
    {
      all_pnames.insert ("extent");
      all_pnames.insert ("xlim");
      all_pnames.insert ("ylim");
      all_pnames.insert ("zlim");
      all_pnames.insert ("__fontsize_points__");

      std::set<std::string> base_pnames = base_properties::readonly_property_names ();
      all_pnames.insert (base_pnames.begin (), base_pnames.end ());

      initialized = true;
    }

  return all_pnames;
}

bool
text::properties::has_readonly_property (const caseless_str& pname)
{
  std::set<std::string> pnames = readonly_property_names ();

  return pnames.find (pname) != pnames.end ();
}

std::set<std::string>
text::properties::all_property_names (void) const
{
  static std::set<std::string> all_pnames = core_property_names ();

  std::set<std::string> retval = all_pnames;
  std::set<std::string> base_props = base_properties::all_property_names ();
  retval.insert (base_props.begin (), base_props.end ());

  return retval;
}

bool
text::properties::has_property (const caseless_str& pname) const
{
  std::set<std::string> pnames = all_property_names ();

  return pnames.find (pname) != pnames.end ();
}

// ******** image ********

image::properties::properties (const graphics_handle& mh, const graphics_handle& p)
  : base_properties (go_name, mh, p),
    alphadata ("alphadata", mh, Matrix (1, 1, 1.0)),
    alphadatamapping ("alphadatamapping", mh, "{none}|direct|scaled"),
    cdata ("cdata", mh, default_image_cdata ()),
    cdatamapping ("cdatamapping", mh, "scaled|{direct}"),
    erasemode ("erasemode", mh, "{normal}|none|xor|background"),
    xdata ("xdata", mh, Matrix ()),
    ydata ("ydata", mh, Matrix ()),
    alim ("alim", mh, Matrix ()),
    clim ("clim", mh, Matrix ()),
    xlim ("xlim", mh, Matrix ()),
    ylim ("ylim", mh, Matrix ()),
    aliminclude ("aliminclude", mh, "on"),
    climinclude ("climinclude", mh, "on"),
    xliminclude ("xliminclude", mh, "on"),
    yliminclude ("yliminclude", mh, "on"),
    xdatamode ("xdatamode", mh, "{auto}|manual"),
    ydatamode ("ydatamode", mh, "{auto}|manual")
{
  alphadata.set_id (ID_ALPHADATA);
  alphadatamapping.set_id (ID_ALPHADATAMAPPING);
  cdata.set_id (ID_CDATA);
  cdatamapping.set_id (ID_CDATAMAPPING);
  erasemode.set_id (ID_ERASEMODE);
  erasemode.set_hidden (true);
  xdata.set_id (ID_XDATA);
  ydata.set_id (ID_YDATA);
  alim.set_id (ID_ALIM);
  alim.set_hidden (true);
  clim.set_id (ID_CLIM);
  clim.set_hidden (true);
  xlim.set_id (ID_XLIM);
  xlim.set_hidden (true);
  ylim.set_id (ID_YLIM);
  ylim.set_hidden (true);
  aliminclude.set_id (ID_ALIMINCLUDE);
  aliminclude.set_hidden (true);
  climinclude.set_id (ID_CLIMINCLUDE);
  climinclude.set_hidden (true);
  xliminclude.set_id (ID_XLIMINCLUDE);
  xliminclude.set_hidden (true);
  yliminclude.set_id (ID_YLIMINCLUDE);
  yliminclude.set_hidden (true);
  xdatamode.set_id (ID_XDATAMODE);
  xdatamode.set_hidden (true);
  ydatamode.set_id (ID_YDATAMODE);
  ydatamode.set_hidden (true);
  init ();
}

void
image::properties::set (const caseless_str& pname_arg, const octave_value& val)
{
  const std::set<std::string>& pnames = all_property_names ();

  caseless_str pname = validate_property_name ("set", go_name, pnames, pname_arg);

  if (has_readonly_property (pname))
    {
      error ("set: \"%s\" is read-only", pname.c_str ());
      return;
    }

  if (pname.compare ("alphadata"))
    set_alphadata (val);
  else if (pname.compare ("alphadatamapping"))
    set_alphadatamapping (val);
  else if (pname.compare ("cdata"))
    set_cdata (val);
  else if (pname.compare ("cdatamapping"))
    set_cdatamapping (val);
  else if (pname.compare ("erasemode"))
    set_erasemode (val);
  else if (pname.compare ("xdata"))
    set_xdata (val);
  else if (pname.compare ("ydata"))
    set_ydata (val);
  else if (pname.compare ("aliminclude"))
    set_aliminclude (val);
  else if (pname.compare ("climinclude"))
    set_climinclude (val);
  else if (pname.compare ("xliminclude"))
    set_xliminclude (val);
  else if (pname.compare ("yliminclude"))
    set_yliminclude (val);
  else if (pname.compare ("xdatamode"))
    set_xdatamode (val);
  else if (pname.compare ("ydatamode"))
    set_ydatamode (val);
  else
    base_properties::set (pname, val);
}

octave_value
image::properties::get (bool all) const
{
  octave_map m = base_properties::get (all).map_value ();

  m.assign ("alphadata", octave_value (get_alphadata ()));
  m.assign ("alphadatamapping", octave_value (get_alphadatamapping ()));
  m.assign ("cdata", octave_value (get_cdata ()));
  m.assign ("cdatamapping", octave_value (get_cdatamapping ()));
  if (all)
    m.assign ("erasemode", octave_value (get_erasemode ()));
  m.assign ("xdata", octave_value (get_xdata ()));
  m.assign ("ydata", octave_value (get_ydata ()));
  if (all)
    m.assign ("alim", octave_value (get_alim ()));
  if (all)
    m.assign ("clim", octave_value (get_clim ()));
  if (all)
    m.assign ("xlim", octave_value (get_xlim ()));
  if (all)
    m.assign ("ylim", octave_value (get_ylim ()));
  if (all)
    m.assign ("aliminclude", octave_value (get_aliminclude ()));
  if (all)
    m.assign ("climinclude", octave_value (get_climinclude ()));
  if (all)
    m.assign ("xliminclude", octave_value (get_xliminclude ()));
  if (all)
    m.assign ("yliminclude", octave_value (get_yliminclude ()));
  if (all)
    m.assign ("xdatamode", octave_value (get_xdatamode ()));
  if (all)
    m.assign ("ydatamode", octave_value (get_ydatamode ()));

  return m;
}

octave_value
image::properties::get (const caseless_str& pname_arg) const
{
  octave_value retval;

  const std::set<std::string>& pnames = all_property_names ();

  caseless_str pname = validate_property_name ("get", go_name, pnames, pname_arg);

  if (pname.compare ("alphadata"))
    retval = get_alphadata ();
  else if (pname.compare ("alphadatamapping"))
    retval = get_alphadatamapping ();
  else if (pname.compare ("cdata"))
    retval = get_cdata ();
  else if (pname.compare ("cdatamapping"))
    retval = get_cdatamapping ();
  else if (pname.compare ("erasemode"))
    retval = get_erasemode ();
  else if (pname.compare ("xdata"))
    retval = get_xdata ();
  else if (pname.compare ("ydata"))
    retval = get_ydata ();
  else if (pname.compare ("alim"))
    retval = get_alim ();
  else if (pname.compare ("clim"))
    retval = get_clim ();
  else if (pname.compare ("xlim"))
    retval = get_xlim ();
  else if (pname.compare ("ylim"))
    retval = get_ylim ();
  else if (pname.compare ("aliminclude"))
    retval = get_aliminclude ();
  else if (pname.compare ("climinclude"))
    retval = get_climinclude ();
  else if (pname.compare ("xliminclude"))
    retval = get_xliminclude ();
  else if (pname.compare ("yliminclude"))
    retval = get_yliminclude ();
  else if (pname.compare ("xdatamode"))
    retval = get_xdatamode ();
  else if (pname.compare ("ydatamode"))
    retval = get_ydatamode ();
  else
    retval = base_properties::get (pname);

  return retval;
}

property
image::properties::get_property (const caseless_str& pname_arg)
{
  const std::set<std::string>& pnames = all_property_names ();

  caseless_str pname = validate_property_name ("get", go_name, pnames, pname_arg);

  if (pname.compare ("alphadata"))
    return property (&alphadata, true);
  else if (pname.compare ("alphadatamapping"))
    return property (&alphadatamapping, true);
  else if (pname.compare ("cdata"))
    return property (&cdata, true);
  else if (pname.compare ("cdatamapping"))
    return property (&cdatamapping, true);
  else if (pname.compare ("erasemode"))
    return property (&erasemode, true);
  else if (pname.compare ("xdata"))
    return property (&xdata, true);
  else if (pname.compare ("ydata"))
    return property (&ydata, true);
  else if (pname.compare ("alim"))
    return property (&alim, true);
  else if (pname.compare ("clim"))
    return property (&clim, true);
  else if (pname.compare ("xlim"))
    return property (&xlim, true);
  else if (pname.compare ("ylim"))
    return property (&ylim, true);
  else if (pname.compare ("aliminclude"))
    return property (&aliminclude, true);
  else if (pname.compare ("climinclude"))
    return property (&climinclude, true);
  else if (pname.compare ("xliminclude"))
    return property (&xliminclude, true);
  else if (pname.compare ("yliminclude"))
    return property (&yliminclude, true);
  else if (pname.compare ("xdatamode"))
    return property (&xdatamode, true);
  else if (pname.compare ("ydatamode"))
    return property (&ydatamode, true);
  else
    return base_properties::get_property (pname);
}

property_list::pval_map_type
image::properties::factory_defaults (void)
{
  property_list::pval_map_type m = base_properties::factory_defaults ();

  m["alphadata"] = Matrix (1, 1, 1.0);
  m["alphadatamapping"] = "none";
  m["cdata"] = default_image_cdata ();
  m["cdatamapping"] = "direct";
  m["erasemode"] = "normal";
  m["xdata"] = Matrix ();
  m["ydata"] = Matrix ();
  m["alim"] = Matrix ();
  m["clim"] = Matrix ();
  m["xlim"] = Matrix ();
  m["ylim"] = Matrix ();
  m["aliminclude"] = "on";
  m["climinclude"] = "on";
  m["xliminclude"] = "on";
  m["yliminclude"] = "on";
  m["xdatamode"] = "auto";
  m["ydatamode"] = "auto";

  return m;
}

std::string image::properties::go_name ("image");

std::set<std::string>
image::properties::core_property_names (void)
{
  static std::set<std::string> all_pnames;

  static bool initialized = false;

  if (! initialized)
    {
      all_pnames.insert ("alphadata");
      all_pnames.insert ("alphadatamapping");
      all_pnames.insert ("cdata");
      all_pnames.insert ("cdatamapping");
      all_pnames.insert ("erasemode");
      all_pnames.insert ("xdata");
      all_pnames.insert ("ydata");
      all_pnames.insert ("alim");
      all_pnames.insert ("clim");
      all_pnames.insert ("xlim");
      all_pnames.insert ("ylim");
      all_pnames.insert ("aliminclude");
      all_pnames.insert ("climinclude");
      all_pnames.insert ("xliminclude");
      all_pnames.insert ("yliminclude");
      all_pnames.insert ("xdatamode");
      all_pnames.insert ("ydatamode");

      std::set<std::string> base_pnames = base_properties::core_property_names ();
      all_pnames.insert (base_pnames.begin (), base_pnames.end ());

      initialized = true;
    }

  return all_pnames;
}

bool
image::properties::has_core_property (const caseless_str& pname)
{
  std::set<std::string> pnames = core_property_names ();

  return pnames.find (pname) != pnames.end ();
}

std::set<std::string>
image::properties::readonly_property_names (void)
{
  static std::set<std::string> all_pnames;

  static bool initialized = false;

  if (! initialized)
    {
      all_pnames.insert ("alim");
      all_pnames.insert ("clim");
      all_pnames.insert ("xlim");
      all_pnames.insert ("ylim");

      std::set<std::string> base_pnames = base_properties::readonly_property_names ();
      all_pnames.insert (base_pnames.begin (), base_pnames.end ());

      initialized = true;
    }

  return all_pnames;
}

bool
image::properties::has_readonly_property (const caseless_str& pname)
{
  std::set<std::string> pnames = readonly_property_names ();

  return pnames.find (pname) != pnames.end ();
}

std::set<std::string>
image::properties::all_property_names (void) const
{
  static std::set<std::string> all_pnames = core_property_names ();

  std::set<std::string> retval = all_pnames;
  std::set<std::string> base_props = base_properties::all_property_names ();
  retval.insert (base_props.begin (), base_props.end ());

  return retval;
}

bool
image::properties::has_property (const caseless_str& pname) const
{
  std::set<std::string> pnames = all_property_names ();

  return pnames.find (pname) != pnames.end ();
}

// ******** light ********

light::properties::properties (const graphics_handle& mh, const graphics_handle& p)
  : base_properties (go_name, mh, p),
    color ("color", mh, color_values (1, 1, 1)),
    position ("position", mh, default_light_position ()),
    style ("style", mh, "{infinite}|local")
{
  color.set_id (ID_COLOR);
  position.set_id (ID_POSITION);
  style.set_id (ID_STYLE);
  init ();
}

void
light::properties::set (const caseless_str& pname_arg, const octave_value& val)
{
  const std::set<std::string>& pnames = all_property_names ();

  caseless_str pname = validate_property_name ("set", go_name, pnames, pname_arg);

  if (has_readonly_property (pname))
    {
      error ("set: \"%s\" is read-only", pname.c_str ());
      return;
    }

  if (pname.compare ("color"))
    set_color (val);
  else if (pname.compare ("position"))
    set_position (val);
  else if (pname.compare ("style"))
    set_style (val);
  else
    base_properties::set (pname, val);
}

octave_value
light::properties::get (bool all) const
{
  octave_map m = base_properties::get (all).map_value ();

  m.assign ("color", octave_value (get_color ()));
  m.assign ("position", octave_value (get_position ()));
  m.assign ("style", octave_value (get_style ()));

  return m;
}

octave_value
light::properties::get (const caseless_str& pname_arg) const
{
  octave_value retval;

  const std::set<std::string>& pnames = all_property_names ();

  caseless_str pname = validate_property_name ("get", go_name, pnames, pname_arg);

  if (pname.compare ("color"))
    retval = get_color ();
  else if (pname.compare ("position"))
    retval = get_position ();
  else if (pname.compare ("style"))
    retval = get_style ();
  else
    retval = base_properties::get (pname);

  return retval;
}

property
light::properties::get_property (const caseless_str& pname_arg)
{
  const std::set<std::string>& pnames = all_property_names ();

  caseless_str pname = validate_property_name ("get", go_name, pnames, pname_arg);

  if (pname.compare ("color"))
    return property (&color, true);
  else if (pname.compare ("position"))
    return property (&position, true);
  else if (pname.compare ("style"))
    return property (&style, true);
  else
    return base_properties::get_property (pname);
}

property_list::pval_map_type
light::properties::factory_defaults (void)
{
  property_list::pval_map_type m = base_properties::factory_defaults ();

  m["color"] = color_values (1, 1, 1);
  m["position"] = default_light_position ();
  m["style"] = "infinite";

  return m;
}

std::string light::properties::go_name ("light");

std::set<std::string>
light::properties::core_property_names (void)
{
  static std::set<std::string> all_pnames;

  static bool initialized = false;

  if (! initialized)
    {
      all_pnames.insert ("color");
      all_pnames.insert ("position");
      all_pnames.insert ("style");

      std::set<std::string> base_pnames = base_properties::core_property_names ();
      all_pnames.insert (base_pnames.begin (), base_pnames.end ());

      initialized = true;
    }

  return all_pnames;
}

bool
light::properties::has_core_property (const caseless_str& pname)
{
  std::set<std::string> pnames = core_property_names ();

  return pnames.find (pname) != pnames.end ();
}

std::set<std::string>
light::properties::readonly_property_names (void)
{
  static std::set<std::string> all_pnames;

  static bool initialized = false;

  if (! initialized)
    {

      std::set<std::string> base_pnames = base_properties::readonly_property_names ();
      all_pnames.insert (base_pnames.begin (), base_pnames.end ());

      initialized = true;
    }

  return all_pnames;
}

bool
light::properties::has_readonly_property (const caseless_str& pname)
{
  std::set<std::string> pnames = readonly_property_names ();

  return pnames.find (pname) != pnames.end ();
}

std::set<std::string>
light::properties::all_property_names (void) const
{
  static std::set<std::string> all_pnames = core_property_names ();

  std::set<std::string> retval = all_pnames;
  std::set<std::string> base_props = base_properties::all_property_names ();
  retval.insert (base_props.begin (), base_props.end ());

  return retval;
}

bool
light::properties::has_property (const caseless_str& pname) const
{
  std::set<std::string> pnames = all_property_names ();

  return pnames.find (pname) != pnames.end ();
}

// ******** patch ********

patch::properties::properties (const graphics_handle& mh, const graphics_handle& p)
  : base_properties (go_name, mh, p),
    alphadatamapping ("alphadatamapping", mh, "none|{scaled}|direct"),
    ambientstrength ("ambientstrength", mh, 0.3),
    backfacelighting ("backfacelighting", mh, "unlit|lit|{reverselit}"),
    cdata ("cdata", mh, Matrix ()),
    cdatamapping ("cdatamapping", mh, "{scaled}|direct"),
    diffusestrength ("diffusestrength", mh, 0.6),
    displayname ("displayname", mh, ""),
    edgealpha ("edgealpha", mh, double_radio_property (1.0, radio_values ("flat|interp"))),
    edgecolor ("edgecolor", mh, color_property (color_values (0, 0, 0), radio_values ("none|flat|interp"))),
    edgelighting ("edgelighting", mh, "{none}|flat|gouraud|phong"),
    erasemode ("erasemode", mh, "{normal}|none|xor|background"),
    facealpha ("facealpha", mh, double_radio_property (1.0, radio_values ("flat|interp"))),
    facecolor ("facecolor", mh, color_property (color_values (0, 0, 0), radio_values ("none|flat|interp"))),
    facelighting ("facelighting", mh, "none|{flat}|gouraud|phong"),
    facenormals ("facenormals", mh, Matrix ()),
    facenormalsmode ("facenormalsmode", mh, "{auto}|manual"),
    faces ("faces", mh, default_patch_faces ()),
    facevertexalphadata ("facevertexalphadata", mh, Matrix ()),
    facevertexcdata ("facevertexcdata", mh, Matrix ()),
    interpreter ("interpreter", mh, "{tex}|none|latex"),
    linestyle ("linestyle", mh, "{-}|--|:|-.|none"),
    linewidth ("linewidth", mh, 0.5),
    marker ("marker", mh, "{none}|+|o|*|.|x|s|square|d|diamond|^|v|>|<|p|pentagram|h|hexagram"),
    markeredgecolor ("markeredgecolor", mh, color_property (radio_values ("none|{auto}|flat"), color_values (0, 0, 0))),
    markerfacecolor ("markerfacecolor", mh, color_property (radio_values ("{none}|auto|flat"), color_values (0, 0, 0))),
    markersize ("markersize", mh, 6),
    normalmode ("normalmode", mh, "{auto}|manual"),
    specularcolorreflectance ("specularcolorreflectance", mh, 1.0),
    specularexponent ("specularexponent", mh, 10.0),
    specularstrength ("specularstrength", mh, 0.9),
    vertexnormals ("vertexnormals", mh, Matrix ()),
    vertexnormalsmode ("vertexnormalsmode", mh, "{auto}|manual"),
    vertices ("vertices", mh, default_patch_vertices ()),
    xdata ("xdata", mh, default_patch_xdata ()),
    ydata ("ydata", mh, default_patch_ydata ()),
    zdata ("zdata", mh, Matrix ()),
    alim ("alim", mh, Matrix ()),
    clim ("clim", mh, Matrix ()),
    xlim ("xlim", mh, Matrix ()),
    ylim ("ylim", mh, Matrix ()),
    zlim ("zlim", mh, Matrix ()),
    aliminclude ("aliminclude", mh, "on"),
    climinclude ("climinclude", mh, "on"),
    xliminclude ("xliminclude", mh, "on"),
    yliminclude ("yliminclude", mh, "on"),
    zliminclude ("zliminclude", mh, "on")
{
  alphadatamapping.set_id (ID_ALPHADATAMAPPING);
  ambientstrength.set_id (ID_AMBIENTSTRENGTH);
  backfacelighting.set_id (ID_BACKFACELIGHTING);
  cdata.set_id (ID_CDATA);
  cdatamapping.set_id (ID_CDATAMAPPING);
  diffusestrength.set_id (ID_DIFFUSESTRENGTH);
  displayname.set_id (ID_DISPLAYNAME);
  edgealpha.set_id (ID_EDGEALPHA);
  edgecolor.set_id (ID_EDGECOLOR);
  edgelighting.set_id (ID_EDGELIGHTING);
  erasemode.set_id (ID_ERASEMODE);
  erasemode.set_hidden (true);
  facealpha.set_id (ID_FACEALPHA);
  facecolor.set_id (ID_FACECOLOR);
  facelighting.set_id (ID_FACELIGHTING);
  facenormals.set_id (ID_FACENORMALS);
  facenormalsmode.set_id (ID_FACENORMALSMODE);
  faces.set_id (ID_FACES);
  facevertexalphadata.set_id (ID_FACEVERTEXALPHADATA);
  facevertexcdata.set_id (ID_FACEVERTEXCDATA);
  interpreter.set_id (ID_INTERPRETER);
  interpreter.set_hidden (true);
  linestyle.set_id (ID_LINESTYLE);
  linewidth.set_id (ID_LINEWIDTH);
  marker.set_id (ID_MARKER);
  markeredgecolor.set_id (ID_MARKEREDGECOLOR);
  markerfacecolor.set_id (ID_MARKERFACECOLOR);
  markersize.set_id (ID_MARKERSIZE);
  normalmode.set_id (ID_NORMALMODE);
  normalmode.set_hidden (true);
  specularcolorreflectance.set_id (ID_SPECULARCOLORREFLECTANCE);
  specularexponent.set_id (ID_SPECULAREXPONENT);
  specularstrength.set_id (ID_SPECULARSTRENGTH);
  vertexnormals.set_id (ID_VERTEXNORMALS);
  vertexnormalsmode.set_id (ID_VERTEXNORMALSMODE);
  vertices.set_id (ID_VERTICES);
  xdata.set_id (ID_XDATA);
  ydata.set_id (ID_YDATA);
  zdata.set_id (ID_ZDATA);
  alim.set_id (ID_ALIM);
  alim.set_hidden (true);
  clim.set_id (ID_CLIM);
  clim.set_hidden (true);
  xlim.set_id (ID_XLIM);
  xlim.set_hidden (true);
  ylim.set_id (ID_YLIM);
  ylim.set_hidden (true);
  zlim.set_id (ID_ZLIM);
  zlim.set_hidden (true);
  aliminclude.set_id (ID_ALIMINCLUDE);
  aliminclude.set_hidden (true);
  climinclude.set_id (ID_CLIMINCLUDE);
  climinclude.set_hidden (true);
  xliminclude.set_id (ID_XLIMINCLUDE);
  xliminclude.set_hidden (true);
  yliminclude.set_id (ID_YLIMINCLUDE);
  yliminclude.set_hidden (true);
  zliminclude.set_id (ID_ZLIMINCLUDE);
  zliminclude.set_hidden (true);
  init ();
}

void
patch::properties::set (const caseless_str& pname_arg, const octave_value& val)
{
  const std::set<std::string>& pnames = all_property_names ();

  caseless_str pname = validate_property_name ("set", go_name, pnames, pname_arg);

  if (has_readonly_property (pname))
    {
      error ("set: \"%s\" is read-only", pname.c_str ());
      return;
    }

  if (pname.compare ("alphadatamapping"))
    set_alphadatamapping (val);
  else if (pname.compare ("ambientstrength"))
    set_ambientstrength (val);
  else if (pname.compare ("backfacelighting"))
    set_backfacelighting (val);
  else if (pname.compare ("cdata"))
    set_cdata (val);
  else if (pname.compare ("cdatamapping"))
    set_cdatamapping (val);
  else if (pname.compare ("diffusestrength"))
    set_diffusestrength (val);
  else if (pname.compare ("displayname"))
    set_displayname (val);
  else if (pname.compare ("edgealpha"))
    set_edgealpha (val);
  else if (pname.compare ("edgecolor"))
    set_edgecolor (val);
  else if (pname.compare ("edgelighting"))
    set_edgelighting (val);
  else if (pname.compare ("erasemode"))
    set_erasemode (val);
  else if (pname.compare ("facealpha"))
    set_facealpha (val);
  else if (pname.compare ("facecolor"))
    set_facecolor (val);
  else if (pname.compare ("facelighting"))
    set_facelighting (val);
  else if (pname.compare ("facenormals"))
    set_facenormals (val);
  else if (pname.compare ("facenormalsmode"))
    set_facenormalsmode (val);
  else if (pname.compare ("faces"))
    set_faces (val);
  else if (pname.compare ("facevertexalphadata"))
    set_facevertexalphadata (val);
  else if (pname.compare ("facevertexcdata"))
    set_facevertexcdata (val);
  else if (pname.compare ("interpreter"))
    set_interpreter (val);
  else if (pname.compare ("linestyle"))
    set_linestyle (val);
  else if (pname.compare ("linewidth"))
    set_linewidth (val);
  else if (pname.compare ("marker"))
    set_marker (val);
  else if (pname.compare ("markeredgecolor"))
    set_markeredgecolor (val);
  else if (pname.compare ("markerfacecolor"))
    set_markerfacecolor (val);
  else if (pname.compare ("markersize"))
    set_markersize (val);
  else if (pname.compare ("normalmode"))
    set_normalmode (val);
  else if (pname.compare ("specularcolorreflectance"))
    set_specularcolorreflectance (val);
  else if (pname.compare ("specularexponent"))
    set_specularexponent (val);
  else if (pname.compare ("specularstrength"))
    set_specularstrength (val);
  else if (pname.compare ("vertexnormals"))
    set_vertexnormals (val);
  else if (pname.compare ("vertexnormalsmode"))
    set_vertexnormalsmode (val);
  else if (pname.compare ("vertices"))
    set_vertices (val);
  else if (pname.compare ("xdata"))
    set_xdata (val);
  else if (pname.compare ("ydata"))
    set_ydata (val);
  else if (pname.compare ("zdata"))
    set_zdata (val);
  else if (pname.compare ("aliminclude"))
    set_aliminclude (val);
  else if (pname.compare ("climinclude"))
    set_climinclude (val);
  else if (pname.compare ("xliminclude"))
    set_xliminclude (val);
  else if (pname.compare ("yliminclude"))
    set_yliminclude (val);
  else if (pname.compare ("zliminclude"))
    set_zliminclude (val);
  else
    base_properties::set (pname, val);
}

octave_value
patch::properties::get (bool all) const
{
  octave_map m = base_properties::get (all).map_value ();

  m.assign ("alphadatamapping", octave_value (get_alphadatamapping ()));
  m.assign ("ambientstrength", octave_value (get_ambientstrength ()));
  m.assign ("backfacelighting", octave_value (get_backfacelighting ()));
  m.assign ("cdata", octave_value (get_cdata ()));
  m.assign ("cdatamapping", octave_value (get_cdatamapping ()));
  m.assign ("diffusestrength", octave_value (get_diffusestrength ()));
  m.assign ("displayname", octave_value (get_displayname ()));
  m.assign ("edgealpha", octave_value (get_edgealpha ()));
  m.assign ("edgecolor", octave_value (get_edgecolor ()));
  m.assign ("edgelighting", octave_value (get_edgelighting ()));
  if (all)
    m.assign ("erasemode", octave_value (get_erasemode ()));
  m.assign ("facealpha", octave_value (get_facealpha ()));
  m.assign ("facecolor", octave_value (get_facecolor ()));
  m.assign ("facelighting", octave_value (get_facelighting ()));
  m.assign ("facenormals", octave_value (get_facenormals ()));
  m.assign ("facenormalsmode", octave_value (get_facenormalsmode ()));
  m.assign ("faces", octave_value (get_faces ()));
  m.assign ("facevertexalphadata", octave_value (get_facevertexalphadata ()));
  m.assign ("facevertexcdata", octave_value (get_facevertexcdata ()));
  if (all)
    m.assign ("interpreter", octave_value (get_interpreter ()));
  m.assign ("linestyle", octave_value (get_linestyle ()));
  m.assign ("linewidth", octave_value (get_linewidth ()));
  m.assign ("marker", octave_value (get_marker ()));
  m.assign ("markeredgecolor", octave_value (get_markeredgecolor ()));
  m.assign ("markerfacecolor", octave_value (get_markerfacecolor ()));
  m.assign ("markersize", octave_value (get_markersize ()));
  if (all)
    m.assign ("normalmode", octave_value (get_normalmode ()));
  m.assign ("specularcolorreflectance", octave_value (get_specularcolorreflectance ()));
  m.assign ("specularexponent", octave_value (get_specularexponent ()));
  m.assign ("specularstrength", octave_value (get_specularstrength ()));
  m.assign ("vertexnormals", octave_value (get_vertexnormals ()));
  m.assign ("vertexnormalsmode", octave_value (get_vertexnormalsmode ()));
  m.assign ("vertices", octave_value (get_vertices ()));
  m.assign ("xdata", octave_value (get_xdata ()));
  m.assign ("ydata", octave_value (get_ydata ()));
  m.assign ("zdata", octave_value (get_zdata ()));
  if (all)
    m.assign ("alim", octave_value (get_alim ()));
  if (all)
    m.assign ("clim", octave_value (get_clim ()));
  if (all)
    m.assign ("xlim", octave_value (get_xlim ()));
  if (all)
    m.assign ("ylim", octave_value (get_ylim ()));
  if (all)
    m.assign ("zlim", octave_value (get_zlim ()));
  if (all)
    m.assign ("aliminclude", octave_value (get_aliminclude ()));
  if (all)
    m.assign ("climinclude", octave_value (get_climinclude ()));
  if (all)
    m.assign ("xliminclude", octave_value (get_xliminclude ()));
  if (all)
    m.assign ("yliminclude", octave_value (get_yliminclude ()));
  if (all)
    m.assign ("zliminclude", octave_value (get_zliminclude ()));

  return m;
}

octave_value
patch::properties::get (const caseless_str& pname_arg) const
{
  octave_value retval;

  const std::set<std::string>& pnames = all_property_names ();

  caseless_str pname = validate_property_name ("get", go_name, pnames, pname_arg);

  if (pname.compare ("alphadatamapping"))
    retval = get_alphadatamapping ();
  else if (pname.compare ("ambientstrength"))
    retval = get_ambientstrength ();
  else if (pname.compare ("backfacelighting"))
    retval = get_backfacelighting ();
  else if (pname.compare ("cdata"))
    retval = get_cdata ();
  else if (pname.compare ("cdatamapping"))
    retval = get_cdatamapping ();
  else if (pname.compare ("diffusestrength"))
    retval = get_diffusestrength ();
  else if (pname.compare ("displayname"))
    retval = get_displayname ();
  else if (pname.compare ("edgealpha"))
    retval = get_edgealpha ();
  else if (pname.compare ("edgecolor"))
    retval = get_edgecolor ();
  else if (pname.compare ("edgelighting"))
    retval = get_edgelighting ();
  else if (pname.compare ("erasemode"))
    retval = get_erasemode ();
  else if (pname.compare ("facealpha"))
    retval = get_facealpha ();
  else if (pname.compare ("facecolor"))
    retval = get_facecolor ();
  else if (pname.compare ("facelighting"))
    retval = get_facelighting ();
  else if (pname.compare ("facenormals"))
    retval = get_facenormals ();
  else if (pname.compare ("facenormalsmode"))
    retval = get_facenormalsmode ();
  else if (pname.compare ("faces"))
    retval = get_faces ();
  else if (pname.compare ("facevertexalphadata"))
    retval = get_facevertexalphadata ();
  else if (pname.compare ("facevertexcdata"))
    retval = get_facevertexcdata ();
  else if (pname.compare ("interpreter"))
    retval = get_interpreter ();
  else if (pname.compare ("linestyle"))
    retval = get_linestyle ();
  else if (pname.compare ("linewidth"))
    retval = get_linewidth ();
  else if (pname.compare ("marker"))
    retval = get_marker ();
  else if (pname.compare ("markeredgecolor"))
    retval = get_markeredgecolor ();
  else if (pname.compare ("markerfacecolor"))
    retval = get_markerfacecolor ();
  else if (pname.compare ("markersize"))
    retval = get_markersize ();
  else if (pname.compare ("normalmode"))
    retval = get_normalmode ();
  else if (pname.compare ("specularcolorreflectance"))
    retval = get_specularcolorreflectance ();
  else if (pname.compare ("specularexponent"))
    retval = get_specularexponent ();
  else if (pname.compare ("specularstrength"))
    retval = get_specularstrength ();
  else if (pname.compare ("vertexnormals"))
    retval = get_vertexnormals ();
  else if (pname.compare ("vertexnormalsmode"))
    retval = get_vertexnormalsmode ();
  else if (pname.compare ("vertices"))
    retval = get_vertices ();
  else if (pname.compare ("xdata"))
    retval = get_xdata ();
  else if (pname.compare ("ydata"))
    retval = get_ydata ();
  else if (pname.compare ("zdata"))
    retval = get_zdata ();
  else if (pname.compare ("alim"))
    retval = get_alim ();
  else if (pname.compare ("clim"))
    retval = get_clim ();
  else if (pname.compare ("xlim"))
    retval = get_xlim ();
  else if (pname.compare ("ylim"))
    retval = get_ylim ();
  else if (pname.compare ("zlim"))
    retval = get_zlim ();
  else if (pname.compare ("aliminclude"))
    retval = get_aliminclude ();
  else if (pname.compare ("climinclude"))
    retval = get_climinclude ();
  else if (pname.compare ("xliminclude"))
    retval = get_xliminclude ();
  else if (pname.compare ("yliminclude"))
    retval = get_yliminclude ();
  else if (pname.compare ("zliminclude"))
    retval = get_zliminclude ();
  else
    retval = base_properties::get (pname);

  return retval;
}

property
patch::properties::get_property (const caseless_str& pname_arg)
{
  const std::set<std::string>& pnames = all_property_names ();

  caseless_str pname = validate_property_name ("get", go_name, pnames, pname_arg);

  if (pname.compare ("alphadatamapping"))
    return property (&alphadatamapping, true);
  else if (pname.compare ("ambientstrength"))
    return property (&ambientstrength, true);
  else if (pname.compare ("backfacelighting"))
    return property (&backfacelighting, true);
  else if (pname.compare ("cdata"))
    return property (&cdata, true);
  else if (pname.compare ("cdatamapping"))
    return property (&cdatamapping, true);
  else if (pname.compare ("diffusestrength"))
    return property (&diffusestrength, true);
  else if (pname.compare ("displayname"))
    return property (&displayname, true);
  else if (pname.compare ("edgealpha"))
    return property (&edgealpha, true);
  else if (pname.compare ("edgecolor"))
    return property (&edgecolor, true);
  else if (pname.compare ("edgelighting"))
    return property (&edgelighting, true);
  else if (pname.compare ("erasemode"))
    return property (&erasemode, true);
  else if (pname.compare ("facealpha"))
    return property (&facealpha, true);
  else if (pname.compare ("facecolor"))
    return property (&facecolor, true);
  else if (pname.compare ("facelighting"))
    return property (&facelighting, true);
  else if (pname.compare ("facenormals"))
    return property (&facenormals, true);
  else if (pname.compare ("facenormalsmode"))
    return property (&facenormalsmode, true);
  else if (pname.compare ("faces"))
    return property (&faces, true);
  else if (pname.compare ("facevertexalphadata"))
    return property (&facevertexalphadata, true);
  else if (pname.compare ("facevertexcdata"))
    return property (&facevertexcdata, true);
  else if (pname.compare ("interpreter"))
    return property (&interpreter, true);
  else if (pname.compare ("linestyle"))
    return property (&linestyle, true);
  else if (pname.compare ("linewidth"))
    return property (&linewidth, true);
  else if (pname.compare ("marker"))
    return property (&marker, true);
  else if (pname.compare ("markeredgecolor"))
    return property (&markeredgecolor, true);
  else if (pname.compare ("markerfacecolor"))
    return property (&markerfacecolor, true);
  else if (pname.compare ("markersize"))
    return property (&markersize, true);
  else if (pname.compare ("normalmode"))
    return property (&normalmode, true);
  else if (pname.compare ("specularcolorreflectance"))
    return property (&specularcolorreflectance, true);
  else if (pname.compare ("specularexponent"))
    return property (&specularexponent, true);
  else if (pname.compare ("specularstrength"))
    return property (&specularstrength, true);
  else if (pname.compare ("vertexnormals"))
    return property (&vertexnormals, true);
  else if (pname.compare ("vertexnormalsmode"))
    return property (&vertexnormalsmode, true);
  else if (pname.compare ("vertices"))
    return property (&vertices, true);
  else if (pname.compare ("xdata"))
    return property (&xdata, true);
  else if (pname.compare ("ydata"))
    return property (&ydata, true);
  else if (pname.compare ("zdata"))
    return property (&zdata, true);
  else if (pname.compare ("alim"))
    return property (&alim, true);
  else if (pname.compare ("clim"))
    return property (&clim, true);
  else if (pname.compare ("xlim"))
    return property (&xlim, true);
  else if (pname.compare ("ylim"))
    return property (&ylim, true);
  else if (pname.compare ("zlim"))
    return property (&zlim, true);
  else if (pname.compare ("aliminclude"))
    return property (&aliminclude, true);
  else if (pname.compare ("climinclude"))
    return property (&climinclude, true);
  else if (pname.compare ("xliminclude"))
    return property (&xliminclude, true);
  else if (pname.compare ("yliminclude"))
    return property (&yliminclude, true);
  else if (pname.compare ("zliminclude"))
    return property (&zliminclude, true);
  else
    return base_properties::get_property (pname);
}

property_list::pval_map_type
patch::properties::factory_defaults (void)
{
  property_list::pval_map_type m = base_properties::factory_defaults ();

  m["alphadatamapping"] = "scaled";
  m["ambientstrength"] = 0.3;
  m["backfacelighting"] = "reverselit";
  m["cdata"] = Matrix ();
  m["cdatamapping"] = "scaled";
  m["diffusestrength"] = 0.6;
  m["displayname"] = "";
  m["edgealpha"] = double_radio_property (1.0, radio_values ("flat|interp"));
  m["edgecolor"] = color_property (color_values (0, 0, 0), radio_values ("none|flat|interp"));
  m["edgelighting"] = "none";
  m["erasemode"] = "normal";
  m["facealpha"] = double_radio_property (1.0, radio_values ("flat|interp"));
  m["facecolor"] = color_property (color_values (0, 0, 0), radio_values ("none|flat|interp"));
  m["facelighting"] = "flat";
  m["facenormals"] = Matrix ();
  m["facenormalsmode"] = "auto";
  m["faces"] = default_patch_faces ();
  m["facevertexalphadata"] = Matrix ();
  m["facevertexcdata"] = Matrix ();
  m["interpreter"] = "tex";
  m["linestyle"] = "-";
  m["linewidth"] = 0.5;
  m["marker"] = "none";
  m["markeredgecolor"] = color_property (radio_values ("none|{auto}|flat"), color_values (0, 0, 0));
  m["markerfacecolor"] = color_property (radio_values ("{none}|auto|flat"), color_values (0, 0, 0));
  m["markersize"] = 6;
  m["normalmode"] = "auto";
  m["specularcolorreflectance"] = 1.0;
  m["specularexponent"] = 10.0;
  m["specularstrength"] = 0.9;
  m["vertexnormals"] = Matrix ();
  m["vertexnormalsmode"] = "auto";
  m["vertices"] = default_patch_vertices ();
  m["xdata"] = default_patch_xdata ();
  m["ydata"] = default_patch_ydata ();
  m["zdata"] = Matrix ();
  m["alim"] = Matrix ();
  m["clim"] = Matrix ();
  m["xlim"] = Matrix ();
  m["ylim"] = Matrix ();
  m["zlim"] = Matrix ();
  m["aliminclude"] = "on";
  m["climinclude"] = "on";
  m["xliminclude"] = "on";
  m["yliminclude"] = "on";
  m["zliminclude"] = "on";

  return m;
}

std::string patch::properties::go_name ("patch");

std::set<std::string>
patch::properties::core_property_names (void)
{
  static std::set<std::string> all_pnames;

  static bool initialized = false;

  if (! initialized)
    {
      all_pnames.insert ("alphadatamapping");
      all_pnames.insert ("ambientstrength");
      all_pnames.insert ("backfacelighting");
      all_pnames.insert ("cdata");
      all_pnames.insert ("cdatamapping");
      all_pnames.insert ("diffusestrength");
      all_pnames.insert ("displayname");
      all_pnames.insert ("edgealpha");
      all_pnames.insert ("edgecolor");
      all_pnames.insert ("edgelighting");
      all_pnames.insert ("erasemode");
      all_pnames.insert ("facealpha");
      all_pnames.insert ("facecolor");
      all_pnames.insert ("facelighting");
      all_pnames.insert ("facenormals");
      all_pnames.insert ("facenormalsmode");
      all_pnames.insert ("faces");
      all_pnames.insert ("facevertexalphadata");
      all_pnames.insert ("facevertexcdata");
      all_pnames.insert ("interpreter");
      all_pnames.insert ("linestyle");
      all_pnames.insert ("linewidth");
      all_pnames.insert ("marker");
      all_pnames.insert ("markeredgecolor");
      all_pnames.insert ("markerfacecolor");
      all_pnames.insert ("markersize");
      all_pnames.insert ("normalmode");
      all_pnames.insert ("specularcolorreflectance");
      all_pnames.insert ("specularexponent");
      all_pnames.insert ("specularstrength");
      all_pnames.insert ("vertexnormals");
      all_pnames.insert ("vertexnormalsmode");
      all_pnames.insert ("vertices");
      all_pnames.insert ("xdata");
      all_pnames.insert ("ydata");
      all_pnames.insert ("zdata");
      all_pnames.insert ("alim");
      all_pnames.insert ("clim");
      all_pnames.insert ("xlim");
      all_pnames.insert ("ylim");
      all_pnames.insert ("zlim");
      all_pnames.insert ("aliminclude");
      all_pnames.insert ("climinclude");
      all_pnames.insert ("xliminclude");
      all_pnames.insert ("yliminclude");
      all_pnames.insert ("zliminclude");

      std::set<std::string> base_pnames = base_properties::core_property_names ();
      all_pnames.insert (base_pnames.begin (), base_pnames.end ());

      initialized = true;
    }

  return all_pnames;
}

bool
patch::properties::has_core_property (const caseless_str& pname)
{
  std::set<std::string> pnames = core_property_names ();

  return pnames.find (pname) != pnames.end ();
}

std::set<std::string>
patch::properties::readonly_property_names (void)
{
  static std::set<std::string> all_pnames;

  static bool initialized = false;

  if (! initialized)
    {
      all_pnames.insert ("alim");
      all_pnames.insert ("clim");
      all_pnames.insert ("xlim");
      all_pnames.insert ("ylim");
      all_pnames.insert ("zlim");

      std::set<std::string> base_pnames = base_properties::readonly_property_names ();
      all_pnames.insert (base_pnames.begin (), base_pnames.end ());

      initialized = true;
    }

  return all_pnames;
}

bool
patch::properties::has_readonly_property (const caseless_str& pname)
{
  std::set<std::string> pnames = readonly_property_names ();

  return pnames.find (pname) != pnames.end ();
}

std::set<std::string>
patch::properties::all_property_names (void) const
{
  static std::set<std::string> all_pnames = core_property_names ();

  std::set<std::string> retval = all_pnames;
  std::set<std::string> base_props = base_properties::all_property_names ();
  retval.insert (base_props.begin (), base_props.end ());

  return retval;
}

bool
patch::properties::has_property (const caseless_str& pname) const
{
  std::set<std::string> pnames = all_property_names ();

  return pnames.find (pname) != pnames.end ();
}

// ******** surface ********

surface::properties::properties (const graphics_handle& mh, const graphics_handle& p)
  : base_properties (go_name, mh, p),
    alphadata ("alphadata", mh, Matrix (1, 1, 1.0)),
    alphadatamapping ("alphadatamapping", mh, "none|direct|{scaled}"),
    ambientstrength ("ambientstrength", mh, 0.3),
    backfacelighting ("backfacelighting", mh, "unlit|lit|{reverselit}"),
    cdata ("cdata", mh, default_surface_cdata ()),
    cdatamapping ("cdatamapping", mh, "{scaled}|direct"),
    cdatasource ("cdatasource", mh, ""),
    diffusestrength ("diffusestrength", mh, 0.6),
    displayname ("displayname", mh, ""),
    edgealpha ("edgealpha", mh, double_radio_property (1.0, radio_values ("flat|interp"))),
    edgecolor ("edgecolor", mh, color_property (color_values (0, 0, 0), radio_values ("none|flat|interp"))),
    edgelighting ("edgelighting", mh, "{none}|flat|gouraud|phong"),
    erasemode ("erasemode", mh, "{normal}|none|xor|background"),
    facealpha ("facealpha", mh, double_radio_property (1.0, radio_values ("flat|interp|texturemap"))),
    facecolor ("facecolor", mh, color_property (radio_values ("none|{flat}|interp|texturemap"), color_values (0, 0, 0))),
    facelighting ("facelighting", mh, "none|{flat}|gouraud|phong"),
    facenormals ("facenormals", mh, Matrix ()),
    facenormalsmode ("facenormalsmode", mh, "{auto}|manual"),
    interpreter ("interpreter", mh, "{tex}|none|latex"),
    linestyle ("linestyle", mh, "{-}|--|:|-.|none"),
    linewidth ("linewidth", mh, 0.5),
    marker ("marker", mh, "{none}|+|o|*|.|x|s|square|d|diamond|^|v|>|<|p|pentagram|h|hexagram"),
    markeredgecolor ("markeredgecolor", mh, color_property (radio_values ("none|{auto}|flat"), color_values (0, 0, 0))),
    markerfacecolor ("markerfacecolor", mh, color_property (radio_values ("{none}|auto|flat"), color_values (0, 0, 0))),
    markersize ("markersize", mh, 6),
    meshstyle ("meshstyle", mh, "{both}|row|column"),
    normalmode ("normalmode", mh, "{auto}|manual"),
    specularcolorreflectance ("specularcolorreflectance", mh, 1),
    specularexponent ("specularexponent", mh, 10),
    specularstrength ("specularstrength", mh, 0.9),
    vertexnormals ("vertexnormals", mh, Matrix ()),
    vertexnormalsmode ("vertexnormalsmode", mh, "{auto}|manual"),
    xdata ("xdata", mh, default_surface_xdata ()),
    xdatasource ("xdatasource", mh, ""),
    ydata ("ydata", mh, default_surface_ydata ()),
    ydatasource ("ydatasource", mh, ""),
    zdata ("zdata", mh, default_surface_zdata ()),
    zdatasource ("zdatasource", mh, ""),
    alim ("alim", mh, Matrix ()),
    clim ("clim", mh, Matrix ()),
    xlim ("xlim", mh, Matrix ()),
    ylim ("ylim", mh, Matrix ()),
    zlim ("zlim", mh, Matrix ()),
    aliminclude ("aliminclude", mh, "on"),
    climinclude ("climinclude", mh, "on"),
    xliminclude ("xliminclude", mh, "on"),
    yliminclude ("yliminclude", mh, "on"),
    zliminclude ("zliminclude", mh, "on")
{
  alphadata.set_id (ID_ALPHADATA);
  alphadatamapping.set_id (ID_ALPHADATAMAPPING);
  ambientstrength.set_id (ID_AMBIENTSTRENGTH);
  backfacelighting.set_id (ID_BACKFACELIGHTING);
  cdata.set_id (ID_CDATA);
  cdatamapping.set_id (ID_CDATAMAPPING);
  cdatasource.set_id (ID_CDATASOURCE);
  diffusestrength.set_id (ID_DIFFUSESTRENGTH);
  displayname.set_id (ID_DISPLAYNAME);
  edgealpha.set_id (ID_EDGEALPHA);
  edgecolor.set_id (ID_EDGECOLOR);
  edgelighting.set_id (ID_EDGELIGHTING);
  erasemode.set_id (ID_ERASEMODE);
  erasemode.set_hidden (true);
  facealpha.set_id (ID_FACEALPHA);
  facecolor.set_id (ID_FACECOLOR);
  facelighting.set_id (ID_FACELIGHTING);
  facenormals.set_id (ID_FACENORMALS);
  facenormalsmode.set_id (ID_FACENORMALSMODE);
  interpreter.set_id (ID_INTERPRETER);
  interpreter.set_hidden (true);
  linestyle.set_id (ID_LINESTYLE);
  linewidth.set_id (ID_LINEWIDTH);
  marker.set_id (ID_MARKER);
  markeredgecolor.set_id (ID_MARKEREDGECOLOR);
  markerfacecolor.set_id (ID_MARKERFACECOLOR);
  markersize.set_id (ID_MARKERSIZE);
  meshstyle.set_id (ID_MESHSTYLE);
  normalmode.set_id (ID_NORMALMODE);
  normalmode.set_hidden (true);
  specularcolorreflectance.set_id (ID_SPECULARCOLORREFLECTANCE);
  specularexponent.set_id (ID_SPECULAREXPONENT);
  specularstrength.set_id (ID_SPECULARSTRENGTH);
  vertexnormals.set_id (ID_VERTEXNORMALS);
  vertexnormalsmode.set_id (ID_VERTEXNORMALSMODE);
  xdata.set_id (ID_XDATA);
  xdatasource.set_id (ID_XDATASOURCE);
  ydata.set_id (ID_YDATA);
  ydatasource.set_id (ID_YDATASOURCE);
  zdata.set_id (ID_ZDATA);
  zdatasource.set_id (ID_ZDATASOURCE);
  alim.set_id (ID_ALIM);
  alim.set_hidden (true);
  clim.set_id (ID_CLIM);
  clim.set_hidden (true);
  xlim.set_id (ID_XLIM);
  xlim.set_hidden (true);
  ylim.set_id (ID_YLIM);
  ylim.set_hidden (true);
  zlim.set_id (ID_ZLIM);
  zlim.set_hidden (true);
  aliminclude.set_id (ID_ALIMINCLUDE);
  aliminclude.set_hidden (true);
  climinclude.set_id (ID_CLIMINCLUDE);
  climinclude.set_hidden (true);
  xliminclude.set_id (ID_XLIMINCLUDE);
  xliminclude.set_hidden (true);
  yliminclude.set_id (ID_YLIMINCLUDE);
  yliminclude.set_hidden (true);
  zliminclude.set_id (ID_ZLIMINCLUDE);
  zliminclude.set_hidden (true);
  init ();
}

void
surface::properties::set (const caseless_str& pname_arg, const octave_value& val)
{
  const std::set<std::string>& pnames = all_property_names ();

  caseless_str pname = validate_property_name ("set", go_name, pnames, pname_arg);

  if (has_readonly_property (pname))
    {
      error ("set: \"%s\" is read-only", pname.c_str ());
      return;
    }

  if (pname.compare ("alphadata"))
    set_alphadata (val);
  else if (pname.compare ("alphadatamapping"))
    set_alphadatamapping (val);
  else if (pname.compare ("ambientstrength"))
    set_ambientstrength (val);
  else if (pname.compare ("backfacelighting"))
    set_backfacelighting (val);
  else if (pname.compare ("cdata"))
    set_cdata (val);
  else if (pname.compare ("cdatamapping"))
    set_cdatamapping (val);
  else if (pname.compare ("cdatasource"))
    set_cdatasource (val);
  else if (pname.compare ("diffusestrength"))
    set_diffusestrength (val);
  else if (pname.compare ("displayname"))
    set_displayname (val);
  else if (pname.compare ("edgealpha"))
    set_edgealpha (val);
  else if (pname.compare ("edgecolor"))
    set_edgecolor (val);
  else if (pname.compare ("edgelighting"))
    set_edgelighting (val);
  else if (pname.compare ("erasemode"))
    set_erasemode (val);
  else if (pname.compare ("facealpha"))
    set_facealpha (val);
  else if (pname.compare ("facecolor"))
    set_facecolor (val);
  else if (pname.compare ("facelighting"))
    set_facelighting (val);
  else if (pname.compare ("facenormals"))
    set_facenormals (val);
  else if (pname.compare ("facenormalsmode"))
    set_facenormalsmode (val);
  else if (pname.compare ("interpreter"))
    set_interpreter (val);
  else if (pname.compare ("linestyle"))
    set_linestyle (val);
  else if (pname.compare ("linewidth"))
    set_linewidth (val);
  else if (pname.compare ("marker"))
    set_marker (val);
  else if (pname.compare ("markeredgecolor"))
    set_markeredgecolor (val);
  else if (pname.compare ("markerfacecolor"))
    set_markerfacecolor (val);
  else if (pname.compare ("markersize"))
    set_markersize (val);
  else if (pname.compare ("meshstyle"))
    set_meshstyle (val);
  else if (pname.compare ("normalmode"))
    set_normalmode (val);
  else if (pname.compare ("specularcolorreflectance"))
    set_specularcolorreflectance (val);
  else if (pname.compare ("specularexponent"))
    set_specularexponent (val);
  else if (pname.compare ("specularstrength"))
    set_specularstrength (val);
  else if (pname.compare ("vertexnormals"))
    set_vertexnormals (val);
  else if (pname.compare ("vertexnormalsmode"))
    set_vertexnormalsmode (val);
  else if (pname.compare ("xdata"))
    set_xdata (val);
  else if (pname.compare ("xdatasource"))
    set_xdatasource (val);
  else if (pname.compare ("ydata"))
    set_ydata (val);
  else if (pname.compare ("ydatasource"))
    set_ydatasource (val);
  else if (pname.compare ("zdata"))
    set_zdata (val);
  else if (pname.compare ("zdatasource"))
    set_zdatasource (val);
  else if (pname.compare ("aliminclude"))
    set_aliminclude (val);
  else if (pname.compare ("climinclude"))
    set_climinclude (val);
  else if (pname.compare ("xliminclude"))
    set_xliminclude (val);
  else if (pname.compare ("yliminclude"))
    set_yliminclude (val);
  else if (pname.compare ("zliminclude"))
    set_zliminclude (val);
  else
    base_properties::set (pname, val);
}

octave_value
surface::properties::get (bool all) const
{
  octave_map m = base_properties::get (all).map_value ();

  m.assign ("alphadata", octave_value (get_alphadata ()));
  m.assign ("alphadatamapping", octave_value (get_alphadatamapping ()));
  m.assign ("ambientstrength", octave_value (get_ambientstrength ()));
  m.assign ("backfacelighting", octave_value (get_backfacelighting ()));
  m.assign ("cdata", octave_value (get_cdata ()));
  m.assign ("cdatamapping", octave_value (get_cdatamapping ()));
  m.assign ("cdatasource", octave_value (get_cdatasource ()));
  m.assign ("diffusestrength", octave_value (get_diffusestrength ()));
  m.assign ("displayname", octave_value (get_displayname ()));
  m.assign ("edgealpha", octave_value (get_edgealpha ()));
  m.assign ("edgecolor", octave_value (get_edgecolor ()));
  m.assign ("edgelighting", octave_value (get_edgelighting ()));
  if (all)
    m.assign ("erasemode", octave_value (get_erasemode ()));
  m.assign ("facealpha", octave_value (get_facealpha ()));
  m.assign ("facecolor", octave_value (get_facecolor ()));
  m.assign ("facelighting", octave_value (get_facelighting ()));
  m.assign ("facenormals", octave_value (get_facenormals ()));
  m.assign ("facenormalsmode", octave_value (get_facenormalsmode ()));
  if (all)
    m.assign ("interpreter", octave_value (get_interpreter ()));
  m.assign ("linestyle", octave_value (get_linestyle ()));
  m.assign ("linewidth", octave_value (get_linewidth ()));
  m.assign ("marker", octave_value (get_marker ()));
  m.assign ("markeredgecolor", octave_value (get_markeredgecolor ()));
  m.assign ("markerfacecolor", octave_value (get_markerfacecolor ()));
  m.assign ("markersize", octave_value (get_markersize ()));
  m.assign ("meshstyle", octave_value (get_meshstyle ()));
  if (all)
    m.assign ("normalmode", octave_value (get_normalmode ()));
  m.assign ("specularcolorreflectance", octave_value (get_specularcolorreflectance ()));
  m.assign ("specularexponent", octave_value (get_specularexponent ()));
  m.assign ("specularstrength", octave_value (get_specularstrength ()));
  m.assign ("vertexnormals", octave_value (get_vertexnormals ()));
  m.assign ("vertexnormalsmode", octave_value (get_vertexnormalsmode ()));
  m.assign ("xdata", octave_value (get_xdata ()));
  m.assign ("xdatasource", octave_value (get_xdatasource ()));
  m.assign ("ydata", octave_value (get_ydata ()));
  m.assign ("ydatasource", octave_value (get_ydatasource ()));
  m.assign ("zdata", octave_value (get_zdata ()));
  m.assign ("zdatasource", octave_value (get_zdatasource ()));
  if (all)
    m.assign ("alim", octave_value (get_alim ()));
  if (all)
    m.assign ("clim", octave_value (get_clim ()));
  if (all)
    m.assign ("xlim", octave_value (get_xlim ()));
  if (all)
    m.assign ("ylim", octave_value (get_ylim ()));
  if (all)
    m.assign ("zlim", octave_value (get_zlim ()));
  if (all)
    m.assign ("aliminclude", octave_value (get_aliminclude ()));
  if (all)
    m.assign ("climinclude", octave_value (get_climinclude ()));
  if (all)
    m.assign ("xliminclude", octave_value (get_xliminclude ()));
  if (all)
    m.assign ("yliminclude", octave_value (get_yliminclude ()));
  if (all)
    m.assign ("zliminclude", octave_value (get_zliminclude ()));

  return m;
}

octave_value
surface::properties::get (const caseless_str& pname_arg) const
{
  octave_value retval;

  const std::set<std::string>& pnames = all_property_names ();

  caseless_str pname = validate_property_name ("get", go_name, pnames, pname_arg);

  if (pname.compare ("alphadata"))
    retval = get_alphadata ();
  else if (pname.compare ("alphadatamapping"))
    retval = get_alphadatamapping ();
  else if (pname.compare ("ambientstrength"))
    retval = get_ambientstrength ();
  else if (pname.compare ("backfacelighting"))
    retval = get_backfacelighting ();
  else if (pname.compare ("cdata"))
    retval = get_cdata ();
  else if (pname.compare ("cdatamapping"))
    retval = get_cdatamapping ();
  else if (pname.compare ("cdatasource"))
    retval = get_cdatasource ();
  else if (pname.compare ("diffusestrength"))
    retval = get_diffusestrength ();
  else if (pname.compare ("displayname"))
    retval = get_displayname ();
  else if (pname.compare ("edgealpha"))
    retval = get_edgealpha ();
  else if (pname.compare ("edgecolor"))
    retval = get_edgecolor ();
  else if (pname.compare ("edgelighting"))
    retval = get_edgelighting ();
  else if (pname.compare ("erasemode"))
    retval = get_erasemode ();
  else if (pname.compare ("facealpha"))
    retval = get_facealpha ();
  else if (pname.compare ("facecolor"))
    retval = get_facecolor ();
  else if (pname.compare ("facelighting"))
    retval = get_facelighting ();
  else if (pname.compare ("facenormals"))
    retval = get_facenormals ();
  else if (pname.compare ("facenormalsmode"))
    retval = get_facenormalsmode ();
  else if (pname.compare ("interpreter"))
    retval = get_interpreter ();
  else if (pname.compare ("linestyle"))
    retval = get_linestyle ();
  else if (pname.compare ("linewidth"))
    retval = get_linewidth ();
  else if (pname.compare ("marker"))
    retval = get_marker ();
  else if (pname.compare ("markeredgecolor"))
    retval = get_markeredgecolor ();
  else if (pname.compare ("markerfacecolor"))
    retval = get_markerfacecolor ();
  else if (pname.compare ("markersize"))
    retval = get_markersize ();
  else if (pname.compare ("meshstyle"))
    retval = get_meshstyle ();
  else if (pname.compare ("normalmode"))
    retval = get_normalmode ();
  else if (pname.compare ("specularcolorreflectance"))
    retval = get_specularcolorreflectance ();
  else if (pname.compare ("specularexponent"))
    retval = get_specularexponent ();
  else if (pname.compare ("specularstrength"))
    retval = get_specularstrength ();
  else if (pname.compare ("vertexnormals"))
    retval = get_vertexnormals ();
  else if (pname.compare ("vertexnormalsmode"))
    retval = get_vertexnormalsmode ();
  else if (pname.compare ("xdata"))
    retval = get_xdata ();
  else if (pname.compare ("xdatasource"))
    retval = get_xdatasource ();
  else if (pname.compare ("ydata"))
    retval = get_ydata ();
  else if (pname.compare ("ydatasource"))
    retval = get_ydatasource ();
  else if (pname.compare ("zdata"))
    retval = get_zdata ();
  else if (pname.compare ("zdatasource"))
    retval = get_zdatasource ();
  else if (pname.compare ("alim"))
    retval = get_alim ();
  else if (pname.compare ("clim"))
    retval = get_clim ();
  else if (pname.compare ("xlim"))
    retval = get_xlim ();
  else if (pname.compare ("ylim"))
    retval = get_ylim ();
  else if (pname.compare ("zlim"))
    retval = get_zlim ();
  else if (pname.compare ("aliminclude"))
    retval = get_aliminclude ();
  else if (pname.compare ("climinclude"))
    retval = get_climinclude ();
  else if (pname.compare ("xliminclude"))
    retval = get_xliminclude ();
  else if (pname.compare ("yliminclude"))
    retval = get_yliminclude ();
  else if (pname.compare ("zliminclude"))
    retval = get_zliminclude ();
  else
    retval = base_properties::get (pname);

  return retval;
}

property
surface::properties::get_property (const caseless_str& pname_arg)
{
  const std::set<std::string>& pnames = all_property_names ();

  caseless_str pname = validate_property_name ("get", go_name, pnames, pname_arg);

  if (pname.compare ("alphadata"))
    return property (&alphadata, true);
  else if (pname.compare ("alphadatamapping"))
    return property (&alphadatamapping, true);
  else if (pname.compare ("ambientstrength"))
    return property (&ambientstrength, true);
  else if (pname.compare ("backfacelighting"))
    return property (&backfacelighting, true);
  else if (pname.compare ("cdata"))
    return property (&cdata, true);
  else if (pname.compare ("cdatamapping"))
    return property (&cdatamapping, true);
  else if (pname.compare ("cdatasource"))
    return property (&cdatasource, true);
  else if (pname.compare ("diffusestrength"))
    return property (&diffusestrength, true);
  else if (pname.compare ("displayname"))
    return property (&displayname, true);
  else if (pname.compare ("edgealpha"))
    return property (&edgealpha, true);
  else if (pname.compare ("edgecolor"))
    return property (&edgecolor, true);
  else if (pname.compare ("edgelighting"))
    return property (&edgelighting, true);
  else if (pname.compare ("erasemode"))
    return property (&erasemode, true);
  else if (pname.compare ("facealpha"))
    return property (&facealpha, true);
  else if (pname.compare ("facecolor"))
    return property (&facecolor, true);
  else if (pname.compare ("facelighting"))
    return property (&facelighting, true);
  else if (pname.compare ("facenormals"))
    return property (&facenormals, true);
  else if (pname.compare ("facenormalsmode"))
    return property (&facenormalsmode, true);
  else if (pname.compare ("interpreter"))
    return property (&interpreter, true);
  else if (pname.compare ("linestyle"))
    return property (&linestyle, true);
  else if (pname.compare ("linewidth"))
    return property (&linewidth, true);
  else if (pname.compare ("marker"))
    return property (&marker, true);
  else if (pname.compare ("markeredgecolor"))
    return property (&markeredgecolor, true);
  else if (pname.compare ("markerfacecolor"))
    return property (&markerfacecolor, true);
  else if (pname.compare ("markersize"))
    return property (&markersize, true);
  else if (pname.compare ("meshstyle"))
    return property (&meshstyle, true);
  else if (pname.compare ("normalmode"))
    return property (&normalmode, true);
  else if (pname.compare ("specularcolorreflectance"))
    return property (&specularcolorreflectance, true);
  else if (pname.compare ("specularexponent"))
    return property (&specularexponent, true);
  else if (pname.compare ("specularstrength"))
    return property (&specularstrength, true);
  else if (pname.compare ("vertexnormals"))
    return property (&vertexnormals, true);
  else if (pname.compare ("vertexnormalsmode"))
    return property (&vertexnormalsmode, true);
  else if (pname.compare ("xdata"))
    return property (&xdata, true);
  else if (pname.compare ("xdatasource"))
    return property (&xdatasource, true);
  else if (pname.compare ("ydata"))
    return property (&ydata, true);
  else if (pname.compare ("ydatasource"))
    return property (&ydatasource, true);
  else if (pname.compare ("zdata"))
    return property (&zdata, true);
  else if (pname.compare ("zdatasource"))
    return property (&zdatasource, true);
  else if (pname.compare ("alim"))
    return property (&alim, true);
  else if (pname.compare ("clim"))
    return property (&clim, true);
  else if (pname.compare ("xlim"))
    return property (&xlim, true);
  else if (pname.compare ("ylim"))
    return property (&ylim, true);
  else if (pname.compare ("zlim"))
    return property (&zlim, true);
  else if (pname.compare ("aliminclude"))
    return property (&aliminclude, true);
  else if (pname.compare ("climinclude"))
    return property (&climinclude, true);
  else if (pname.compare ("xliminclude"))
    return property (&xliminclude, true);
  else if (pname.compare ("yliminclude"))
    return property (&yliminclude, true);
  else if (pname.compare ("zliminclude"))
    return property (&zliminclude, true);
  else
    return base_properties::get_property (pname);
}

property_list::pval_map_type
surface::properties::factory_defaults (void)
{
  property_list::pval_map_type m = base_properties::factory_defaults ();

  m["alphadata"] = Matrix (1, 1, 1.0);
  m["alphadatamapping"] = "scaled";
  m["ambientstrength"] = 0.3;
  m["backfacelighting"] = "reverselit";
  m["cdata"] = default_surface_cdata ();
  m["cdatamapping"] = "scaled";
  m["cdatasource"] = "";
  m["diffusestrength"] = 0.6;
  m["displayname"] = "";
  m["edgealpha"] = double_radio_property (1.0, radio_values ("flat|interp"));
  m["edgecolor"] = color_property (color_values (0, 0, 0), radio_values ("none|flat|interp"));
  m["edgelighting"] = "none";
  m["erasemode"] = "normal";
  m["facealpha"] = double_radio_property (1.0, radio_values ("flat|interp|texturemap"));
  m["facecolor"] = color_property (radio_values ("none|{flat}|interp|texturemap"), color_values (0, 0, 0));
  m["facelighting"] = "flat";
  m["facenormals"] = Matrix ();
  m["facenormalsmode"] = "auto";
  m["interpreter"] = "tex";
  m["linestyle"] = "-";
  m["linewidth"] = 0.5;
  m["marker"] = "none";
  m["markeredgecolor"] = color_property (radio_values ("none|{auto}|flat"), color_values (0, 0, 0));
  m["markerfacecolor"] = color_property (radio_values ("{none}|auto|flat"), color_values (0, 0, 0));
  m["markersize"] = 6;
  m["meshstyle"] = "both";
  m["normalmode"] = "auto";
  m["specularcolorreflectance"] = 1;
  m["specularexponent"] = 10;
  m["specularstrength"] = 0.9;
  m["vertexnormals"] = Matrix ();
  m["vertexnormalsmode"] = "auto";
  m["xdata"] = default_surface_xdata ();
  m["xdatasource"] = "";
  m["ydata"] = default_surface_ydata ();
  m["ydatasource"] = "";
  m["zdata"] = default_surface_zdata ();
  m["zdatasource"] = "";
  m["alim"] = Matrix ();
  m["clim"] = Matrix ();
  m["xlim"] = Matrix ();
  m["ylim"] = Matrix ();
  m["zlim"] = Matrix ();
  m["aliminclude"] = "on";
  m["climinclude"] = "on";
  m["xliminclude"] = "on";
  m["yliminclude"] = "on";
  m["zliminclude"] = "on";

  return m;
}

std::string surface::properties::go_name ("surface");

std::set<std::string>
surface::properties::core_property_names (void)
{
  static std::set<std::string> all_pnames;

  static bool initialized = false;

  if (! initialized)
    {
      all_pnames.insert ("alphadata");
      all_pnames.insert ("alphadatamapping");
      all_pnames.insert ("ambientstrength");
      all_pnames.insert ("backfacelighting");
      all_pnames.insert ("cdata");
      all_pnames.insert ("cdatamapping");
      all_pnames.insert ("cdatasource");
      all_pnames.insert ("diffusestrength");
      all_pnames.insert ("displayname");
      all_pnames.insert ("edgealpha");
      all_pnames.insert ("edgecolor");
      all_pnames.insert ("edgelighting");
      all_pnames.insert ("erasemode");
      all_pnames.insert ("facealpha");
      all_pnames.insert ("facecolor");
      all_pnames.insert ("facelighting");
      all_pnames.insert ("facenormals");
      all_pnames.insert ("facenormalsmode");
      all_pnames.insert ("interpreter");
      all_pnames.insert ("linestyle");
      all_pnames.insert ("linewidth");
      all_pnames.insert ("marker");
      all_pnames.insert ("markeredgecolor");
      all_pnames.insert ("markerfacecolor");
      all_pnames.insert ("markersize");
      all_pnames.insert ("meshstyle");
      all_pnames.insert ("normalmode");
      all_pnames.insert ("specularcolorreflectance");
      all_pnames.insert ("specularexponent");
      all_pnames.insert ("specularstrength");
      all_pnames.insert ("vertexnormals");
      all_pnames.insert ("vertexnormalsmode");
      all_pnames.insert ("xdata");
      all_pnames.insert ("xdatasource");
      all_pnames.insert ("ydata");
      all_pnames.insert ("ydatasource");
      all_pnames.insert ("zdata");
      all_pnames.insert ("zdatasource");
      all_pnames.insert ("alim");
      all_pnames.insert ("clim");
      all_pnames.insert ("xlim");
      all_pnames.insert ("ylim");
      all_pnames.insert ("zlim");
      all_pnames.insert ("aliminclude");
      all_pnames.insert ("climinclude");
      all_pnames.insert ("xliminclude");
      all_pnames.insert ("yliminclude");
      all_pnames.insert ("zliminclude");

      std::set<std::string> base_pnames = base_properties::core_property_names ();
      all_pnames.insert (base_pnames.begin (), base_pnames.end ());

      initialized = true;
    }

  return all_pnames;
}

bool
surface::properties::has_core_property (const caseless_str& pname)
{
  std::set<std::string> pnames = core_property_names ();

  return pnames.find (pname) != pnames.end ();
}

std::set<std::string>
surface::properties::readonly_property_names (void)
{
  static std::set<std::string> all_pnames;

  static bool initialized = false;

  if (! initialized)
    {
      all_pnames.insert ("alim");
      all_pnames.insert ("clim");
      all_pnames.insert ("xlim");
      all_pnames.insert ("ylim");
      all_pnames.insert ("zlim");

      std::set<std::string> base_pnames = base_properties::readonly_property_names ();
      all_pnames.insert (base_pnames.begin (), base_pnames.end ());

      initialized = true;
    }

  return all_pnames;
}

bool
surface::properties::has_readonly_property (const caseless_str& pname)
{
  std::set<std::string> pnames = readonly_property_names ();

  return pnames.find (pname) != pnames.end ();
}

std::set<std::string>
surface::properties::all_property_names (void) const
{
  static std::set<std::string> all_pnames = core_property_names ();

  std::set<std::string> retval = all_pnames;
  std::set<std::string> base_props = base_properties::all_property_names ();
  retval.insert (base_props.begin (), base_props.end ());

  return retval;
}

bool
surface::properties::has_property (const caseless_str& pname) const
{
  std::set<std::string> pnames = all_property_names ();

  return pnames.find (pname) != pnames.end ();
}

// ******** hggroup ********

hggroup::properties::properties (const graphics_handle& mh, const graphics_handle& p)
  : base_properties (go_name, mh, p),
    displayname ("displayname", mh, ""),
    erasemode ("erasemode", mh, "{normal}|none|xor|background"),
    alim ("alim", mh, Matrix ()),
    clim ("clim", mh, Matrix ()),
    xlim ("xlim", mh, Matrix ()),
    ylim ("ylim", mh, Matrix ()),
    zlim ("zlim", mh, Matrix ()),
    aliminclude ("aliminclude", mh, "on"),
    climinclude ("climinclude", mh, "on"),
    xliminclude ("xliminclude", mh, "on"),
    yliminclude ("yliminclude", mh, "on"),
    zliminclude ("zliminclude", mh, "on")
{
  displayname.set_id (ID_DISPLAYNAME);
  erasemode.set_id (ID_ERASEMODE);
  erasemode.set_hidden (true);
  alim.set_id (ID_ALIM);
  alim.set_hidden (true);
  clim.set_id (ID_CLIM);
  clim.set_hidden (true);
  xlim.set_id (ID_XLIM);
  xlim.set_hidden (true);
  ylim.set_id (ID_YLIM);
  ylim.set_hidden (true);
  zlim.set_id (ID_ZLIM);
  zlim.set_hidden (true);
  aliminclude.set_id (ID_ALIMINCLUDE);
  aliminclude.set_hidden (true);
  climinclude.set_id (ID_CLIMINCLUDE);
  climinclude.set_hidden (true);
  xliminclude.set_id (ID_XLIMINCLUDE);
  xliminclude.set_hidden (true);
  yliminclude.set_id (ID_YLIMINCLUDE);
  yliminclude.set_hidden (true);
  zliminclude.set_id (ID_ZLIMINCLUDE);
  zliminclude.set_hidden (true);
  init ();
}

void
hggroup::properties::set (const caseless_str& pname_arg, const octave_value& val)
{
  const std::set<std::string>& pnames = all_property_names ();

  caseless_str pname = validate_property_name ("set", go_name, pnames, pname_arg);

  if (has_readonly_property (pname))
    {
      error ("set: \"%s\" is read-only", pname.c_str ());
      return;
    }

  if (pname.compare ("displayname"))
    set_displayname (val);
  else if (pname.compare ("erasemode"))
    set_erasemode (val);
  else if (pname.compare ("aliminclude"))
    set_aliminclude (val);
  else if (pname.compare ("climinclude"))
    set_climinclude (val);
  else if (pname.compare ("xliminclude"))
    set_xliminclude (val);
  else if (pname.compare ("yliminclude"))
    set_yliminclude (val);
  else if (pname.compare ("zliminclude"))
    set_zliminclude (val);
  else
    base_properties::set (pname, val);
}

octave_value
hggroup::properties::get (bool all) const
{
  octave_map m = base_properties::get (all).map_value ();

  m.assign ("displayname", octave_value (get_displayname ()));
  if (all)
    m.assign ("erasemode", octave_value (get_erasemode ()));
  if (all)
    m.assign ("alim", octave_value (get_alim ()));
  if (all)
    m.assign ("clim", octave_value (get_clim ()));
  if (all)
    m.assign ("xlim", octave_value (get_xlim ()));
  if (all)
    m.assign ("ylim", octave_value (get_ylim ()));
  if (all)
    m.assign ("zlim", octave_value (get_zlim ()));
  if (all)
    m.assign ("aliminclude", octave_value (get_aliminclude ()));
  if (all)
    m.assign ("climinclude", octave_value (get_climinclude ()));
  if (all)
    m.assign ("xliminclude", octave_value (get_xliminclude ()));
  if (all)
    m.assign ("yliminclude", octave_value (get_yliminclude ()));
  if (all)
    m.assign ("zliminclude", octave_value (get_zliminclude ()));

  return m;
}

octave_value
hggroup::properties::get (const caseless_str& pname_arg) const
{
  octave_value retval;

  const std::set<std::string>& pnames = all_property_names ();

  caseless_str pname = validate_property_name ("get", go_name, pnames, pname_arg);

  if (pname.compare ("displayname"))
    retval = get_displayname ();
  else if (pname.compare ("erasemode"))
    retval = get_erasemode ();
  else if (pname.compare ("alim"))
    retval = get_alim ();
  else if (pname.compare ("clim"))
    retval = get_clim ();
  else if (pname.compare ("xlim"))
    retval = get_xlim ();
  else if (pname.compare ("ylim"))
    retval = get_ylim ();
  else if (pname.compare ("zlim"))
    retval = get_zlim ();
  else if (pname.compare ("aliminclude"))
    retval = get_aliminclude ();
  else if (pname.compare ("climinclude"))
    retval = get_climinclude ();
  else if (pname.compare ("xliminclude"))
    retval = get_xliminclude ();
  else if (pname.compare ("yliminclude"))
    retval = get_yliminclude ();
  else if (pname.compare ("zliminclude"))
    retval = get_zliminclude ();
  else
    retval = base_properties::get (pname);

  return retval;
}

property
hggroup::properties::get_property (const caseless_str& pname_arg)
{
  const std::set<std::string>& pnames = all_property_names ();

  caseless_str pname = validate_property_name ("get", go_name, pnames, pname_arg);

  if (pname.compare ("displayname"))
    return property (&displayname, true);
  else if (pname.compare ("erasemode"))
    return property (&erasemode, true);
  else if (pname.compare ("alim"))
    return property (&alim, true);
  else if (pname.compare ("clim"))
    return property (&clim, true);
  else if (pname.compare ("xlim"))
    return property (&xlim, true);
  else if (pname.compare ("ylim"))
    return property (&ylim, true);
  else if (pname.compare ("zlim"))
    return property (&zlim, true);
  else if (pname.compare ("aliminclude"))
    return property (&aliminclude, true);
  else if (pname.compare ("climinclude"))
    return property (&climinclude, true);
  else if (pname.compare ("xliminclude"))
    return property (&xliminclude, true);
  else if (pname.compare ("yliminclude"))
    return property (&yliminclude, true);
  else if (pname.compare ("zliminclude"))
    return property (&zliminclude, true);
  else
    return base_properties::get_property (pname);
}

property_list::pval_map_type
hggroup::properties::factory_defaults (void)
{
  property_list::pval_map_type m = base_properties::factory_defaults ();

  m["displayname"] = "";
  m["erasemode"] = "normal";
  m["alim"] = Matrix ();
  m["clim"] = Matrix ();
  m["xlim"] = Matrix ();
  m["ylim"] = Matrix ();
  m["zlim"] = Matrix ();
  m["aliminclude"] = "on";
  m["climinclude"] = "on";
  m["xliminclude"] = "on";
  m["yliminclude"] = "on";
  m["zliminclude"] = "on";

  return m;
}

std::string hggroup::properties::go_name ("hggroup");

std::set<std::string>
hggroup::properties::core_property_names (void)
{
  static std::set<std::string> all_pnames;

  static bool initialized = false;

  if (! initialized)
    {
      all_pnames.insert ("displayname");
      all_pnames.insert ("erasemode");
      all_pnames.insert ("alim");
      all_pnames.insert ("clim");
      all_pnames.insert ("xlim");
      all_pnames.insert ("ylim");
      all_pnames.insert ("zlim");
      all_pnames.insert ("aliminclude");
      all_pnames.insert ("climinclude");
      all_pnames.insert ("xliminclude");
      all_pnames.insert ("yliminclude");
      all_pnames.insert ("zliminclude");

      std::set<std::string> base_pnames = base_properties::core_property_names ();
      all_pnames.insert (base_pnames.begin (), base_pnames.end ());

      initialized = true;
    }

  return all_pnames;
}

bool
hggroup::properties::has_core_property (const caseless_str& pname)
{
  std::set<std::string> pnames = core_property_names ();

  return pnames.find (pname) != pnames.end ();
}

std::set<std::string>
hggroup::properties::readonly_property_names (void)
{
  static std::set<std::string> all_pnames;

  static bool initialized = false;

  if (! initialized)
    {
      all_pnames.insert ("alim");
      all_pnames.insert ("clim");
      all_pnames.insert ("xlim");
      all_pnames.insert ("ylim");
      all_pnames.insert ("zlim");

      std::set<std::string> base_pnames = base_properties::readonly_property_names ();
      all_pnames.insert (base_pnames.begin (), base_pnames.end ());

      initialized = true;
    }

  return all_pnames;
}

bool
hggroup::properties::has_readonly_property (const caseless_str& pname)
{
  std::set<std::string> pnames = readonly_property_names ();

  return pnames.find (pname) != pnames.end ();
}

std::set<std::string>
hggroup::properties::all_property_names (void) const
{
  static std::set<std::string> all_pnames = core_property_names ();

  std::set<std::string> retval = all_pnames;
  std::set<std::string> base_props = base_properties::all_property_names ();
  retval.insert (base_props.begin (), base_props.end ());

  return retval;
}

bool
hggroup::properties::has_property (const caseless_str& pname) const
{
  std::set<std::string> pnames = all_property_names ();

  return pnames.find (pname) != pnames.end ();
}

// ******** uimenu ********

uimenu::properties::properties (const graphics_handle& mh, const graphics_handle& p)
  : base_properties (go_name, mh, p),
    accelerator ("accelerator", mh, ""),
    callback ("callback", mh, Matrix ()),
    checked ("checked", mh, "off"),
    enable ("enable", mh, "on"),
    foregroundcolor ("foregroundcolor", mh, color_values (0, 0, 0)),
    label ("label", mh, ""),
    position ("position", mh, 0),
    separator ("separator", mh, "off"),
    __fltk_label__ ("__fltk_label__", mh, ""),
    __object__ ("__object__", mh, Matrix ())
{
  accelerator.set_id (ID_ACCELERATOR);
  callback.set_id (ID_CALLBACK);
  checked.set_id (ID_CHECKED);
  enable.set_id (ID_ENABLE);
  foregroundcolor.set_id (ID_FOREGROUNDCOLOR);
  label.set_id (ID_LABEL);
  position.set_id (ID_POSITION);
  separator.set_id (ID_SEPARATOR);
  __fltk_label__.set_id (ID___FLTK_LABEL__);
  __fltk_label__.set_hidden (true);
  __object__.set_id (ID___OBJECT__);
  __object__.set_hidden (true);
  init ();
}

void
uimenu::properties::set (const caseless_str& pname_arg, const octave_value& val)
{
  const std::set<std::string>& pnames = all_property_names ();

  caseless_str pname = validate_property_name ("set", go_name, pnames, pname_arg);

  if (has_readonly_property (pname))
    {
      error ("set: \"%s\" is read-only", pname.c_str ());
      return;
    }

  if (pname.compare ("accelerator"))
    set_accelerator (val);
  else if (pname.compare ("callback"))
    set_callback (val);
  else if (pname.compare ("checked"))
    set_checked (val);
  else if (pname.compare ("enable"))
    set_enable (val);
  else if (pname.compare ("foregroundcolor"))
    set_foregroundcolor (val);
  else if (pname.compare ("label"))
    set_label (val);
  else if (pname.compare ("position"))
    set_position (val);
  else if (pname.compare ("separator"))
    set_separator (val);
  else if (pname.compare ("__fltk_label__"))
    set___fltk_label__ (val);
  else if (pname.compare ("__object__"))
    set___object__ (val);
  else
    base_properties::set (pname, val);
}

octave_value
uimenu::properties::get (bool all) const
{
  octave_map m = base_properties::get (all).map_value ();

  m.assign ("accelerator", octave_value (get_accelerator ()));
  m.assign ("callback", octave_value (get_callback ()));
  m.assign ("checked", octave_value (get_checked ()));
  m.assign ("enable", octave_value (get_enable ()));
  m.assign ("foregroundcolor", octave_value (get_foregroundcolor ()));
  m.assign ("label", octave_value (get_label ()));
  m.assign ("position", octave_value (get_position ()));
  m.assign ("separator", octave_value (get_separator ()));
  if (all)
    m.assign ("__fltk_label__", octave_value (get___fltk_label__ ()));
  if (all)
    m.assign ("__object__", octave_value (get___object__ ()));

  return m;
}

octave_value
uimenu::properties::get (const caseless_str& pname_arg) const
{
  octave_value retval;

  const std::set<std::string>& pnames = all_property_names ();

  caseless_str pname = validate_property_name ("get", go_name, pnames, pname_arg);

  if (pname.compare ("accelerator"))
    retval = get_accelerator ();
  else if (pname.compare ("callback"))
    retval = get_callback ();
  else if (pname.compare ("checked"))
    retval = get_checked ();
  else if (pname.compare ("enable"))
    retval = get_enable ();
  else if (pname.compare ("foregroundcolor"))
    retval = get_foregroundcolor ();
  else if (pname.compare ("label"))
    retval = get_label ();
  else if (pname.compare ("position"))
    retval = get_position ();
  else if (pname.compare ("separator"))
    retval = get_separator ();
  else if (pname.compare ("__fltk_label__"))
    retval = get___fltk_label__ ();
  else if (pname.compare ("__object__"))
    retval = get___object__ ();
  else
    retval = base_properties::get (pname);

  return retval;
}

property
uimenu::properties::get_property (const caseless_str& pname_arg)
{
  const std::set<std::string>& pnames = all_property_names ();

  caseless_str pname = validate_property_name ("get", go_name, pnames, pname_arg);

  if (pname.compare ("accelerator"))
    return property (&accelerator, true);
  else if (pname.compare ("callback"))
    return property (&callback, true);
  else if (pname.compare ("checked"))
    return property (&checked, true);
  else if (pname.compare ("enable"))
    return property (&enable, true);
  else if (pname.compare ("foregroundcolor"))
    return property (&foregroundcolor, true);
  else if (pname.compare ("label"))
    return property (&label, true);
  else if (pname.compare ("position"))
    return property (&position, true);
  else if (pname.compare ("separator"))
    return property (&separator, true);
  else if (pname.compare ("__fltk_label__"))
    return property (&__fltk_label__, true);
  else if (pname.compare ("__object__"))
    return property (&__object__, true);
  else
    return base_properties::get_property (pname);
}

property_list::pval_map_type
uimenu::properties::factory_defaults (void)
{
  property_list::pval_map_type m = base_properties::factory_defaults ();

  m["accelerator"] = "";
  m["callback"] = Matrix ();
  m["checked"] = "off";
  m["enable"] = "on";
  m["foregroundcolor"] = color_values (0, 0, 0);
  m["label"] = "";
  m["position"] = 0;
  m["separator"] = "off";
  m["__fltk_label__"] = "";
  m["__object__"] = Matrix ();

  return m;
}

std::string uimenu::properties::go_name ("uimenu");

std::set<std::string>
uimenu::properties::core_property_names (void)
{
  static std::set<std::string> all_pnames;

  static bool initialized = false;

  if (! initialized)
    {
      all_pnames.insert ("accelerator");
      all_pnames.insert ("callback");
      all_pnames.insert ("checked");
      all_pnames.insert ("enable");
      all_pnames.insert ("foregroundcolor");
      all_pnames.insert ("label");
      all_pnames.insert ("position");
      all_pnames.insert ("separator");
      all_pnames.insert ("__fltk_label__");
      all_pnames.insert ("__object__");

      std::set<std::string> base_pnames = base_properties::core_property_names ();
      all_pnames.insert (base_pnames.begin (), base_pnames.end ());

      initialized = true;
    }

  return all_pnames;
}

bool
uimenu::properties::has_core_property (const caseless_str& pname)
{
  std::set<std::string> pnames = core_property_names ();

  return pnames.find (pname) != pnames.end ();
}

std::set<std::string>
uimenu::properties::readonly_property_names (void)
{
  static std::set<std::string> all_pnames;

  static bool initialized = false;

  if (! initialized)
    {

      std::set<std::string> base_pnames = base_properties::readonly_property_names ();
      all_pnames.insert (base_pnames.begin (), base_pnames.end ());

      initialized = true;
    }

  return all_pnames;
}

bool
uimenu::properties::has_readonly_property (const caseless_str& pname)
{
  std::set<std::string> pnames = readonly_property_names ();

  return pnames.find (pname) != pnames.end ();
}

std::set<std::string>
uimenu::properties::all_property_names (void) const
{
  static std::set<std::string> all_pnames = core_property_names ();

  std::set<std::string> retval = all_pnames;
  std::set<std::string> base_props = base_properties::all_property_names ();
  retval.insert (base_props.begin (), base_props.end ());

  return retval;
}

bool
uimenu::properties::has_property (const caseless_str& pname) const
{
  std::set<std::string> pnames = all_property_names ();

  return pnames.find (pname) != pnames.end ();
}

// ******** uicontextmenu ********

uicontextmenu::properties::properties (const graphics_handle& mh, const graphics_handle& p)
  : base_properties (go_name, mh, p),
    callback ("callback", mh, Matrix ()),
    position ("position", mh, Matrix (1, 2, 0.0)),
    __object__ ("__object__", mh, Matrix ())
{
  callback.set_id (ID_CALLBACK);
  position.set_id (ID_POSITION);
  __object__.set_id (ID___OBJECT__);
  __object__.set_hidden (true);
  init ();
}

void
uicontextmenu::properties::set (const caseless_str& pname_arg, const octave_value& val)
{
  const std::set<std::string>& pnames = all_property_names ();

  caseless_str pname = validate_property_name ("set", go_name, pnames, pname_arg);

  if (has_readonly_property (pname))
    {
      error ("set: \"%s\" is read-only", pname.c_str ());
      return;
    }

  if (pname.compare ("callback"))
    set_callback (val);
  else if (pname.compare ("position"))
    set_position (val);
  else if (pname.compare ("__object__"))
    set___object__ (val);
  else
    base_properties::set (pname, val);
}

octave_value
uicontextmenu::properties::get (bool all) const
{
  octave_map m = base_properties::get (all).map_value ();

  m.assign ("callback", octave_value (get_callback ()));
  m.assign ("position", octave_value (get_position ()));
  if (all)
    m.assign ("__object__", octave_value (get___object__ ()));

  return m;
}

octave_value
uicontextmenu::properties::get (const caseless_str& pname_arg) const
{
  octave_value retval;

  const std::set<std::string>& pnames = all_property_names ();

  caseless_str pname = validate_property_name ("get", go_name, pnames, pname_arg);

  if (pname.compare ("callback"))
    retval = get_callback ();
  else if (pname.compare ("position"))
    retval = get_position ();
  else if (pname.compare ("__object__"))
    retval = get___object__ ();
  else
    retval = base_properties::get (pname);

  return retval;
}

property
uicontextmenu::properties::get_property (const caseless_str& pname_arg)
{
  const std::set<std::string>& pnames = all_property_names ();

  caseless_str pname = validate_property_name ("get", go_name, pnames, pname_arg);

  if (pname.compare ("callback"))
    return property (&callback, true);
  else if (pname.compare ("position"))
    return property (&position, true);
  else if (pname.compare ("__object__"))
    return property (&__object__, true);
  else
    return base_properties::get_property (pname);
}

property_list::pval_map_type
uicontextmenu::properties::factory_defaults (void)
{
  property_list::pval_map_type m = base_properties::factory_defaults ();

  m["callback"] = Matrix ();
  m["position"] = Matrix (1, 2, 0.0);
  m["__object__"] = Matrix ();

  return m;
}

std::string uicontextmenu::properties::go_name ("uicontextmenu");

std::set<std::string>
uicontextmenu::properties::core_property_names (void)
{
  static std::set<std::string> all_pnames;

  static bool initialized = false;

  if (! initialized)
    {
      all_pnames.insert ("callback");
      all_pnames.insert ("position");
      all_pnames.insert ("__object__");

      std::set<std::string> base_pnames = base_properties::core_property_names ();
      all_pnames.insert (base_pnames.begin (), base_pnames.end ());

      initialized = true;
    }

  return all_pnames;
}

bool
uicontextmenu::properties::has_core_property (const caseless_str& pname)
{
  std::set<std::string> pnames = core_property_names ();

  return pnames.find (pname) != pnames.end ();
}

std::set<std::string>
uicontextmenu::properties::readonly_property_names (void)
{
  static std::set<std::string> all_pnames;

  static bool initialized = false;

  if (! initialized)
    {

      std::set<std::string> base_pnames = base_properties::readonly_property_names ();
      all_pnames.insert (base_pnames.begin (), base_pnames.end ());

      initialized = true;
    }

  return all_pnames;
}

bool
uicontextmenu::properties::has_readonly_property (const caseless_str& pname)
{
  std::set<std::string> pnames = readonly_property_names ();

  return pnames.find (pname) != pnames.end ();
}

std::set<std::string>
uicontextmenu::properties::all_property_names (void) const
{
  static std::set<std::string> all_pnames = core_property_names ();

  std::set<std::string> retval = all_pnames;
  std::set<std::string> base_props = base_properties::all_property_names ();
  retval.insert (base_props.begin (), base_props.end ());

  return retval;
}

bool
uicontextmenu::properties::has_property (const caseless_str& pname) const
{
  std::set<std::string> pnames = all_property_names ();

  return pnames.find (pname) != pnames.end ();
}

// ******** uicontrol ********

uicontrol::properties::properties (const graphics_handle& mh, const graphics_handle& p)
  : base_properties (go_name, mh, p),
    backgroundcolor ("backgroundcolor", mh, color_values (1, 1, 1)),
    callback ("callback", mh, Matrix ()),
    cdata ("cdata", mh, Matrix ()),
    clipping ("clipping", mh, "on"),
    enable ("enable", mh, "{on}|inactive|off"),
    extent ("extent", mh, Matrix (1, 4, 0.0)),
    fontangle ("fontangle", mh, "{normal}|italic|oblique"),
    fontname ("fontname", mh, OCTAVE_DEFAULT_FONTNAME),
    fontsize ("fontsize", mh, 10),
    fontunits ("fontunits", mh, "inches|centimeters|normalized|{points}|pixels"),
    fontweight ("fontweight", mh, "light|{normal}|demi|bold"),
    foregroundcolor ("foregroundcolor", mh, color_values (0, 0, 0)),
    horizontalalignment ("horizontalalignment", mh, "left|{center}|right"),
    keypressfcn ("keypressfcn", mh, Matrix ()),
    listboxtop ("listboxtop", mh, 1),
    max ("max", mh, 1),
    min ("min", mh, 0),
    position ("position", mh, default_control_position ()),
    sliderstep ("sliderstep", mh, default_control_sliderstep ()),
    string ("string", mh, ""),
    style ("style", mh, "{pushbutton}|togglebutton|radiobutton|checkbox|edit|text|slider|frame|listbox|popupmenu"),
    tooltipstring ("tooltipstring", mh, ""),
    units ("units", mh, "normalized|inches|centimeters|points|{pixels}|characters"),
    value ("value", mh, Matrix (1, 1, 0.0)),
    verticalalignment ("verticalalignment", mh, "top|{middle}|bottom"),
    __object__ ("__object__", mh, Matrix ())
{
  backgroundcolor.set_id (ID_BACKGROUNDCOLOR);
  callback.set_id (ID_CALLBACK);
  cdata.set_id (ID_CDATA);
  clipping.set_id (ID_CLIPPING);
  enable.set_id (ID_ENABLE);
  extent.set_id (ID_EXTENT);
  fontangle.set_id (ID_FONTANGLE);
  fontname.set_id (ID_FONTNAME);
  fontsize.set_id (ID_FONTSIZE);
  fontunits.set_id (ID_FONTUNITS);
  fontweight.set_id (ID_FONTWEIGHT);
  foregroundcolor.set_id (ID_FOREGROUNDCOLOR);
  horizontalalignment.set_id (ID_HORIZONTALALIGNMENT);
  keypressfcn.set_id (ID_KEYPRESSFCN);
  listboxtop.set_id (ID_LISTBOXTOP);
  max.set_id (ID_MAX);
  min.set_id (ID_MIN);
  position.set_id (ID_POSITION);
  sliderstep.set_id (ID_SLIDERSTEP);
  string.set_id (ID_STRING);
  style.set_id (ID_STYLE);
  tooltipstring.set_id (ID_TOOLTIPSTRING);
  units.set_id (ID_UNITS);
  value.set_id (ID_VALUE);
  verticalalignment.set_id (ID_VERTICALALIGNMENT);
  __object__.set_id (ID___OBJECT__);
  __object__.set_hidden (true);
  init ();
}

void
uicontrol::properties::set (const caseless_str& pname_arg, const octave_value& val)
{
  const std::set<std::string>& pnames = all_property_names ();

  caseless_str pname = validate_property_name ("set", go_name, pnames, pname_arg);

  if (has_readonly_property (pname))
    {
      error ("set: \"%s\" is read-only", pname.c_str ());
      return;
    }

  if (pname.compare ("backgroundcolor"))
    set_backgroundcolor (val);
  else if (pname.compare ("callback"))
    set_callback (val);
  else if (pname.compare ("cdata"))
    set_cdata (val);
  else if (pname.compare ("clipping"))
    set_clipping (val);
  else if (pname.compare ("enable"))
    set_enable (val);
  else if (pname.compare ("fontangle"))
    set_fontangle (val);
  else if (pname.compare ("fontname"))
    set_fontname (val);
  else if (pname.compare ("fontsize"))
    set_fontsize (val);
  else if (pname.compare ("fontunits"))
    set_fontunits (val);
  else if (pname.compare ("fontweight"))
    set_fontweight (val);
  else if (pname.compare ("foregroundcolor"))
    set_foregroundcolor (val);
  else if (pname.compare ("horizontalalignment"))
    set_horizontalalignment (val);
  else if (pname.compare ("keypressfcn"))
    set_keypressfcn (val);
  else if (pname.compare ("listboxtop"))
    set_listboxtop (val);
  else if (pname.compare ("max"))
    set_max (val);
  else if (pname.compare ("min"))
    set_min (val);
  else if (pname.compare ("position"))
    set_position (val);
  else if (pname.compare ("sliderstep"))
    set_sliderstep (val);
  else if (pname.compare ("string"))
    set_string (val);
  else if (pname.compare ("style"))
    set_style (val);
  else if (pname.compare ("tooltipstring"))
    set_tooltipstring (val);
  else if (pname.compare ("units"))
    set_units (val);
  else if (pname.compare ("value"))
    set_value (val);
  else if (pname.compare ("verticalalignment"))
    set_verticalalignment (val);
  else if (pname.compare ("__object__"))
    set___object__ (val);
  else
    base_properties::set (pname, val);
}

octave_value
uicontrol::properties::get (bool all) const
{
  octave_map m = base_properties::get (all).map_value ();

  m.assign ("backgroundcolor", octave_value (get_backgroundcolor ()));
  m.assign ("callback", octave_value (get_callback ()));
  m.assign ("cdata", octave_value (get_cdata ()));
  m.assign ("clipping", octave_value (get_clipping ()));
  m.assign ("enable", octave_value (get_enable ()));
  m.assign ("extent", octave_value (get_extent ()));
  m.assign ("fontangle", octave_value (get_fontangle ()));
  m.assign ("fontname", octave_value (get_fontname ()));
  m.assign ("fontsize", octave_value (get_fontsize ()));
  m.assign ("fontunits", octave_value (get_fontunits ()));
  m.assign ("fontweight", octave_value (get_fontweight ()));
  m.assign ("foregroundcolor", octave_value (get_foregroundcolor ()));
  m.assign ("horizontalalignment", octave_value (get_horizontalalignment ()));
  m.assign ("keypressfcn", octave_value (get_keypressfcn ()));
  m.assign ("listboxtop", octave_value (get_listboxtop ()));
  m.assign ("max", octave_value (get_max ()));
  m.assign ("min", octave_value (get_min ()));
  m.assign ("position", octave_value (get_position ()));
  m.assign ("sliderstep", octave_value (get_sliderstep ()));
  m.assign ("string", octave_value (get_string ()));
  m.assign ("style", octave_value (get_style ()));
  m.assign ("tooltipstring", octave_value (get_tooltipstring ()));
  m.assign ("units", octave_value (get_units ()));
  m.assign ("value", octave_value (get_value ()));
  m.assign ("verticalalignment", octave_value (get_verticalalignment ()));
  if (all)
    m.assign ("__object__", octave_value (get___object__ ()));

  return m;
}

octave_value
uicontrol::properties::get (const caseless_str& pname_arg) const
{
  octave_value retval;

  const std::set<std::string>& pnames = all_property_names ();

  caseless_str pname = validate_property_name ("get", go_name, pnames, pname_arg);

  if (pname.compare ("backgroundcolor"))
    retval = get_backgroundcolor ();
  else if (pname.compare ("callback"))
    retval = get_callback ();
  else if (pname.compare ("cdata"))
    retval = get_cdata ();
  else if (pname.compare ("clipping"))
    retval = get_clipping ();
  else if (pname.compare ("enable"))
    retval = get_enable ();
  else if (pname.compare ("extent"))
    retval = get_extent ();
  else if (pname.compare ("fontangle"))
    retval = get_fontangle ();
  else if (pname.compare ("fontname"))
    retval = get_fontname ();
  else if (pname.compare ("fontsize"))
    retval = get_fontsize ();
  else if (pname.compare ("fontunits"))
    retval = get_fontunits ();
  else if (pname.compare ("fontweight"))
    retval = get_fontweight ();
  else if (pname.compare ("foregroundcolor"))
    retval = get_foregroundcolor ();
  else if (pname.compare ("horizontalalignment"))
    retval = get_horizontalalignment ();
  else if (pname.compare ("keypressfcn"))
    retval = get_keypressfcn ();
  else if (pname.compare ("listboxtop"))
    retval = get_listboxtop ();
  else if (pname.compare ("max"))
    retval = get_max ();
  else if (pname.compare ("min"))
    retval = get_min ();
  else if (pname.compare ("position"))
    retval = get_position ();
  else if (pname.compare ("sliderstep"))
    retval = get_sliderstep ();
  else if (pname.compare ("string"))
    retval = get_string ();
  else if (pname.compare ("style"))
    retval = get_style ();
  else if (pname.compare ("tooltipstring"))
    retval = get_tooltipstring ();
  else if (pname.compare ("units"))
    retval = get_units ();
  else if (pname.compare ("value"))
    retval = get_value ();
  else if (pname.compare ("verticalalignment"))
    retval = get_verticalalignment ();
  else if (pname.compare ("__object__"))
    retval = get___object__ ();
  else
    retval = base_properties::get (pname);

  return retval;
}

property
uicontrol::properties::get_property (const caseless_str& pname_arg)
{
  const std::set<std::string>& pnames = all_property_names ();

  caseless_str pname = validate_property_name ("get", go_name, pnames, pname_arg);

  if (pname.compare ("backgroundcolor"))
    return property (&backgroundcolor, true);
  else if (pname.compare ("callback"))
    return property (&callback, true);
  else if (pname.compare ("cdata"))
    return property (&cdata, true);
  else if (pname.compare ("clipping"))
    return property (&clipping, true);
  else if (pname.compare ("enable"))
    return property (&enable, true);
  else if (pname.compare ("extent"))
    return property (&extent, true);
  else if (pname.compare ("fontangle"))
    return property (&fontangle, true);
  else if (pname.compare ("fontname"))
    return property (&fontname, true);
  else if (pname.compare ("fontsize"))
    return property (&fontsize, true);
  else if (pname.compare ("fontunits"))
    return property (&fontunits, true);
  else if (pname.compare ("fontweight"))
    return property (&fontweight, true);
  else if (pname.compare ("foregroundcolor"))
    return property (&foregroundcolor, true);
  else if (pname.compare ("horizontalalignment"))
    return property (&horizontalalignment, true);
  else if (pname.compare ("keypressfcn"))
    return property (&keypressfcn, true);
  else if (pname.compare ("listboxtop"))
    return property (&listboxtop, true);
  else if (pname.compare ("max"))
    return property (&max, true);
  else if (pname.compare ("min"))
    return property (&min, true);
  else if (pname.compare ("position"))
    return property (&position, true);
  else if (pname.compare ("sliderstep"))
    return property (&sliderstep, true);
  else if (pname.compare ("string"))
    return property (&string, true);
  else if (pname.compare ("style"))
    return property (&style, true);
  else if (pname.compare ("tooltipstring"))
    return property (&tooltipstring, true);
  else if (pname.compare ("units"))
    return property (&units, true);
  else if (pname.compare ("value"))
    return property (&value, true);
  else if (pname.compare ("verticalalignment"))
    return property (&verticalalignment, true);
  else if (pname.compare ("__object__"))
    return property (&__object__, true);
  else
    return base_properties::get_property (pname);
}

property_list::pval_map_type
uicontrol::properties::factory_defaults (void)
{
  property_list::pval_map_type m = base_properties::factory_defaults ();

  m["backgroundcolor"] = color_values (1, 1, 1);
  m["callback"] = Matrix ();
  m["cdata"] = Matrix ();
  m["clipping"] = "on";
  m["enable"] = "on";
  m["extent"] = Matrix (1, 4, 0.0);
  m["fontangle"] = "normal";
  m["fontname"] = OCTAVE_DEFAULT_FONTNAME;
  m["fontsize"] = 10;
  m["fontunits"] = "points";
  m["fontweight"] = "normal";
  m["foregroundcolor"] = color_values (0, 0, 0);
  m["horizontalalignment"] = "center";
  m["keypressfcn"] = Matrix ();
  m["listboxtop"] = 1;
  m["max"] = 1;
  m["min"] = 0;
  m["position"] = default_control_position ();
  m["sliderstep"] = default_control_sliderstep ();
  m["string"] = "";
  m["style"] = "pushbutton";
  m["tooltipstring"] = "";
  m["units"] = "pixels";
  m["value"] = Matrix (1, 1, 0.0);
  m["verticalalignment"] = "middle";
  m["__object__"] = Matrix ();

  return m;
}

std::string uicontrol::properties::go_name ("uicontrol");

std::set<std::string>
uicontrol::properties::core_property_names (void)
{
  static std::set<std::string> all_pnames;

  static bool initialized = false;

  if (! initialized)
    {
      all_pnames.insert ("backgroundcolor");
      all_pnames.insert ("callback");
      all_pnames.insert ("cdata");
      all_pnames.insert ("clipping");
      all_pnames.insert ("enable");
      all_pnames.insert ("extent");
      all_pnames.insert ("fontangle");
      all_pnames.insert ("fontname");
      all_pnames.insert ("fontsize");
      all_pnames.insert ("fontunits");
      all_pnames.insert ("fontweight");
      all_pnames.insert ("foregroundcolor");
      all_pnames.insert ("horizontalalignment");
      all_pnames.insert ("keypressfcn");
      all_pnames.insert ("listboxtop");
      all_pnames.insert ("max");
      all_pnames.insert ("min");
      all_pnames.insert ("position");
      all_pnames.insert ("sliderstep");
      all_pnames.insert ("string");
      all_pnames.insert ("style");
      all_pnames.insert ("tooltipstring");
      all_pnames.insert ("units");
      all_pnames.insert ("value");
      all_pnames.insert ("verticalalignment");
      all_pnames.insert ("__object__");

      std::set<std::string> base_pnames = base_properties::core_property_names ();
      all_pnames.insert (base_pnames.begin (), base_pnames.end ());

      initialized = true;
    }

  return all_pnames;
}

bool
uicontrol::properties::has_core_property (const caseless_str& pname)
{
  std::set<std::string> pnames = core_property_names ();

  return pnames.find (pname) != pnames.end ();
}

std::set<std::string>
uicontrol::properties::readonly_property_names (void)
{
  static std::set<std::string> all_pnames;

  static bool initialized = false;

  if (! initialized)
    {
      all_pnames.insert ("extent");

      std::set<std::string> base_pnames = base_properties::readonly_property_names ();
      all_pnames.insert (base_pnames.begin (), base_pnames.end ());

      initialized = true;
    }

  return all_pnames;
}

bool
uicontrol::properties::has_readonly_property (const caseless_str& pname)
{
  std::set<std::string> pnames = readonly_property_names ();

  return pnames.find (pname) != pnames.end ();
}

std::set<std::string>
uicontrol::properties::all_property_names (void) const
{
  static std::set<std::string> all_pnames = core_property_names ();

  std::set<std::string> retval = all_pnames;
  std::set<std::string> base_props = base_properties::all_property_names ();
  retval.insert (base_props.begin (), base_props.end ());

  return retval;
}

bool
uicontrol::properties::has_property (const caseless_str& pname) const
{
  std::set<std::string> pnames = all_property_names ();

  return pnames.find (pname) != pnames.end ();
}

// ******** uibuttongroup ********

uibuttongroup::properties::properties (const graphics_handle& mh, const graphics_handle& p)
  : base_properties (go_name, mh, p),
    backgroundcolor ("backgroundcolor", mh, color_values (1, 1, 1)),
    bordertype ("bordertype", mh, "none|{etchedin}|etchedout|beveledin|beveledout|line"),
    borderwidth ("borderwidth", mh, 1),
    clipping ("clipping", mh, "on"),
    fontangle ("fontangle", mh, "{normal}|italic|oblique"),
    fontname ("fontname", mh, OCTAVE_DEFAULT_FONTNAME),
    fontsize ("fontsize", mh, 10),
    fontunits ("fontunits", mh, "inches|centimeters|normalized|{points}|pixels"),
    fontweight ("fontweight", mh, "light|{normal}|demi|bold"),
    foregroundcolor ("foregroundcolor", mh, color_values (0, 0, 0)),
    highlightcolor ("highlightcolor", mh, color_values (1, 1, 1)),
    position ("position", mh, default_panel_position ()),
    resizefcn ("resizefcn", mh, Matrix ()),
    selectedobject ("selectedobject", mh, graphics_handle ()),
    selectionchangedfcn ("selectionchangedfcn", mh, Matrix ()),
    shadowcolor ("shadowcolor", mh, color_values (0, 0, 0)),
    sizechangedfcn ("sizechangedfcn", mh, Matrix ()),
    units ("units", mh, "{normalized}|inches|centimeters|points|pixels|characters"),
    title ("title", mh, ""),
    titleposition ("titleposition", mh, "{lefttop}|centertop|righttop|leftbottom|centerbottom|rightbottom"),
    __object__ ("__object__", mh, Matrix ())
{
  backgroundcolor.set_id (ID_BACKGROUNDCOLOR);
  bordertype.set_id (ID_BORDERTYPE);
  borderwidth.set_id (ID_BORDERWIDTH);
  clipping.set_id (ID_CLIPPING);
  fontangle.set_id (ID_FONTANGLE);
  fontname.set_id (ID_FONTNAME);
  fontsize.set_id (ID_FONTSIZE);
  fontunits.set_id (ID_FONTUNITS);
  fontweight.set_id (ID_FONTWEIGHT);
  foregroundcolor.set_id (ID_FOREGROUNDCOLOR);
  highlightcolor.set_id (ID_HIGHLIGHTCOLOR);
  position.set_id (ID_POSITION);
  resizefcn.set_id (ID_RESIZEFCN);
  selectedobject.set_id (ID_SELECTEDOBJECT);
  selectionchangedfcn.set_id (ID_SELECTIONCHANGEDFCN);
  shadowcolor.set_id (ID_SHADOWCOLOR);
  sizechangedfcn.set_id (ID_SIZECHANGEDFCN);
  units.set_id (ID_UNITS);
  title.set_id (ID_TITLE);
  titleposition.set_id (ID_TITLEPOSITION);
  __object__.set_id (ID___OBJECT__);
  __object__.set_hidden (true);
  init ();
}

void
uibuttongroup::properties::set (const caseless_str& pname_arg, const octave_value& val)
{
  const std::set<std::string>& pnames = all_property_names ();

  caseless_str pname = validate_property_name ("set", go_name, pnames, pname_arg);

  if (has_readonly_property (pname))
    {
      error ("set: \"%s\" is read-only", pname.c_str ());
      return;
    }

  if (pname.compare ("backgroundcolor"))
    set_backgroundcolor (val);
  else if (pname.compare ("bordertype"))
    set_bordertype (val);
  else if (pname.compare ("borderwidth"))
    set_borderwidth (val);
  else if (pname.compare ("clipping"))
    set_clipping (val);
  else if (pname.compare ("fontangle"))
    set_fontangle (val);
  else if (pname.compare ("fontname"))
    set_fontname (val);
  else if (pname.compare ("fontsize"))
    set_fontsize (val);
  else if (pname.compare ("fontunits"))
    set_fontunits (val);
  else if (pname.compare ("fontweight"))
    set_fontweight (val);
  else if (pname.compare ("foregroundcolor"))
    set_foregroundcolor (val);
  else if (pname.compare ("highlightcolor"))
    set_highlightcolor (val);
  else if (pname.compare ("position"))
    set_position (val);
  else if (pname.compare ("resizefcn"))
    set_resizefcn (val);
  else if (pname.compare ("selectedobject"))
    set_selectedobject (val);
  else if (pname.compare ("selectionchangedfcn"))
    set_selectionchangedfcn (val);
  else if (pname.compare ("shadowcolor"))
    set_shadowcolor (val);
  else if (pname.compare ("sizechangedfcn"))
    set_sizechangedfcn (val);
  else if (pname.compare ("units"))
    set_units (val);
  else if (pname.compare ("title"))
    set_title (val);
  else if (pname.compare ("titleposition"))
    set_titleposition (val);
  else if (pname.compare ("__object__"))
    set___object__ (val);
  else
    base_properties::set (pname, val);
}

octave_value
uibuttongroup::properties::get (bool all) const
{
  octave_map m = base_properties::get (all).map_value ();

  m.assign ("backgroundcolor", octave_value (get_backgroundcolor ()));
  m.assign ("bordertype", octave_value (get_bordertype ()));
  m.assign ("borderwidth", octave_value (get_borderwidth ()));
  m.assign ("clipping", octave_value (get_clipping ()));
  m.assign ("fontangle", octave_value (get_fontangle ()));
  m.assign ("fontname", octave_value (get_fontname ()));
  m.assign ("fontsize", octave_value (get_fontsize ()));
  m.assign ("fontunits", octave_value (get_fontunits ()));
  m.assign ("fontweight", octave_value (get_fontweight ()));
  m.assign ("foregroundcolor", octave_value (get_foregroundcolor ()));
  m.assign ("highlightcolor", octave_value (get_highlightcolor ()));
  m.assign ("position", octave_value (get_position ()));
  m.assign ("resizefcn", octave_value (get_resizefcn ()));
  m.assign ("selectedobject", octave_value (get_selectedobject ().as_octave_value ()));
  m.assign ("selectionchangedfcn", octave_value (get_selectionchangedfcn ()));
  m.assign ("shadowcolor", octave_value (get_shadowcolor ()));
  m.assign ("sizechangedfcn", octave_value (get_sizechangedfcn ()));
  m.assign ("units", octave_value (get_units ()));
  m.assign ("title", octave_value (get_title ()));
  m.assign ("titleposition", octave_value (get_titleposition ()));
  if (all)
    m.assign ("__object__", octave_value (get___object__ ()));

  return m;
}

octave_value
uibuttongroup::properties::get (const caseless_str& pname_arg) const
{
  octave_value retval;

  const std::set<std::string>& pnames = all_property_names ();

  caseless_str pname = validate_property_name ("get", go_name, pnames, pname_arg);

  if (pname.compare ("backgroundcolor"))
    retval = get_backgroundcolor ();
  else if (pname.compare ("bordertype"))
    retval = get_bordertype ();
  else if (pname.compare ("borderwidth"))
    retval = get_borderwidth ();
  else if (pname.compare ("clipping"))
    retval = get_clipping ();
  else if (pname.compare ("fontangle"))
    retval = get_fontangle ();
  else if (pname.compare ("fontname"))
    retval = get_fontname ();
  else if (pname.compare ("fontsize"))
    retval = get_fontsize ();
  else if (pname.compare ("fontunits"))
    retval = get_fontunits ();
  else if (pname.compare ("fontweight"))
    retval = get_fontweight ();
  else if (pname.compare ("foregroundcolor"))
    retval = get_foregroundcolor ();
  else if (pname.compare ("highlightcolor"))
    retval = get_highlightcolor ();
  else if (pname.compare ("position"))
    retval = get_position ();
  else if (pname.compare ("resizefcn"))
    retval = get_resizefcn ();
  else if (pname.compare ("selectedobject"))
    retval = get_selectedobject ().as_octave_value ();
  else if (pname.compare ("selectionchangedfcn"))
    retval = get_selectionchangedfcn ();
  else if (pname.compare ("shadowcolor"))
    retval = get_shadowcolor ();
  else if (pname.compare ("sizechangedfcn"))
    retval = get_sizechangedfcn ();
  else if (pname.compare ("units"))
    retval = get_units ();
  else if (pname.compare ("title"))
    retval = get_title ();
  else if (pname.compare ("titleposition"))
    retval = get_titleposition ();
  else if (pname.compare ("__object__"))
    retval = get___object__ ();
  else
    retval = base_properties::get (pname);

  return retval;
}

property
uibuttongroup::properties::get_property (const caseless_str& pname_arg)
{
  const std::set<std::string>& pnames = all_property_names ();

  caseless_str pname = validate_property_name ("get", go_name, pnames, pname_arg);

  if (pname.compare ("backgroundcolor"))
    return property (&backgroundcolor, true);
  else if (pname.compare ("bordertype"))
    return property (&bordertype, true);
  else if (pname.compare ("borderwidth"))
    return property (&borderwidth, true);
  else if (pname.compare ("clipping"))
    return property (&clipping, true);
  else if (pname.compare ("fontangle"))
    return property (&fontangle, true);
  else if (pname.compare ("fontname"))
    return property (&fontname, true);
  else if (pname.compare ("fontsize"))
    return property (&fontsize, true);
  else if (pname.compare ("fontunits"))
    return property (&fontunits, true);
  else if (pname.compare ("fontweight"))
    return property (&fontweight, true);
  else if (pname.compare ("foregroundcolor"))
    return property (&foregroundcolor, true);
  else if (pname.compare ("highlightcolor"))
    return property (&highlightcolor, true);
  else if (pname.compare ("position"))
    return property (&position, true);
  else if (pname.compare ("resizefcn"))
    return property (&resizefcn, true);
  else if (pname.compare ("selectedobject"))
    return property (&selectedobject, true);
  else if (pname.compare ("selectionchangedfcn"))
    return property (&selectionchangedfcn, true);
  else if (pname.compare ("shadowcolor"))
    return property (&shadowcolor, true);
  else if (pname.compare ("sizechangedfcn"))
    return property (&sizechangedfcn, true);
  else if (pname.compare ("units"))
    return property (&units, true);
  else if (pname.compare ("title"))
    return property (&title, true);
  else if (pname.compare ("titleposition"))
    return property (&titleposition, true);
  else if (pname.compare ("__object__"))
    return property (&__object__, true);
  else
    return base_properties::get_property (pname);
}

property_list::pval_map_type
uibuttongroup::properties::factory_defaults (void)
{
  property_list::pval_map_type m = base_properties::factory_defaults ();

  m["backgroundcolor"] = color_values (1, 1, 1);
  m["bordertype"] = "etchedin";
  m["borderwidth"] = 1;
  m["clipping"] = "on";
  m["fontangle"] = "normal";
  m["fontname"] = OCTAVE_DEFAULT_FONTNAME;
  m["fontsize"] = 10;
  m["fontunits"] = "points";
  m["fontweight"] = "normal";
  m["foregroundcolor"] = color_values (0, 0, 0);
  m["highlightcolor"] = color_values (1, 1, 1);
  m["position"] = default_panel_position ();
  m["resizefcn"] = Matrix ();
  m["selectedobject"] = graphics_handle ().as_octave_value ();
  m["selectionchangedfcn"] = Matrix ();
  m["shadowcolor"] = color_values (0, 0, 0);
  m["sizechangedfcn"] = Matrix ();
  m["units"] = "normalized";
  m["title"] = "";
  m["titleposition"] = "lefttop";
  m["__object__"] = Matrix ();

  return m;
}

std::string uibuttongroup::properties::go_name ("uibuttongroup");

std::set<std::string>
uibuttongroup::properties::core_property_names (void)
{
  static std::set<std::string> all_pnames;

  static bool initialized = false;

  if (! initialized)
    {
      all_pnames.insert ("backgroundcolor");
      all_pnames.insert ("bordertype");
      all_pnames.insert ("borderwidth");
      all_pnames.insert ("clipping");
      all_pnames.insert ("fontangle");
      all_pnames.insert ("fontname");
      all_pnames.insert ("fontsize");
      all_pnames.insert ("fontunits");
      all_pnames.insert ("fontweight");
      all_pnames.insert ("foregroundcolor");
      all_pnames.insert ("highlightcolor");
      all_pnames.insert ("position");
      all_pnames.insert ("resizefcn");
      all_pnames.insert ("selectedobject");
      all_pnames.insert ("selectionchangedfcn");
      all_pnames.insert ("shadowcolor");
      all_pnames.insert ("sizechangedfcn");
      all_pnames.insert ("units");
      all_pnames.insert ("title");
      all_pnames.insert ("titleposition");
      all_pnames.insert ("__object__");

      std::set<std::string> base_pnames = base_properties::core_property_names ();
      all_pnames.insert (base_pnames.begin (), base_pnames.end ());

      initialized = true;
    }

  return all_pnames;
}

bool
uibuttongroup::properties::has_core_property (const caseless_str& pname)
{
  std::set<std::string> pnames = core_property_names ();

  return pnames.find (pname) != pnames.end ();
}

std::set<std::string>
uibuttongroup::properties::readonly_property_names (void)
{
  static std::set<std::string> all_pnames;

  static bool initialized = false;

  if (! initialized)
    {

      std::set<std::string> base_pnames = base_properties::readonly_property_names ();
      all_pnames.insert (base_pnames.begin (), base_pnames.end ());

      initialized = true;
    }

  return all_pnames;
}

bool
uibuttongroup::properties::has_readonly_property (const caseless_str& pname)
{
  std::set<std::string> pnames = readonly_property_names ();

  return pnames.find (pname) != pnames.end ();
}

std::set<std::string>
uibuttongroup::properties::all_property_names (void) const
{
  static std::set<std::string> all_pnames = core_property_names ();

  std::set<std::string> retval = all_pnames;
  std::set<std::string> base_props = base_properties::all_property_names ();
  retval.insert (base_props.begin (), base_props.end ());

  return retval;
}

bool
uibuttongroup::properties::has_property (const caseless_str& pname) const
{
  std::set<std::string> pnames = all_property_names ();

  return pnames.find (pname) != pnames.end ();
}

// ******** uipanel ********

uipanel::properties::properties (const graphics_handle& mh, const graphics_handle& p)
  : base_properties (go_name, mh, p),
    backgroundcolor ("backgroundcolor", mh, color_values (1, 1, 1)),
    bordertype ("bordertype", mh, "none|{etchedin}|etchedout|beveledin|beveledout|line"),
    borderwidth ("borderwidth", mh, 1),
    fontangle ("fontangle", mh, "{normal}|italic|oblique"),
    fontname ("fontname", mh, OCTAVE_DEFAULT_FONTNAME),
    fontsize ("fontsize", mh, 10),
    fontunits ("fontunits", mh, "inches|centimeters|normalized|{points}|pixels"),
    fontweight ("fontweight", mh, "light|{normal}|demi|bold"),
    foregroundcolor ("foregroundcolor", mh, color_values (0, 0, 0)),
    highlightcolor ("highlightcolor", mh, color_values (1, 1, 1)),
    position ("position", mh, default_panel_position ()),
    resizefcn ("resizefcn", mh, Matrix ()),
    shadowcolor ("shadowcolor", mh, color_values (0, 0, 0)),
    title ("title", mh, ""),
    titleposition ("titleposition", mh, "{lefttop}|centertop|righttop|leftbottom|centerbottom|rightbottom"),
    units ("units", mh, "{normalized}|inches|centimeters|points|pixels|characters"),
    __object__ ("__object__", mh, Matrix ())
{
  backgroundcolor.set_id (ID_BACKGROUNDCOLOR);
  bordertype.set_id (ID_BORDERTYPE);
  borderwidth.set_id (ID_BORDERWIDTH);
  fontangle.set_id (ID_FONTANGLE);
  fontname.set_id (ID_FONTNAME);
  fontsize.set_id (ID_FONTSIZE);
  fontunits.set_id (ID_FONTUNITS);
  fontweight.set_id (ID_FONTWEIGHT);
  foregroundcolor.set_id (ID_FOREGROUNDCOLOR);
  highlightcolor.set_id (ID_HIGHLIGHTCOLOR);
  position.set_id (ID_POSITION);
  resizefcn.set_id (ID_RESIZEFCN);
  shadowcolor.set_id (ID_SHADOWCOLOR);
  title.set_id (ID_TITLE);
  titleposition.set_id (ID_TITLEPOSITION);
  units.set_id (ID_UNITS);
  __object__.set_id (ID___OBJECT__);
  __object__.set_hidden (true);
  init ();
}

void
uipanel::properties::set (const caseless_str& pname_arg, const octave_value& val)
{
  const std::set<std::string>& pnames = all_property_names ();

  caseless_str pname = validate_property_name ("set", go_name, pnames, pname_arg);

  if (has_readonly_property (pname))
    {
      error ("set: \"%s\" is read-only", pname.c_str ());
      return;
    }

  if (pname.compare ("backgroundcolor"))
    set_backgroundcolor (val);
  else if (pname.compare ("bordertype"))
    set_bordertype (val);
  else if (pname.compare ("borderwidth"))
    set_borderwidth (val);
  else if (pname.compare ("fontangle"))
    set_fontangle (val);
  else if (pname.compare ("fontname"))
    set_fontname (val);
  else if (pname.compare ("fontsize"))
    set_fontsize (val);
  else if (pname.compare ("fontunits"))
    set_fontunits (val);
  else if (pname.compare ("fontweight"))
    set_fontweight (val);
  else if (pname.compare ("foregroundcolor"))
    set_foregroundcolor (val);
  else if (pname.compare ("highlightcolor"))
    set_highlightcolor (val);
  else if (pname.compare ("position"))
    set_position (val);
  else if (pname.compare ("resizefcn"))
    set_resizefcn (val);
  else if (pname.compare ("shadowcolor"))
    set_shadowcolor (val);
  else if (pname.compare ("title"))
    set_title (val);
  else if (pname.compare ("titleposition"))
    set_titleposition (val);
  else if (pname.compare ("units"))
    set_units (val);
  else if (pname.compare ("__object__"))
    set___object__ (val);
  else
    base_properties::set (pname, val);
}

octave_value
uipanel::properties::get (bool all) const
{
  octave_map m = base_properties::get (all).map_value ();

  m.assign ("backgroundcolor", octave_value (get_backgroundcolor ()));
  m.assign ("bordertype", octave_value (get_bordertype ()));
  m.assign ("borderwidth", octave_value (get_borderwidth ()));
  m.assign ("fontangle", octave_value (get_fontangle ()));
  m.assign ("fontname", octave_value (get_fontname ()));
  m.assign ("fontsize", octave_value (get_fontsize ()));
  m.assign ("fontunits", octave_value (get_fontunits ()));
  m.assign ("fontweight", octave_value (get_fontweight ()));
  m.assign ("foregroundcolor", octave_value (get_foregroundcolor ()));
  m.assign ("highlightcolor", octave_value (get_highlightcolor ()));
  m.assign ("position", octave_value (get_position ()));
  m.assign ("resizefcn", octave_value (get_resizefcn ()));
  m.assign ("shadowcolor", octave_value (get_shadowcolor ()));
  m.assign ("title", octave_value (get_title ()));
  m.assign ("titleposition", octave_value (get_titleposition ()));
  m.assign ("units", octave_value (get_units ()));
  if (all)
    m.assign ("__object__", octave_value (get___object__ ()));

  return m;
}

octave_value
uipanel::properties::get (const caseless_str& pname_arg) const
{
  octave_value retval;

  const std::set<std::string>& pnames = all_property_names ();

  caseless_str pname = validate_property_name ("get", go_name, pnames, pname_arg);

  if (pname.compare ("backgroundcolor"))
    retval = get_backgroundcolor ();
  else if (pname.compare ("bordertype"))
    retval = get_bordertype ();
  else if (pname.compare ("borderwidth"))
    retval = get_borderwidth ();
  else if (pname.compare ("fontangle"))
    retval = get_fontangle ();
  else if (pname.compare ("fontname"))
    retval = get_fontname ();
  else if (pname.compare ("fontsize"))
    retval = get_fontsize ();
  else if (pname.compare ("fontunits"))
    retval = get_fontunits ();
  else if (pname.compare ("fontweight"))
    retval = get_fontweight ();
  else if (pname.compare ("foregroundcolor"))
    retval = get_foregroundcolor ();
  else if (pname.compare ("highlightcolor"))
    retval = get_highlightcolor ();
  else if (pname.compare ("position"))
    retval = get_position ();
  else if (pname.compare ("resizefcn"))
    retval = get_resizefcn ();
  else if (pname.compare ("shadowcolor"))
    retval = get_shadowcolor ();
  else if (pname.compare ("title"))
    retval = get_title ();
  else if (pname.compare ("titleposition"))
    retval = get_titleposition ();
  else if (pname.compare ("units"))
    retval = get_units ();
  else if (pname.compare ("__object__"))
    retval = get___object__ ();
  else
    retval = base_properties::get (pname);

  return retval;
}

property
uipanel::properties::get_property (const caseless_str& pname_arg)
{
  const std::set<std::string>& pnames = all_property_names ();

  caseless_str pname = validate_property_name ("get", go_name, pnames, pname_arg);

  if (pname.compare ("backgroundcolor"))
    return property (&backgroundcolor, true);
  else if (pname.compare ("bordertype"))
    return property (&bordertype, true);
  else if (pname.compare ("borderwidth"))
    return property (&borderwidth, true);
  else if (pname.compare ("fontangle"))
    return property (&fontangle, true);
  else if (pname.compare ("fontname"))
    return property (&fontname, true);
  else if (pname.compare ("fontsize"))
    return property (&fontsize, true);
  else if (pname.compare ("fontunits"))
    return property (&fontunits, true);
  else if (pname.compare ("fontweight"))
    return property (&fontweight, true);
  else if (pname.compare ("foregroundcolor"))
    return property (&foregroundcolor, true);
  else if (pname.compare ("highlightcolor"))
    return property (&highlightcolor, true);
  else if (pname.compare ("position"))
    return property (&position, true);
  else if (pname.compare ("resizefcn"))
    return property (&resizefcn, true);
  else if (pname.compare ("shadowcolor"))
    return property (&shadowcolor, true);
  else if (pname.compare ("title"))
    return property (&title, true);
  else if (pname.compare ("titleposition"))
    return property (&titleposition, true);
  else if (pname.compare ("units"))
    return property (&units, true);
  else if (pname.compare ("__object__"))
    return property (&__object__, true);
  else
    return base_properties::get_property (pname);
}

property_list::pval_map_type
uipanel::properties::factory_defaults (void)
{
  property_list::pval_map_type m = base_properties::factory_defaults ();

  m["backgroundcolor"] = color_values (1, 1, 1);
  m["bordertype"] = "etchedin";
  m["borderwidth"] = 1;
  m["fontangle"] = "normal";
  m["fontname"] = OCTAVE_DEFAULT_FONTNAME;
  m["fontsize"] = 10;
  m["fontunits"] = "points";
  m["fontweight"] = "normal";
  m["foregroundcolor"] = color_values (0, 0, 0);
  m["highlightcolor"] = color_values (1, 1, 1);
  m["position"] = default_panel_position ();
  m["resizefcn"] = Matrix ();
  m["shadowcolor"] = color_values (0, 0, 0);
  m["title"] = "";
  m["titleposition"] = "lefttop";
  m["units"] = "normalized";
  m["__object__"] = Matrix ();

  return m;
}

std::string uipanel::properties::go_name ("uipanel");

std::set<std::string>
uipanel::properties::core_property_names (void)
{
  static std::set<std::string> all_pnames;

  static bool initialized = false;

  if (! initialized)
    {
      all_pnames.insert ("backgroundcolor");
      all_pnames.insert ("bordertype");
      all_pnames.insert ("borderwidth");
      all_pnames.insert ("fontangle");
      all_pnames.insert ("fontname");
      all_pnames.insert ("fontsize");
      all_pnames.insert ("fontunits");
      all_pnames.insert ("fontweight");
      all_pnames.insert ("foregroundcolor");
      all_pnames.insert ("highlightcolor");
      all_pnames.insert ("position");
      all_pnames.insert ("resizefcn");
      all_pnames.insert ("shadowcolor");
      all_pnames.insert ("title");
      all_pnames.insert ("titleposition");
      all_pnames.insert ("units");
      all_pnames.insert ("__object__");

      std::set<std::string> base_pnames = base_properties::core_property_names ();
      all_pnames.insert (base_pnames.begin (), base_pnames.end ());

      initialized = true;
    }

  return all_pnames;
}

bool
uipanel::properties::has_core_property (const caseless_str& pname)
{
  std::set<std::string> pnames = core_property_names ();

  return pnames.find (pname) != pnames.end ();
}

std::set<std::string>
uipanel::properties::readonly_property_names (void)
{
  static std::set<std::string> all_pnames;

  static bool initialized = false;

  if (! initialized)
    {

      std::set<std::string> base_pnames = base_properties::readonly_property_names ();
      all_pnames.insert (base_pnames.begin (), base_pnames.end ());

      initialized = true;
    }

  return all_pnames;
}

bool
uipanel::properties::has_readonly_property (const caseless_str& pname)
{
  std::set<std::string> pnames = readonly_property_names ();

  return pnames.find (pname) != pnames.end ();
}

std::set<std::string>
uipanel::properties::all_property_names (void) const
{
  static std::set<std::string> all_pnames = core_property_names ();

  std::set<std::string> retval = all_pnames;
  std::set<std::string> base_props = base_properties::all_property_names ();
  retval.insert (base_props.begin (), base_props.end ());

  return retval;
}

bool
uipanel::properties::has_property (const caseless_str& pname) const
{
  std::set<std::string> pnames = all_property_names ();

  return pnames.find (pname) != pnames.end ();
}

// ******** uitoolbar ********

uitoolbar::properties::properties (const graphics_handle& mh, const graphics_handle& p)
  : base_properties (go_name, mh, p),
    __object__ ("__object__", mh, Matrix ())
{
  __object__.set_id (ID___OBJECT__);
  __object__.set_hidden (true);
  init ();
}

void
uitoolbar::properties::set (const caseless_str& pname_arg, const octave_value& val)
{
  const std::set<std::string>& pnames = all_property_names ();

  caseless_str pname = validate_property_name ("set", go_name, pnames, pname_arg);

  if (has_readonly_property (pname))
    {
      error ("set: \"%s\" is read-only", pname.c_str ());
      return;
    }

  if (pname.compare ("__object__"))
    set___object__ (val);
  else
    base_properties::set (pname, val);
}

octave_value
uitoolbar::properties::get (bool all) const
{
  octave_map m = base_properties::get (all).map_value ();

  if (all)
    m.assign ("__object__", octave_value (get___object__ ()));

  return m;
}

octave_value
uitoolbar::properties::get (const caseless_str& pname_arg) const
{
  octave_value retval;

  const std::set<std::string>& pnames = all_property_names ();

  caseless_str pname = validate_property_name ("get", go_name, pnames, pname_arg);

  if (pname.compare ("__object__"))
    retval = get___object__ ();
  else
    retval = base_properties::get (pname);

  return retval;
}

property
uitoolbar::properties::get_property (const caseless_str& pname_arg)
{
  const std::set<std::string>& pnames = all_property_names ();

  caseless_str pname = validate_property_name ("get", go_name, pnames, pname_arg);

  if (pname.compare ("__object__"))
    return property (&__object__, true);
  else
    return base_properties::get_property (pname);
}

property_list::pval_map_type
uitoolbar::properties::factory_defaults (void)
{
  property_list::pval_map_type m = base_properties::factory_defaults ();

  m["__object__"] = Matrix ();

  return m;
}

std::string uitoolbar::properties::go_name ("uitoolbar");

std::set<std::string>
uitoolbar::properties::core_property_names (void)
{
  static std::set<std::string> all_pnames;

  static bool initialized = false;

  if (! initialized)
    {
      all_pnames.insert ("__object__");

      std::set<std::string> base_pnames = base_properties::core_property_names ();
      all_pnames.insert (base_pnames.begin (), base_pnames.end ());

      initialized = true;
    }

  return all_pnames;
}

bool
uitoolbar::properties::has_core_property (const caseless_str& pname)
{
  std::set<std::string> pnames = core_property_names ();

  return pnames.find (pname) != pnames.end ();
}

std::set<std::string>
uitoolbar::properties::readonly_property_names (void)
{
  static std::set<std::string> all_pnames;

  static bool initialized = false;

  if (! initialized)
    {

      std::set<std::string> base_pnames = base_properties::readonly_property_names ();
      all_pnames.insert (base_pnames.begin (), base_pnames.end ());

      initialized = true;
    }

  return all_pnames;
}

bool
uitoolbar::properties::has_readonly_property (const caseless_str& pname)
{
  std::set<std::string> pnames = readonly_property_names ();

  return pnames.find (pname) != pnames.end ();
}

std::set<std::string>
uitoolbar::properties::all_property_names (void) const
{
  static std::set<std::string> all_pnames = core_property_names ();

  std::set<std::string> retval = all_pnames;
  std::set<std::string> base_props = base_properties::all_property_names ();
  retval.insert (base_props.begin (), base_props.end ());

  return retval;
}

bool
uitoolbar::properties::has_property (const caseless_str& pname) const
{
  std::set<std::string> pnames = all_property_names ();

  return pnames.find (pname) != pnames.end ();
}

// ******** uipushtool ********

uipushtool::properties::properties (const graphics_handle& mh, const graphics_handle& p)
  : base_properties (go_name, mh, p),
    cdata ("cdata", mh, Matrix ()),
    clickedcallback ("clickedcallback", mh, Matrix ()),
    enable ("enable", mh, "on"),
    separator ("separator", mh, "off"),
    tooltipstring ("tooltipstring", mh, ""),
    __object__ ("__object__", mh, Matrix ())
{
  cdata.set_id (ID_CDATA);
  clickedcallback.set_id (ID_CLICKEDCALLBACK);
  enable.set_id (ID_ENABLE);
  separator.set_id (ID_SEPARATOR);
  tooltipstring.set_id (ID_TOOLTIPSTRING);
  __object__.set_id (ID___OBJECT__);
  __object__.set_hidden (true);
  init ();
}

void
uipushtool::properties::set (const caseless_str& pname_arg, const octave_value& val)
{
  const std::set<std::string>& pnames = all_property_names ();

  caseless_str pname = validate_property_name ("set", go_name, pnames, pname_arg);

  if (has_readonly_property (pname))
    {
      error ("set: \"%s\" is read-only", pname.c_str ());
      return;
    }

  if (pname.compare ("cdata"))
    set_cdata (val);
  else if (pname.compare ("clickedcallback"))
    set_clickedcallback (val);
  else if (pname.compare ("enable"))
    set_enable (val);
  else if (pname.compare ("separator"))
    set_separator (val);
  else if (pname.compare ("tooltipstring"))
    set_tooltipstring (val);
  else if (pname.compare ("__object__"))
    set___object__ (val);
  else
    base_properties::set (pname, val);
}

octave_value
uipushtool::properties::get (bool all) const
{
  octave_map m = base_properties::get (all).map_value ();

  m.assign ("cdata", octave_value (get_cdata ()));
  m.assign ("clickedcallback", octave_value (get_clickedcallback ()));
  m.assign ("enable", octave_value (get_enable ()));
  m.assign ("separator", octave_value (get_separator ()));
  m.assign ("tooltipstring", octave_value (get_tooltipstring ()));
  if (all)
    m.assign ("__object__", octave_value (get___object__ ()));

  return m;
}

octave_value
uipushtool::properties::get (const caseless_str& pname_arg) const
{
  octave_value retval;

  const std::set<std::string>& pnames = all_property_names ();

  caseless_str pname = validate_property_name ("get", go_name, pnames, pname_arg);

  if (pname.compare ("cdata"))
    retval = get_cdata ();
  else if (pname.compare ("clickedcallback"))
    retval = get_clickedcallback ();
  else if (pname.compare ("enable"))
    retval = get_enable ();
  else if (pname.compare ("separator"))
    retval = get_separator ();
  else if (pname.compare ("tooltipstring"))
    retval = get_tooltipstring ();
  else if (pname.compare ("__object__"))
    retval = get___object__ ();
  else
    retval = base_properties::get (pname);

  return retval;
}

property
uipushtool::properties::get_property (const caseless_str& pname_arg)
{
  const std::set<std::string>& pnames = all_property_names ();

  caseless_str pname = validate_property_name ("get", go_name, pnames, pname_arg);

  if (pname.compare ("cdata"))
    return property (&cdata, true);
  else if (pname.compare ("clickedcallback"))
    return property (&clickedcallback, true);
  else if (pname.compare ("enable"))
    return property (&enable, true);
  else if (pname.compare ("separator"))
    return property (&separator, true);
  else if (pname.compare ("tooltipstring"))
    return property (&tooltipstring, true);
  else if (pname.compare ("__object__"))
    return property (&__object__, true);
  else
    return base_properties::get_property (pname);
}

property_list::pval_map_type
uipushtool::properties::factory_defaults (void)
{
  property_list::pval_map_type m = base_properties::factory_defaults ();

  m["cdata"] = Matrix ();
  m["clickedcallback"] = Matrix ();
  m["enable"] = "on";
  m["separator"] = "off";
  m["tooltipstring"] = "";
  m["__object__"] = Matrix ();

  return m;
}

std::string uipushtool::properties::go_name ("uipushtool");

std::set<std::string>
uipushtool::properties::core_property_names (void)
{
  static std::set<std::string> all_pnames;

  static bool initialized = false;

  if (! initialized)
    {
      all_pnames.insert ("cdata");
      all_pnames.insert ("clickedcallback");
      all_pnames.insert ("enable");
      all_pnames.insert ("separator");
      all_pnames.insert ("tooltipstring");
      all_pnames.insert ("__object__");

      std::set<std::string> base_pnames = base_properties::core_property_names ();
      all_pnames.insert (base_pnames.begin (), base_pnames.end ());

      initialized = true;
    }

  return all_pnames;
}

bool
uipushtool::properties::has_core_property (const caseless_str& pname)
{
  std::set<std::string> pnames = core_property_names ();

  return pnames.find (pname) != pnames.end ();
}

std::set<std::string>
uipushtool::properties::readonly_property_names (void)
{
  static std::set<std::string> all_pnames;

  static bool initialized = false;

  if (! initialized)
    {

      std::set<std::string> base_pnames = base_properties::readonly_property_names ();
      all_pnames.insert (base_pnames.begin (), base_pnames.end ());

      initialized = true;
    }

  return all_pnames;
}

bool
uipushtool::properties::has_readonly_property (const caseless_str& pname)
{
  std::set<std::string> pnames = readonly_property_names ();

  return pnames.find (pname) != pnames.end ();
}

std::set<std::string>
uipushtool::properties::all_property_names (void) const
{
  static std::set<std::string> all_pnames = core_property_names ();

  std::set<std::string> retval = all_pnames;
  std::set<std::string> base_props = base_properties::all_property_names ();
  retval.insert (base_props.begin (), base_props.end ());

  return retval;
}

bool
uipushtool::properties::has_property (const caseless_str& pname) const
{
  std::set<std::string> pnames = all_property_names ();

  return pnames.find (pname) != pnames.end ();
}

// ******** uitoggletool ********

uitoggletool::properties::properties (const graphics_handle& mh, const graphics_handle& p)
  : base_properties (go_name, mh, p),
    cdata ("cdata", mh, Matrix ()),
    clickedcallback ("clickedcallback", mh, Matrix ()),
    enable ("enable", mh, "on"),
    offcallback ("offcallback", mh, Matrix ()),
    oncallback ("oncallback", mh, Matrix ()),
    separator ("separator", mh, "off"),
    state ("state", mh, "off"),
    tooltipstring ("tooltipstring", mh, ""),
    __object__ ("__object__", mh, Matrix ())
{
  cdata.set_id (ID_CDATA);
  clickedcallback.set_id (ID_CLICKEDCALLBACK);
  enable.set_id (ID_ENABLE);
  offcallback.set_id (ID_OFFCALLBACK);
  oncallback.set_id (ID_ONCALLBACK);
  separator.set_id (ID_SEPARATOR);
  state.set_id (ID_STATE);
  tooltipstring.set_id (ID_TOOLTIPSTRING);
  __object__.set_id (ID___OBJECT__);
  __object__.set_hidden (true);
  init ();
}

void
uitoggletool::properties::set (const caseless_str& pname_arg, const octave_value& val)
{
  const std::set<std::string>& pnames = all_property_names ();

  caseless_str pname = validate_property_name ("set", go_name, pnames, pname_arg);

  if (has_readonly_property (pname))
    {
      error ("set: \"%s\" is read-only", pname.c_str ());
      return;
    }

  if (pname.compare ("cdata"))
    set_cdata (val);
  else if (pname.compare ("clickedcallback"))
    set_clickedcallback (val);
  else if (pname.compare ("enable"))
    set_enable (val);
  else if (pname.compare ("offcallback"))
    set_offcallback (val);
  else if (pname.compare ("oncallback"))
    set_oncallback (val);
  else if (pname.compare ("separator"))
    set_separator (val);
  else if (pname.compare ("state"))
    set_state (val);
  else if (pname.compare ("tooltipstring"))
    set_tooltipstring (val);
  else if (pname.compare ("__object__"))
    set___object__ (val);
  else
    base_properties::set (pname, val);
}

octave_value
uitoggletool::properties::get (bool all) const
{
  octave_map m = base_properties::get (all).map_value ();

  m.assign ("cdata", octave_value (get_cdata ()));
  m.assign ("clickedcallback", octave_value (get_clickedcallback ()));
  m.assign ("enable", octave_value (get_enable ()));
  m.assign ("offcallback", octave_value (get_offcallback ()));
  m.assign ("oncallback", octave_value (get_oncallback ()));
  m.assign ("separator", octave_value (get_separator ()));
  m.assign ("state", octave_value (get_state ()));
  m.assign ("tooltipstring", octave_value (get_tooltipstring ()));
  if (all)
    m.assign ("__object__", octave_value (get___object__ ()));

  return m;
}

octave_value
uitoggletool::properties::get (const caseless_str& pname_arg) const
{
  octave_value retval;

  const std::set<std::string>& pnames = all_property_names ();

  caseless_str pname = validate_property_name ("get", go_name, pnames, pname_arg);

  if (pname.compare ("cdata"))
    retval = get_cdata ();
  else if (pname.compare ("clickedcallback"))
    retval = get_clickedcallback ();
  else if (pname.compare ("enable"))
    retval = get_enable ();
  else if (pname.compare ("offcallback"))
    retval = get_offcallback ();
  else if (pname.compare ("oncallback"))
    retval = get_oncallback ();
  else if (pname.compare ("separator"))
    retval = get_separator ();
  else if (pname.compare ("state"))
    retval = get_state ();
  else if (pname.compare ("tooltipstring"))
    retval = get_tooltipstring ();
  else if (pname.compare ("__object__"))
    retval = get___object__ ();
  else
    retval = base_properties::get (pname);

  return retval;
}

property
uitoggletool::properties::get_property (const caseless_str& pname_arg)
{
  const std::set<std::string>& pnames = all_property_names ();

  caseless_str pname = validate_property_name ("get", go_name, pnames, pname_arg);

  if (pname.compare ("cdata"))
    return property (&cdata, true);
  else if (pname.compare ("clickedcallback"))
    return property (&clickedcallback, true);
  else if (pname.compare ("enable"))
    return property (&enable, true);
  else if (pname.compare ("offcallback"))
    return property (&offcallback, true);
  else if (pname.compare ("oncallback"))
    return property (&oncallback, true);
  else if (pname.compare ("separator"))
    return property (&separator, true);
  else if (pname.compare ("state"))
    return property (&state, true);
  else if (pname.compare ("tooltipstring"))
    return property (&tooltipstring, true);
  else if (pname.compare ("__object__"))
    return property (&__object__, true);
  else
    return base_properties::get_property (pname);
}

property_list::pval_map_type
uitoggletool::properties::factory_defaults (void)
{
  property_list::pval_map_type m = base_properties::factory_defaults ();

  m["cdata"] = Matrix ();
  m["clickedcallback"] = Matrix ();
  m["enable"] = "on";
  m["offcallback"] = Matrix ();
  m["oncallback"] = Matrix ();
  m["separator"] = "off";
  m["state"] = "off";
  m["tooltipstring"] = "";
  m["__object__"] = Matrix ();

  return m;
}

std::string uitoggletool::properties::go_name ("uitoggletool");

std::set<std::string>
uitoggletool::properties::core_property_names (void)
{
  static std::set<std::string> all_pnames;

  static bool initialized = false;

  if (! initialized)
    {
      all_pnames.insert ("cdata");
      all_pnames.insert ("clickedcallback");
      all_pnames.insert ("enable");
      all_pnames.insert ("offcallback");
      all_pnames.insert ("oncallback");
      all_pnames.insert ("separator");
      all_pnames.insert ("state");
      all_pnames.insert ("tooltipstring");
      all_pnames.insert ("__object__");

      std::set<std::string> base_pnames = base_properties::core_property_names ();
      all_pnames.insert (base_pnames.begin (), base_pnames.end ());

      initialized = true;
    }

  return all_pnames;
}

bool
uitoggletool::properties::has_core_property (const caseless_str& pname)
{
  std::set<std::string> pnames = core_property_names ();

  return pnames.find (pname) != pnames.end ();
}

std::set<std::string>
uitoggletool::properties::readonly_property_names (void)
{
  static std::set<std::string> all_pnames;

  static bool initialized = false;

  if (! initialized)
    {

      std::set<std::string> base_pnames = base_properties::readonly_property_names ();
      all_pnames.insert (base_pnames.begin (), base_pnames.end ());

      initialized = true;
    }

  return all_pnames;
}

bool
uitoggletool::properties::has_readonly_property (const caseless_str& pname)
{
  std::set<std::string> pnames = readonly_property_names ();

  return pnames.find (pname) != pnames.end ();
}

std::set<std::string>
uitoggletool::properties::all_property_names (void) const
{
  static std::set<std::string> all_pnames = core_property_names ();

  std::set<std::string> retval = all_pnames;
  std::set<std::string> base_props = base_properties::all_property_names ();
  retval.insert (base_props.begin (), base_props.end ());

  return retval;
}

bool
uitoggletool::properties::has_property (const caseless_str& pname) const
{
  std::set<std::string> pnames = all_property_names ();

  return pnames.find (pname) != pnames.end ();
}

