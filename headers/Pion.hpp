#pragma once

#include <iostream>

using namespace std;

/**
 * @class Pion
 * @brief Représente un pion utilisé par un joueur dans le jeu Monopoly.
 */
class Pion
{
private:
    uint8_t position; ///< Position actuelle du pion sur le plateau.

public:
    /**
     * @brief Constructeur par défaut de la classe Pion.
     * Initialise la position à 0.
     */
    Pion();

    /**
     * @brief Définit la position du pion.
     * @param nouvelle_position Nouvelle position du pion sur le plateau.
     */
    void setPosition(uint8_t nouvelle_position);

    /**
     * @brief Obtient la position actuelle du pion.
     * @return uint8_t La position actuelle du pion.
     */
    uint8_t getPosition();
};