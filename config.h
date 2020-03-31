//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/ /*Command*/ /*Update Interval*/ /*Update Signal*/
	{"  ", "clock", 60, 0},
	{"", "cpu", 0, 0},
	{"", "battery", 5, 0},
	{"", "internet", 5, 4},
	{"", "xkb-switch", 300, 13},
	{" ", "echo", 3000, 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = ' ';
