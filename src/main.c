#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool>
#include "include/io.h"



int main(int argc, char* argv[])
{
	if (strcmp(argv[1], "run") == 0 && argc == 3)
	{
		if (FileExists(argv[3]))
			printf("Running %s", argv[2]);
		else
			printf("File Not Found");
	}
	return 0;
} 