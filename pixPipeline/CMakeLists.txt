include_directories(${CMAKE_SOURCE_DIR})
include_directories(${CMAKE_SOURCE_DIR}/pixLib)
include_directories(${OPENCL_INCLUDE_DIR})

add_library(pixPipeline 
	Pipe.cpp
)

target_link_libraries(pixPipeline pixLib)
 target_link_libraries(pixPipeline OpenCL::OpenCL)