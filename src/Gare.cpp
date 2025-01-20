#include "../headers/Gare.hpp"

/**
 * @brief Constructeur par défaut de la classe Gare.
 * 
 * Ce constructeur crée une instance de la classe Gare sans initialiser les attributs.
 */

Gare::Gare() {
}

/**
 * @brief Constructeur de la classe Gare avec paramètres.
 * 
 * Ce constructeur permet d'initialiser une instance de la classe Gare avec un nom, un prix et une liste de loyers.
 * 
 * @param nom Le nom de la gare.
 * @param prix Le prix de la gare.
 * @param loyers Un vecteur contenant les loyers associés à la gare.
 */

Gare::Gare(string nom, uint16_t prix, vector<uint16_t> loyers) {
    this->nom = nom;
    this->prix = prix;
    this->loyers = loyers;
}

/**
 * @brief Calcule le loyer de la gare.
 * 
 * Cette fonction permet de calculer le loyer de la gare, mais elle est actuellement vide et nécessite une implémentation.
 */
 
void Gare::calculerLoyer() {

}
