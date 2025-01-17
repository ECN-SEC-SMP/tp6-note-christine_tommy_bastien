

#ifndef CHANCE_HPP
#define CHANCE_HPP

#include <Carte.hpp>
#include <Joueur.hpp>

using namespace std;

class Chance:public Carte

{

    public:
        void appliquerEffet(Joueur &joueur)();
};

#endif