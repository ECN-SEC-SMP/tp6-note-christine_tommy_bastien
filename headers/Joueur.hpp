#pragma once

#include <iostream>
#include <vector>
#include <string>
#include "Propriete.hpp"
//#include "Plateau.hpp"
#include "Des.hpp"
#include "Pion.hpp"
//#include "Jeu.hpp"

class Plateau;
class Jeu;

using namespace std;


class Joueur
{
private:
    uint16_t argent_total;
    string nom;
    bool prison;
    bool carteChancePrison;
    vector<Propriete *> proprietes;
    Pion pion;
    Jeu* jeu; 

public:
    Joueur();
    void setNom();
    string getNom();
    uint8_t getPosition();
    bool lancerDes(Des &des);
    void avancer(uint8_t nombre);
    void acheterPropriete(Joueur joueur, Propriete *);
    void vendrePropriete(Propriete *);
    vector<Propriete *> getProprietes();
    void tirer_carte_chance();
    void tirer_carte_communaute();
    void recevoir_argent(uint16_t montant);
    void payer_joueur(uint16_t montant, Joueur joueur_a_payer);
    void payer_banque(uint16_t montant);
    void payer_impots(uint16_t montant, class  Plateau &plateau);
    void aller_prison();
    void sortir_prison();
    void Faillite();
    void afficherProprietes();
    uint8_t getNombreHotels();
    uint8_t getNombreMaisons();
    void ajouterMaison(Propriete &propriete);
    void ajouterHotel(Propriete &propriete);
    void aller_a_une_case(uint8_t val_des);
    void aller_a_une_case_absolue(uint8_t val_case);
    uint8_t getNombreGares();
    uint8_t getNombreServicesPublics();
    void afficherArgent() const;  // Nouvelle fonction pour afficher l'argent du joueur
    
};