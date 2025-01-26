#pragma once

#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include "Case.hpp"

using namespace std;

/**
 * @class Carte
 * @brief Représente une carte du jeu Monopoly.
 * 
 * La classe Carte est dérivée de la classe Case et permet de gérer
 * les cartes Chance et Caisse de Communauté qui ont des effets spécifiques sur les joueurs.
 */
class Carte : public Case
{
protected:
    uint8_t nbRandom = 0;

public:

    /**
    * @brief Constructeur par défaut de la classe Carte.
    */
    Carte();

    /**
     * @brief Tire une carte de manière aléatoire.
     * 
     * Cette fonction génère un nombre aléatoire entre 0 et 15 
     * pour sélectionner une carte parmi les disponibles.
     */
    void tirerCarte();
};