#ifndef COLORSCHEME_H
#define COLORSCHEME_H

static const char color1[]       = "#313244"; // Surface0

static const char color2[]	 = "#cdd6f4"; // Text

static const char color3[]       = "#f5e0dc"; // Rosewater

static const char color4[]       = "#b4befe"; // Lavender

static const char color5[]	 = "#ecbcbc"; //
static const char color6[]       = "#89dceb"; // Sky
static const char color7[]       = "#654179";

static const char color8[]	 = "#9399b2"; // Overlay2
static const char color9[]       = "#1e1e2e"; // Base

static const char *colors[][3]      = {
	/*               fg         bg         border   */
	[SchemeNorm] = { color2, color1, color4},
	[SchemeSel]  = { color2, color1, color6},
};




#endif
