#include "../headers/Des.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <thread>
#include <chrono>

using namespace std;

/**
 * @brief Constructeur par défaut de la classe Des.
 * 
 * Initialise les valeurs des dés à 0.
 */

Des::Des() {
    valDe1 = 0;
    valDe2 = 0;
    static bool randomInit = false;
    if (!randomInit) {
        srand(static_cast<unsigned int>(time(nullptr)));  // Initialisation unique
        randomInit = true;
    }
}

/**
 * @brief Lance les deux dés et génère des valeurs aléatoires entre 1 et 6.
 * 
 * Affiche les valeurs des dés après le lancement.
 */

void Des::lancerDes() {
  

    valDe1 = rand() % 6 + 1;  // Générer un nombre entre 1 et 6 pour le premier dé
        std::this_thread::sleep_for(std::chrono::milliseconds(50)); // Petite pause
        valDe2 = rand() % 6 + 1;  // Générer un nombre entre 1 et 6 pour le deuxième dé

    cout << "Valeur du premier dé : " << valDe1 << endl << flush;
    cout << "Valeur du deuxième dé : " << valDe2 << endl << flush;
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


