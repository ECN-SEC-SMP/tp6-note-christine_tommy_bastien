#include "../headers/ServicePublic.hpp"

ServicePublic::ServicePublic()
{
}

ServicePublic::ServicePublic(string nom, uint16_t prix, vector<uint16_t> loyers)
{
    this->nom = nom;
    this->prix = prix;
    this->loyers = loyers;
}

void ServicePublic::calculerLoyer()
{
}