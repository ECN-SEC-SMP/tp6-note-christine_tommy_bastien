#pragma once

#include "Carte.hpp"
#include "Joueur.hpp"

class Communaute: public Carte
{
    public:
        Communaute();
        void appliquerEffet(Joueur &joueur);
};