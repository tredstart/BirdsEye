

add_executable(${PROJECT_NAME} main.cpp main.h)

add_subdirectory(core)
add_subdirectory(ecs)

target_include_directories(${PROJECT_NAME} PUBLIC utils)
target_link_libraries(${PROJECT_NAME} SDL2 core ecs)


