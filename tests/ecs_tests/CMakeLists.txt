set(TEST_DIR ECS_TESTS)

add_executable(${TEST_DIR} tests.cpp)

set(ECS ${PROJECT_SOURCE_DIR}/src/ecs)

target_include_directories(${TEST_DIR} PUBLIC ${ECS})
target_link_libraries(${TEST_DIR} gtest gtest_main gmock)
target_link_libraries(${TEST_DIR} ecs)
