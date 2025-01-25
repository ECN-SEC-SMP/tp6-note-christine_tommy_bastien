#pragma once

#include <iostream>
#include <vector>
#include "Des.hpp"
#include "Plateau.hpp"
#include "Joueur.hpp"

using namespace std;

class Jeu
{
private:
    uint8_t nombreJoueurs;
    uint8_t tour;
    Des des;
    Plateau plateau;
    vector<Joueur> joueurs;

    void askNombreJoueurs();

public:
    Jeu();
    void demarrerPartie();
    uint8_t getNbJoueur();
    vector<Joueur> getVecteurJoueurs();
    void demarrerTour();
    void finDePartie();
    // Ajout d'un getter pour accéder au plateau
    void jouerPartie(); // Nouvelle fonction pour gérer la partie
    Plateau &getPlateau()
    {
        return plateau;
    }
};