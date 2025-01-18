#pragma once

#include <iostream>
#include <cstdlib>  

class Des { 
    private:
        uint8_t valDe1, valDe2;

    public:
        Des();  //Constructeur
        void lancerDes();
        bool checkDouble();
        uint8_t getValue();
};
