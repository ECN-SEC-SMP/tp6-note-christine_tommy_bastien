#include "../headers/Des.hpp"
#include <iostream>

using namespace std;

/**
 * @brief Constructeur par défaut de la classe Des.
 * 
 * Initialise les valeurs des dés à 0.
 */

Des::Des() {
    valDe1 = 0;
    valDe2 = 0;
}

/**
 * @brief Lance les deux dés et génère des valeurs aléatoires entre 1 et 6.
 * 
 * Affiche les valeurs des dés après le lancement.
 */

void Des::lancerDes() {
    valDe1 = 1 + rand() % 6;
    valDe2 = 1 + rand() % 6;
    cout<< "Valeur du premier dé : " << valDe1 << endl;
    cout<< "Valeur du deuxième dé : " << valDe2 << endl;
}

/**
 * @brief Vérifie si les deux dés ont obtenu la même valeur.
 * 
 * @return true si un double est obtenu, sinon false.
 */

bool Des::checkDouble() {
    return valDe1 == valDe2;
}

/**
 * @brief Calcule la somme des deux dés après le lancé.
 * 
 * @return La somme des valeurs des dés sous forme d'un uint8_t.
 */

uint8_t Des::getValue() {
    return valDe1 + valDe2;
}


