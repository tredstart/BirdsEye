

add_library(engine)

target_sources(engine
        PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/Engine.cpp
        PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}/Engine.h
        )

target_include_directories(engine PUBLIC ${CMAKE_CURRENT_LIST_DIR})

