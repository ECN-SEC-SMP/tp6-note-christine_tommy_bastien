#pragma once

#include <vector>
#include "Propriete.hpp"
#include "Des.hpp"

using namespace std;

class ServicePublic : public Propriete
{
private:
    vector<uint16_t> loyers;

public:
    ServicePublic();
    ServicePublic(string nom, uint16_t prix, vector<uint16_t> loyers);
    uint16_t calculerLoyer(Joueur &proprietaire, Des &des);
    virtual void afficherDetails() override;
};