include_directories(${CMAKE_SOURCE_DIR})
include_directories(${OPENCL_INCLUDE_DIR})

add_library(pixLib 
	Sprite.cpp Sprite.h
	OpenCLData.cpp OpenCLData.h)	

 target_link_libraries(pixLib OpenCL::OpenCL)