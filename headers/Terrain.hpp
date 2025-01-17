

#ifndef TERRAIN_HPP
#define TERRAINE_HPP

#include "Propriete.hpp"
#include <vector>

using namespace std;

class Terrain:public Propriete

{
    protected : 
        string oouleur;
        uint nbMaisons;
        bool hotel;
        vector<uint> loyers;

    public:
        void ajouterMaison();
        void calculerLoyer();
};

#endif