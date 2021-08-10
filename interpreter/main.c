#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../src/include/io.h"
//void Run(char* path[])
//{
	//char* pathEXT[] = path + ".juw";
	//printf("%s",pathEXT);

//}
int main(int argc, char* argv[])
{
	if(strcmp(argv[1], "run") == 0 && argc == 3)
	{
		printf("Running %s", argv[2]);
		if(FileExists(argv[3])== true)
		{
			printf("\033[1m\033[32m File Found. \033[0m");
		}
		else
		{
			printf("\033[1m\033[31m File Not Found Or Is Non-Accessable. \033[0m");

		}
	
	}

		//Run(argv[2])
	}
	else if (argc != 3)
	{
		printf("\033[31m Interpreter Error: Invalid arguments. Only 3 arguments expected. %i arguments given \n\n \033[33mFormat: jewel run {PATH_TO_FILE} \033[37m", argc);
	}

	return 0;
} 