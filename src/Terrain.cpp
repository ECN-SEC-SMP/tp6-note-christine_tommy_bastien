#include "../headers/Terrain.hpp"

Terrain::Terrain() {

};

Terrain::Terrain(string nom, uint16_t prix, string couleur, vector<uint16_t> loyers)
{
    this->nom = nom;
    this->prix = prix;
    this->couleur = couleur;
    this->loyers = loyers;
};

void Terrain::ajouterMaison() {

};

void Terrain::calculerLoyer() {

};