

#ifndef TERRAIN_HPP
#define TERRAINE_HPP

#include <Propriete.hpp>

using namespace std;
s
class Terrain:public Propriete

{
    protected : 
        string oculeur;
        uint nbMaisons;
        bool hotel;
        vector<uint> loyers;

    public:
        void ajouterMaison();
        void calculerLoyer();
};

#endif