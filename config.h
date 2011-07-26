static const char font[]        = "-artwiz-cureextra-medium-r-normal--11-110-75-75-p-90-iso8859-1";
static const char xtermfont[]   = "-nsb-lokaltog-medium-r-normal--10-100-75-75-c-60-iso10646-1";
static const char homepage[]    = "www.google.de";
static const char normbgcolor[] = "#000000"; 
static const char normfgcolor[] = "#ffffff";
static const char selbgcolor[]  = "#000000";
static const char selfgcolor[]  = "#00aaff";
static const char before[]      = "<";
static const char after[]       = ">";
static const int  tabwidth      = 200;
static const Bool foreground   = False;

static const char *termtab[]  = { "xterm", "-bc", "-bg", selbgcolor, "-cr" ,selfgcolor, "-fg", selfgcolor, "-fn", xtermfont, "-into", winid, NULL };
static const char *surftab[]  = {  "surf", "-e", winid, homepage, NULL};

#define MODKEY Mod4Mask
static Key keys[] = { \
	/* modifier                     key        function        argument */
	{ MODKEY|ShiftMask,             XK_Return, focusonce,      { 0 } },
	{ MODKEY,                       XK_Return, spawn,          { .v = surftab } },
	{ MODKEY|ShiftMask,             XK_Return, spawn,          { .v = termtab } },
	{ MODKEY,                       XK_Right,  rotate,         { .i = +1 } },
	{ MODKEY,                       XK_Left,   rotate,         { .i = -1 } },
	{ MODKEY,                       XK_Tab,    rotate,         { .i = 0 } },
	{ MODKEY,                       XK_1,      move,           { .i = 0 } },
	{ MODKEY,                       XK_2,      move,           { .i = 1 } },
	{ MODKEY,                       XK_3,      move,           { .i = 2 } },
	{ MODKEY,                       XK_4,      move,           { .i = 3 } },
	{ MODKEY,                       XK_5,      move,           { .i = 4 } },
	{ MODKEY,                       XK_6,      move,           { .i = 5 } },
	{ MODKEY,                       XK_7,      move,           { .i = 6 } },
	{ MODKEY,                       XK_8,      move,           { .i = 7 } },
	{ MODKEY,                       XK_9,      move,           { .i = 8 } },
	{ MODKEY,                       XK_0,      move,           { .i = 9 } },
	{ MODKEY,                       XK_q,      killclient,     { 0 } },
};
