 include_directories(${CMAKE_SOURCE_DIR})
 include_directories(${CMAKE_SOURCE_DIR}/pixPipeline)
 include_directories(${CMAKE_SOURCE_DIR}/pixLib)
 include_directories(${VULKAN_INCLUDE_DIRS})
 include_directories(pixleon PUBLIC ${OPENGL_INCLUDE_DIR})

 add_executable(pixleon
		main.cpp)
		
 target_link_libraries(pixleon Vulkan::Vulkan)
 target_link_libraries(pixleon glfw)
 target_link_libraries(pixleon ${OPENGL_gl_LIBRARY})
 target_link_libraries(pixleon pixPipeline)
 target_link_libraries(pixleon pixLib)
