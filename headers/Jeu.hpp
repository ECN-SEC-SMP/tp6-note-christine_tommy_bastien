#pragma once

#include <iostream>
#include <vector>
#include "Des.hpp"
#include "Plateau.hpp"
#include "Joueur.hpp"

using namespace std;

class Jeu {
    private:
        uint8_t nombreJoueurs;
        uint8_t tour;
        Des des;
        Plateau plateau;
        vector<Joueur> vecteur_joueurs;

        void askNombreJoueurs();
        void demarrerTour();
        void incrementerTour();
        void finDePartie();

    public:
        Jeu();
        void demarrerPartie();
};