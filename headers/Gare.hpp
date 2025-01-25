#pragma once

#include <vector>
#include <iostream>
#include "Propriete.hpp"

using namespace std;

class Gare : public Propriete
{
private:
    vector<uint16_t> loyers;

public:
    Gare();
    Gare(const string& nom, int prix); 
    uint16_t calculerLoyer(Joueur &proprietaire);
    virtual void afficherDetails() override;
};
