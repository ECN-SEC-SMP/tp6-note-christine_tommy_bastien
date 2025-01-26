#pragma once

#include <iostream>
#include <cstdlib>  

/**
 * @class Des
 * @brief Gère les dés utilisés dans le jeu.
 *
 * Cette classe permet de lancer deux dés, vérifier si un double a été obtenu 
 * et récupérer la somme des valeurs des dés.
 */
class Des { 
    private:
        int valDe1, valDe2; ///< Valeurs des deux dés.

    public:
        /**
         * @brief Constructeur par défaut de la classe Des.
         */
        Des();

        /**
         * @brief Lance les dés et génère des valeurs aléatoires.
         */
        void lancerDes();

        /**
         * @brief Vérifie si un double a été obtenu.
         * @return true si les deux dés affichent la même valeur, sinon false.
         */
        bool checkDouble();

        /**
         * @brief Récupère la somme des valeurs des dés.
         * @return uint8_t La somme des deux dés.
         */
        uint8_t getValue();
};
