#define __CL_ENABLE_EXCEPTIONS
#ifdef __APPLE__
#include <OpenCL/opencl.h>
#else
#include <CL/cl.h>
#endif

#include <vector>

using std::vector;

class OpenCLData
{
private:
	vector< cl_platform_id > platformIds;
	vector< vector< cl_device_id > > deviceIds;
	vector< cl_context > contexts;
	/*
	initializes list of platforms;
	@return -returns false if no platforms were found
	*/
	bool getPlatforms();

	/*
	initializes lists of devices;
	@return -returns false if no devices were found for any platform
	*/
	bool getDevices();

	/*
	forms a contxt for each platform found in the hardware
	@returns false if some unforseen error occurs
	*/
	bool formContexts();

public:
	/*
	initializes the OpenCL with information about platform and device information
	returns 0 if the process is successful, various numbers correlate to different errors
	@return -returns 0 if valid, else the number corresponding to the failed action
	*/
	int initialize();

};