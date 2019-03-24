 include_directories(${CMAKE_SOURCE_DIR})
 include_directories(${CMAKE_SOURCE_DIR}/pixPipeline)
 include_directories(${CMAKE_SOURCE_DIR}/pixLib)
 include_directories(${VULKAN_INCLUDE_DIRS})
 
 add_executable(pixleon
		main.cpp)
		
 target_link_libraries(pixleon ${VULKAN_LIBRARY})
 target_link_libraries(pixleon glfw ${GLFW_STATIC_LIBRARIES})
 target_link_libraries(pixleon pixPipeline)
 target_link_libraries(pixleon pixLib)