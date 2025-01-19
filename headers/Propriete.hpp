#pragma once

#include "Joueur.hpp"

using namespace std;

class Propriete : public Case
{
protected:
    uint16_t prix;
    Joueur proprietaire;
    string nom;
    
public:
    Propriete(); // Constructeur
    void setPrix(uint16_t prix);
    uint16_t getprix();
    void setProprietaire(Joueur &joueur);
    void getPropritaire(Joueur &joueur);
    string getNom();
};
