cmake_minimum_required(VERSION 3.16)

project(MiniConsoleEngine VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SOURCES
    src/main.cpp
    src/engine.cpp
    src/renderer.cpp
    src/game.cpp
    src/export.cpp

    assets/AssetManager.cpp
    assets/Importers.cpp

    resources.rc
)

add_executable(MiniConsoleEngine ${SOURCES})

target_include_directories(MiniConsoleEngine PRIVATE
    src
    assets
)

if(WIN32)
    set_target_properties(MiniConsoleEngine PROPERTIES WIN32_EXECUTABLE TRUE)
endif()
