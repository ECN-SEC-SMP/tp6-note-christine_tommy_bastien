#pragma once

#include <vector>
#include "Propriete.hpp"

using namespace std;

class Service_public : Propriete
{
    protected : 
        vector<uint16_t> loyers;

    public:
        void calculerLoyer();
};