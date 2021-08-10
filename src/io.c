#include "include/io.h"
#include <sys/stat.h>
#include <cstdbool.h>



bool FileExists(const char* path)
{
	struct stat buffer;
	return (stat(path, &buffer) == 0);

}
