cmake_minimum_required(VERSION 3.5)
project(WalterMelonApp
        VERSION 0.01
        DESCRIPTION "Simple game example within Sopel Game Engine"
        LANGUAGES CXX)

add_subdirectory(SopelGE)

add_executable(walter_melon
               src/WalterMelon.cpp)

target_compile_features(walter_melon PRIVATE cxx_std_20)

target_include_directories(walter_melon PRIVATE 
        ${CMAKE_CURRENT_SOURCE_DIR}/src
        ${CMAKE_CURRENT_SOURCE_DIR}/SopelGE
)

target_link_libraries(walter_melon PUBLIC SGEEngine)