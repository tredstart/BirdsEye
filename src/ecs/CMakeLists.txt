cmake_minimum_required(VERSION 3.26.0)

add_library(ecs)

target_sources( 
    PRIVATE 
    ${CMAKE_CURRENT_LIST_DIR}/Entity.cpp
    PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/Entity.h
    PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/Components.cpp
    PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/Component.h
  )

target_include_directories(ecs PUBLIC ${CMAKE_CURRENT_LIST_DIR})

