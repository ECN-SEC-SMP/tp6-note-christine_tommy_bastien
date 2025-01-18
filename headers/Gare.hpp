#pragma once

#include <vector>
#include <iostream>

using namespace std;

class Gare
{
    private :
        vector<uint16_t> loyers;

    public:
        uint16_t calculerLoyer();
};
