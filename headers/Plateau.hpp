#pragma once

#include <vector>
#include <memory>
#include "Case.hpp"
#include "Terrain.hpp"
#include "Gare.hpp"
#include "ServicePublic.hpp"
#include "Communaute.hpp"
#include "Chance.hpp"
#include "Joueur.hpp"

using namespace std;

class Plateau
{
private:
    vector<unique_ptr<Case>> vecteur_plateau;
    uint16_t impots;
    std::vector<Joueur> joueurs;
    uint8_t nombreJoueurs;
    
public:
    Plateau(); // Constructeur
    uint8_t getNombreJoueur();
    void executerAction(uint8_t numCase, Joueur &joueur);
    void ajouterImpots(uint16_t montant);
    uint16_t getImpots();
    void afficherDetailsCase(uint8_t position) const;  // Nouvelle fonction
};