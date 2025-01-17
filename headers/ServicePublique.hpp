

#ifndef SERVICE_PUBLIC_HPP
#define CHANCE_HPP

#include <vector>
#include "Propriete.hpp"

using namespace std;

class SERVICE_PUBLIC : Propriete

{
    protected : 
        vector<uint> loyers;

    public:
        void calculerLoyer();
};

#endif