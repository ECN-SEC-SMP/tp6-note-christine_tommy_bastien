#pragma once

#include "Propriete.hpp"
#include <vector>

using namespace std;

class Terrain : public Propriete
{
private:
    string couleur;
    uint8_t nbMaisons;
    bool hotel;
    vector<uint16_t> loyers;

public:
    Terrain();
    Terrain(string nom, uint16_t prix, string couleur, vector<uint16_t> loyers);
    void ajouterMaison();
    uint16_t calculerLoyer();
    virtual void afficherDetails() override;
};