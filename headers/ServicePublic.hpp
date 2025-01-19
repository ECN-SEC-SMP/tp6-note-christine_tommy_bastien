#pragma once

#include <vector>
#include "Propriete.hpp"

using namespace std;

class ServicePublic : public Propriete
{
private:
    vector<uint16_t> loyers;

public:
    ServicePublic();
    ServicePublic(string nom, uint16_t prix, vector<uint16_t> loyers);
    void calculerLoyer();
};