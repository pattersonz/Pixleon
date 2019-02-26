#pragma once
#define __CL_ENABLE_EXCEPTIONS


#ifdef __APPLE__
#include <OpenCL/opencl.h>
#else
#include <CL/cl.h>
#endif

#define MAX_SOURCE_SIZE (0x100000)
#include "Pipe.h"

int main ()
{
	return 0;
}