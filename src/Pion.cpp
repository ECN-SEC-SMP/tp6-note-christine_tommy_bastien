#include "../headers/Pion.hpp"
#include "../headers/Des.hpp"

/**
 * @brief Constructeur par défaut de la classe Pion.
 *
 * Ce constructeur initialise un pion avec une position de départ de 0.
 */
Pion::Pion()
{
    position = 0;
}

/**
 * @brief Définit la position du pion.
 *
 * Cette fonction permet de modifier la position actuelle du pion à une nouvelle valeur.
 *
 * @param nouvelle_position La nouvelle position à attribuer au pion.
 */

void Pion::setPosition(uint8_t nouvelle_position)
{
    position = nouvelle_position;
}

/**
 * @brief Obtient la nouvelle position du pion après un lancer de dés.
 *
 * Cette fonction calcule la nouvelle position du pion après avoir lancé les dés.
 * Elle ajoute la valeur du lancer des dés à la position actuelle du pion.
 *
 * @return uint8_t La nouvelle position du pion après le lancer des dés.
 */

uint8_t Pion::getPosition()
{
    Des des;
    des.lancerDes();
    uint8_t nouvelle_position = position + des.getValue();
    return nouvelle_position;
}