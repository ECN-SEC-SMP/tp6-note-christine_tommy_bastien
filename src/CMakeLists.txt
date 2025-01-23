cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Ajouter les fichiers source et d'en-tête
set(SOURCES
    ../src/main.cpp
    ../src/Jeu.cpp
    ../src/Plateau.cpp
    ../src/Case.cpp
    ../src/Carte.cpp
    ../src/Joueur.cpp
    ../src/Propriete.cpp
    ../src/Chance.cpp
    ../src/Communaute.cpp
    ../src/Pion.cpp
    ../src/Des.cpp
    ../src/Terrain.cpp
    ../src/Gare.cpp
    ../src/ServicePublic.cpp
)

set(HEADERS
    ../headers/Jeu.hpp
    ../headers/Plateau.hpp
    ../headers/Case.hpp
    ../headers/Carte.hpp
    ../headers/Joueur.hpp
    ../headers/Propriete.hpp
    ../headers/Chance.hpp
    ../headers/Communaute.hpp
    ../headers/Pion.hpp
    ../headers/Des.hpp
    ../headers/Terrain.hpp
    ../headers/Gare.hpp
    ../headers/ServicePublic.hpp
)

# Créer l'exécutable
add_executable(main ${SOURCES} ${HEADERS})

