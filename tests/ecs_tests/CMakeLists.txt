set(TEST_DIR ECS_TESTS)

add_executable(${TEST_DIR} tests.cpp)

set(ECS ${PROJECT_SOURCE_DIR}/src/ecs)
set(BASE_SYSTEMS ${PROJECT_SOURCE_DIR}/src/ecs/BaseSystems)
set(BASE_COMPONENTS ${PROJECT_SOURCE_DIR}/src/ecs/BaseComponents)

target_include_directories(${TEST_DIR} PUBLIC ${ECS} ${BASE_COMPONENTS} ${BASE_SYSTEMS})
target_link_libraries(${TEST_DIR} gtest gtest_main gmock)
target_link_libraries(${TEST_DIR} ecs BaseComponents BaseSystems)
