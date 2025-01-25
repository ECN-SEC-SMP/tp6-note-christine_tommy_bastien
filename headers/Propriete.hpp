#pragma once

//#include "Joueur.hpp"
#include "Case.hpp"

using namespace std;


class Joueur;  // Déclaration anticipée

class Propriete : public Case
{
protected:
    uint16_t prix;
    //Joueur proprietaire;
    Joueur* proprietaire;
    string nom;
    bool hotel;
    uint8_t nbMaisons;
    uint16_t prixMaison;
    uint16_t prixHotel;
    bool possedeParJoueur = false;

public:
    Propriete(); // Constructeur
    void setPrix(uint16_t prix);
    uint16_t getprix();
    void setProprietaire(Joueur &joueur);
    Joueur* getProprietaire();
    string getNom();

    bool estHotel();  // Détermine si la propriété a un hôtel
    bool estMaison(); // Détermine si la propriété a des maisons
    uint16_t getPrixMaison(uint8_t position);
    uint16_t getPrixHotel(uint8_t position);
    void ajouterMaison();
    void ajouterHotel();
    bool estAchetee();
    virtual void afficherDetails() = 0;  // Fonction virtuelle pure
};