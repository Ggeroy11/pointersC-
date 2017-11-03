#include <stdio.h>
#include <stdlib.h>

static struct Commandline {
	char Source[_MAX_PATH];
	char Destination[_MAX_PATH];
	char Error[_MAX_PATH];
};

void parsecmd(int argc, char *argv[], struct Commandline *cmd);

void main(int argc, char *argv[]) {
	struct Commandline * cmd = malloc(1);
	parsecmd(argc, argv, cmd);
}

void parsecmd(int argc, char *argv[], struct Commandline *cmd) {
	scanf("%s",&cmd->Source);
	scanf("%s", &cmd->Destination);
	FILE* SourceFile,*DestinationFile;
	char buf[256];
	if ((SourceFile = fopen(cmd->Source, "r+")) == NULL) {
		printf("Error source file not opened");
	}
	if ((DestinationFile = fopen(cmd->Destination, "w+")) == NULL) {
		printf("Error destination file not opened");
	}
	while ((fgets(buf, 256, SourceFile)) != NULL)
	{
		printf("%s", buf);
	}
	fclose(SourceFile);
}
