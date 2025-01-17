#ifndef CARTE_HPP
#define CARTE_HPP

#include <iostream>
#include <string>

using namespace std;

class Carte::Case

{
    private : 
        string nom;
        unsigned int nbRandom;

    public:
        void tirerCarte();
};

#endif