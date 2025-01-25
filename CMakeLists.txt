cmake_minimum_required(VERSION 3.10)
project(Monopoly)

# Configuration de base du projet
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS_DEBUG "-g")

# Inclure le CMake pour le code principal
add_subdirectory(src)

# Inclure le CMake pour les tests
# add_subdirectory(tests)