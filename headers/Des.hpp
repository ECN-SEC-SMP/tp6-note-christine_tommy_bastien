

#ifndef DES_HPP
#define DES_HPP


using namespace std;

class DES

{
    private : 
        unsigned int valDe1, valDe2;

    public:
        void lancerDes();
        bool checkDouble();
        unsigned int getValue();
};

#endif