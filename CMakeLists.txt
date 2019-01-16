cmake_minimum_required(VERSION 3.10)

project(Pixleon)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/Modules/")

 
FIND_PACKAGE(OPENCL REQUIRED)

if(OpenCL_FOUND)
	message(OpenCL_VERSION_STRING)
endif(OpenCL_FOUND)
 
 
 add_subdirectory(mainSrc)
 add_subdirectory(pixPipeline)
 add_subdirectory(pixLib)
 
