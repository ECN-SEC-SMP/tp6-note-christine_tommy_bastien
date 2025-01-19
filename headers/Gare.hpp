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
    Gare(string nom, uint16_t prix, vector<uint16_t> loyers);
    void calculerLoyer();
};
