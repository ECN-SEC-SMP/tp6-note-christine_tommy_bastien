#include "Des.hpp"

Des::Des() {
    valDe1 = 0;
    valDe2 = 0;
}

void Des::lancerDes() {
    valDe1 = 1 + rand() % 6;
    valDe2 = 1 + rand() % 6;
}

bool Des::checkDouble() {
    return valDe1 == valDe2;
}

unsigned int Des::getValue() {
    return valDe1 + valDe2;
}
