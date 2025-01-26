#include "../headers/Carte.hpp"

Carte::Carte()
{
}

/**
 * @brief Tire une carte chance ou communaute en générant un nombre aléatoire entre 0 et 15.
 *
 * Cette méthode initialise le générateur de nombres aléatoires avec `srand(time(NULL))`
 * puis assigne à nbRandom une valeur aléatoire entre 0 et 15.
 */
void Carte::tirerCarte()
{
    srand(time(NULL));
    this->nbRandom = rand() % 16;
    cout << nbRandom << endl;
}
