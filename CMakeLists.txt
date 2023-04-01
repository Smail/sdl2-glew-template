cmake_minimum_required(VERSION 3.23)
project(sdl2-glew-template)

set(CMAKE_CXX_STANDARD 20)

find_package(SDL2 REQUIRED)
find_package(GLEW REQUIRED)
find_package(OpenGL REQUIRED)
include_directories(${PROJECT_NAME} ${SDL2_INCLUDE_DIRS} ${GLEW_INCLUDE_DIRS})

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} SDL2::SDL2 GLEW::GLEW OpenGL::GL)
