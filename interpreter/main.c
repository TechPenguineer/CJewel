#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void Run(char* path[])
{
	char* pathEXT[] = path + ".juw";
	printf("%s",pathEXT);

}
int main(int argc, char* argv[])
{
	strcmp(argv[1], "run") == 0)
	{
		Run(argv[2])
	}
}