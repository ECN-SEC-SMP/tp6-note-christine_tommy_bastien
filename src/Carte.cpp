#include "../headers/Carte.hpp"

void Carte::tirerCarte()
{
    srand(time(NULL));
    this->nbRandom = rand() % 16;
}
