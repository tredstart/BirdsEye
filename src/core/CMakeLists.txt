

add_library(core)

target_sources(core 
    PRIVATE 
      ${CMAKE_CURRENT_LIST_DIR}/Timer.cpp
    PUBLIC
      ${CMAKE_CURRENT_LIST_DIR}/Timer.h
  )

target_include_directories(core PUBLIC ${CMAKE_CURRENT_LIST_DIR})

