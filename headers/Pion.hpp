#pragma once

#include <iostream>

using namespace std;

class Pion
{
private:
    uint8_t position;

public:
    Pion();
    void setPosition(uint8_t nouvelle_position);
    uint8_t getPosition();
};