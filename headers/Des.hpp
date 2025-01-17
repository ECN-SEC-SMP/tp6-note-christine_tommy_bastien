#ifndef DES_HPP
#define DES_HPP

#include <iostream>
#include <cstdlib>  

class Des { 
    private:
        unsigned int valDe1, valDe2;

    public:
        Des();  //Constructeur

        void lancerDes();
        bool checkDouble();
        unsigned int getValue();
};

#endif
