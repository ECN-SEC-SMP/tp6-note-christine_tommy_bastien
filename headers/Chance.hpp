#pragma once

#include "Carte.hpp"
#include "Joueur.hpp"
#include "Pion.hpp"

class Chance : public Carte
{
private:
    vector<string> cartesChance;

public:
    Chance() ;
    Chance(std::string nom); // constructeur
    void afficherNomCarte();
    void appliquerEffet(Joueur &joueur);
};