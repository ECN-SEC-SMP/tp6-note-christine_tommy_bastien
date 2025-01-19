#include "../headers/Gare.hpp"

Gare::Gare() {

}

Gare::Gare(string nom, uint16_t prix, vector<uint16_t> loyers) {
    this->nom = nom;
    this->prix = prix;
    this->loyers = loyers;
}

void Gare::calculerLoyer() {

}
