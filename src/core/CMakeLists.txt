cmake_minimum_required(VERSION 3.26.0)

add_library(core)

target_sources(core 
    PRIVATE 
      ${CMAKE_CURRENT_LIST_DIR}/Timer.cpp
    PUBLIC
      ${PROJECT_SOURCE_DIR}/inc/core/Timer.h
  )

target_include_directories(core PUBLIC ${CMAKE_CURRENT_LIST_DIR})

