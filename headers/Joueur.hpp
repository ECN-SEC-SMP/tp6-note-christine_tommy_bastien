

#ifndef JOUEUR_HPP
#define JOUEUR_HPP

#include "Propriete.hpp"
#include "Joueur.hpp"
#include "Plateau.hpp"

using namespace std;

class Joueur

{
    private :
        int argent_total;

    protected :
        string nom;
        unsigned int position;
        bool prison;
        bool carteChancePrison;
        vector<Propriete*> proprietes;

    public:
        string getNom() ;
        unsigned int getPosition();
        void avancer_pion(uint nombre);
        void acheterPropriete(Propriete*);
        void vendrePropriete(Propriete*);
        vector<Propriete> getProprietes();
        void tirer_carte_chance();
        void tirer_carte_communauté(); 
        void recevoir_argent(int montant);
        void payer_joueur(int montant, Joueur joueur_a_payer);
        void payer_banque(int montant);
        void payer_impots(int montant, Plateau &plateau);
        void aller_prison();
        void sortir_prison();
};

#endif