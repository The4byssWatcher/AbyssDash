cmake_minimum_required(VERSION 3.16.3)

project(Abyss)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(base_directory ${CMAKE_CURRENT_SOURCE_DIR})
set(resource_directory ${base_directory}/assets)
set(source_directory ${base_directory}/src)
set(include_directory ${base_directory}/include)

set(EXECUTABLE_OUTPUT_PATH ${base_directory}/bin)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${base_directory}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${base_directory}/lib)


find_package(Qt5 CONFIG COMPONENTS Widgets REQUIRED)

file(GLOB_RECURSE source_files CONFIGURE_DEPENDS 
        ${source_directory}/*.cpp 
        ${include_directory}/*.h 
        ${resource_directory}/*.qrc)

add_executable(Abyss ${source_files})

target_include_directories(Abyss PUBLIC
                ${source_directory}
                ${include_directory}
)       

target_link_libraries(Abyss
            Qt5::Widgets
)       

