/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

/* Pywal */
/* #include "/home/basilios/.cache/wal/colors-wal-dmenu.h" */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
    "JetBrainsMono Nerd Font:size=13",
    /* Emoji font */
    "JoyPixels:pixelsize=13:antialias=true:autohint=true",
    /* Backup font */
    "monospace:size=13"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#eff5f9", "#17212b" },
	[SchemeSel] = { "#17212b", "#eff5f0" },
	[SchemeOut] = { "#eff5f9", "#5c7aea" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
