#pragma once

#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include "Case.hpp"

using namespace std;

class Carte : public Case
{
protected:
    uint8_t nbRandom;

public:
    Carte();
    void tirerCarte();
};