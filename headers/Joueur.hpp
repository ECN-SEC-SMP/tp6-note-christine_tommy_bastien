#pragma once

#include <iostream>
#include <vector>
#include <string>
#include "Propriete.hpp"
#include "Plateau.hpp"
#include "Des.hpp"

using namespace std;

class Joueur
{
private:
    uint16_t argent_total;
    string nom;
    bool prison;
    bool carteChancePrison;
    vector<Propriete *> proprietes;
    uint8_t position;

public:
    void setNom();
    string getNom();
    uint8_t getPosition();
    bool lancerDes(Des &des);
    void avancer_pion(uint8_t nombre);
    void acheterPropriete(Joueur joueur,Propriete *);
    void vendrePropriete(Propriete *);
    vector<Propriete*> getProprietes();
    void tirer_carte_chance();
    void tirer_carte_communaute();
    void recevoir_argent(uint16_t montant);
    void payer_joueur(uint16_t montant, Joueur joueur_a_payer);
    void payer_banque(uint16_t montant);
    void payer_impots(uint16_t montant, Plateau &plateau);
    void aller_prison();
    void sortir_prison();
    void Faillite();
    void afficherProprietes();
};