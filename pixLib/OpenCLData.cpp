#include "OpenCLData.h"

int OpenCLData::initialize()
{
	if (!getPlatforms())
		return 1;

	if (!getDevices())
		return 2;

	if (!formContexts())
		return 3;
}

bool OpenCLData::getPlatforms()
{
	cl_uint platformIdCount = 0;
	clGetPlatformIDs(0, nullptr, &platformIdCount);

	if (!platformIdCount)
		return false;

	platformIds.resize(platformIdCount);
	clGetPlatformIDs(platformIdCount, platformIds.data(), nullptr);

	return true;
}

bool OpenCLData::getDevices()
{
	deviceIds.resize(platformIds.size());
	for (int i = 0; i < deviceIds.size(0); i++)
	{
		cl_uint deviceIdCount = 0;
		clGetDeviceIDs(platformIds[i], CL_DEVICE_TYPE_ALL, 0, nullptr, &deviceIdCount);
		
		if (!deviceIdCount)
			return false;

		deviceIds[i].resize(deviceIdCount);
		clGetDeviceIDs(platformIds[i], CL_DEVICE_TYPE_ALL, deviceIdCount, deviceIds[i].data(), nullptr);
	}

	return true;
}

bool OpenCLData::formContexts()
{
	contexts.resize(platformIds.size());
	for (int i = 0; i < platformIds.size(); i++)
	{
		const cl_context_properties contextProps[] =
		{
			CL_CONTEXT_PLATFORM,
			reinterpret_cast<cl_context_properties>(platformIds[i]),
			0,0
		};
		
		cl_int error;
		contexts[i] = clCreateContext(contextProps, deviceIds[i].size(), deviceIds[i].data(),
			nullptr, nullptr, &error);

		if (error != CL_SUCCESS)
			return false;
	}
	return true;
}