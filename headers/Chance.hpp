#pragma once

#include "Carte.hpp"
#include "Joueur.hpp"
#include "Pion.hpp"

class Chance : public Carte
{
private:
    vector<string> cartesChance;

public:
    Chance(); // constructeur
    void afficherNomCarte();
    void appliquerEffet(Joueur &joueur, Pion pion);
};