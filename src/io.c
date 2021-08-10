#include "include/io.h"
#include <stdlib.h>
#include <stdio.h>
bool FileExists(const char* fname)
{
	FILE* file;

	if ((file = fopen(fname, 'rb')))
	{
		return true;
	}
	else
	{
		return false;
	}
	
}