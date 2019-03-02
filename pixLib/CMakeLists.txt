include_directories(${CMAKE_SOURCE_DIR})
include_directories(${VULKAN_INCLUDE_DIR})

add_library(pixLib 
	Sprite.cpp Sprite.h)	

 target_link_libraries(pixLib Vulkan::Vulkan)