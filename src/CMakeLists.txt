cmake_minimum_required(VERSION 3.26.0)

add_executable(${PROJECT_NAME} main.cpp)

add_subdirectory(core)
add_subdirectory(ecs)

target_link_libraries(${PROJECT_NAME} SDL2 core)


