cmake_minimum_required(VERSION 3.21)
project(sfml-box2d-template)

set(CMAKE_CXX_STANDARD 17)
set(SFML_STATIC_LIBRARIES TRUE)

find_package(SFML COMPONENTS system window graphics network audio REQUIRED)
find_package(Box2D REQUIRED)

include_directories(src ${SFML_INCLUDE_DIR} ${BOX2D_INCLUDE_DIR})
add_executable(sfml-box2d src/main.cpp)

target_link_libraries(sfml-box2d PRIVATE sfml-system sfml-window sfml-graphics sfml-audio sfml-network box2d::box2d)
