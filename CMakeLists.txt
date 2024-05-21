cmake_minimum_required(VERSION 3.10)
project(projekt)

set(CMAKE_CXX_STANDARD 17)

# Find SFML package
find_package(SFML 2.5 COMPONENTS system window graphics network audio REQUIRED)

# Add the executable
add_executable(projekt src/main.cpp)

# Link SFML libraries
target_link_libraries(projekt sfml-system sfml-window sfml-graphics sfml-network sfml-audio)

