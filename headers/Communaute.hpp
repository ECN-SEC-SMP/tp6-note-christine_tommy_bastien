#pragma once

#include "Carte.hpp"
#include "Joueur.hpp"

class Communaute : public Carte
{
private:
    vector<string> cartesCommunaute;

public:
    Communaute();
    void appliquerEffet(Joueur &joueur);
};