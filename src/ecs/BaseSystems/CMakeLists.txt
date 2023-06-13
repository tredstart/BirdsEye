# This file handles building each task as sub-project.
#
# Each task becomes an independent project in which you can experiment.
#
# Tasks are added as separate sub-projects so as compilation errors in
# one task don't affect another task.

set(CMAKE_CXX_STANDARD 17)

add_library(BaseSystems)
target_sources(BaseSystems
        PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/MoveSystem.cpp
        PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}/MoveSystem.h
        )

target_include_directories(BaseComponents PUBLIC ${CMAKE_CURRENT_LIST_DIR})
