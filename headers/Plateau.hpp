#pragma once

#include "Case.hpp"
#include "Joueur.hpp"

using namespace std;

class Plateau
{
    private:
        vector<Case> vecteur_plateau;
        uint16_t impots;

    public:
        Plateau(); //Constructeur
        uint8_t getNombreJoueur();
        void executerAction(uint8_t numCase, Joueur &joueur);
        void ajouterImpots(uint16_t montant);
        uint16_t getImpots();
};