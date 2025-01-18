#ifndef CARTE_HPP
#define CARTE_HPP

#include <iostream>
#include <string>
#include <cstdlib>  
#include <vector>
#include "Case.hpp"

using namespace std;

class Carte: public Case

{
    private : 
        string nom;
        unsigned int nbRandom;

    public:
        string tirerCarte();
};

#endif