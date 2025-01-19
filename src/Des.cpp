#include "../headers/Des.hpp"
#include <iostream>

using namespace std;

Des::Des() {
    valDe1 = 0;
    valDe2 = 0;
}

void Des::lancerDes() {
    valDe1 = 1 + rand() % 6;
    valDe2 = 1 + rand() % 6;
    cout<< "Valeur du premier dé : " << valDe1 << endl;
    cout<< "Valeur du deuxième dé : " << valDe2 << endl;
}

bool Des::checkDouble() {
    return valDe1 == valDe2;
}

uint8_t Des::getValue() {
    return valDe1 + valDe2;
}


