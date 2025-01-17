

#ifndef COMMUNAUTE_HPP
#define COMMUNAUTE_HPP

#include "Carte.hpp"
#include "Joueur.hpp"

using namespace std;

class Communaute:public Carte

{

    public:
        void appliquerEffet(Joueur &joueur);
};

#endif