#pragma once


#define MAX_SOURCE_SIZE (0x100000)

#include <vector>

#include "Pipe.h"
#include "OpenCLData.h"
using std::vector;

void initializeOpenCL();

int main ()
{
	OpenCLData ocl();
	return 0;
}