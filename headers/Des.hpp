#pragma once

#include <iostream>
#include <cstdlib>  

class Des { 
    private:
        int valDe1, valDe2;

    public:
        Des();  //Constructeur
        void lancerDes();
        bool checkDouble();
        uint8_t getValue();
};
