

add_library(ecs)

target_sources(ecs
    PRIVATE 
    ${CMAKE_CURRENT_LIST_DIR}/Entity.cpp
    PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/Entity.h
        ${CMAKE_CURRENT_LIST_DIR}/IComponent.h
        ${CMAKE_CURRENT_LIST_DIR}/ISystem.h
  )
add_subdirectory(BaseComponents)
add_subdirectory(BaseSystems)
target_include_directories(ecs PUBLIC ${CMAKE_CURRENT_LIST_DIR})

