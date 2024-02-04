cmake_minimum_required(VERSION 3.5)
project(WalterMelonApp
        VERSION 0.001
        DESCRIPTION "Simple game example within Sopel Game Engine"
        LANGUAGES CXX)

add_executable(walter_melon
               Src/WalterMelon.cpp)

target_compile_features(walter_melon PRIVATE cxx_std_20)

target_include_directories(walter_melon PRIVATE 
        ${CMAKE_CURRENT_SOURCE_DIR}/Src
)

target_link_libraries(walter_melon PUBLIC)