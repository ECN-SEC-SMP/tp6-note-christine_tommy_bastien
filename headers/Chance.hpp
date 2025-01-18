#pragma once

#include "Carte.hpp"
#include "Joueur.hpp"

class Chance: public Carte
{
    public:
        Chance(); // constructeur
        void appliquerEffet(Joueur &joueur);
};