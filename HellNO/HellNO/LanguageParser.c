#include <stdio.h>
#include <stdlib.h>

static struct Commandline {
	char Source[_MAX_PATH];
	char Destination[_MAX_PATH];
	char Error[_MAX_PATH];
};

void parsecmd(int argc, char *argv[], struct Commandline *cmd);

void main(int argc, char *argv[]) {
	struct Commandline * cmd;
	parsecmd(argc, argv, cmd);		
}

void parsecmd(int argc, char *argv[], struct Commandline *cmd) {
	FILE *fopen(const char *path, const char *mode);
}