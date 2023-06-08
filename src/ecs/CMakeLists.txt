

add_library(ecs)

target_sources(ecs
    PRIVATE 
    ${CMAKE_CURRENT_LIST_DIR}/Entity.cpp
    PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/Entity.h
    PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/Component.h
  )

target_include_directories(ecs PUBLIC ${CMAKE_CURRENT_LIST_DIR})

