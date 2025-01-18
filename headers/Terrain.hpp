#pragma once

#include "Propriete.hpp"
#include <vector>

using namespace std;

class Terrain:public Propriete
{
    private : 
        string couleur;
        uint8_t nbMaisons;
        bool hotel;
        vector<uint16_t> loyers;

    public:
        void ajouterMaison();
        void calculerLoyer();
};