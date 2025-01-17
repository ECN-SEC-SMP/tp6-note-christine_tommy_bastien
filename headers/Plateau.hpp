

#ifndef PLATEAU_HPP
#define PLATEAU_HPP

#include <Case.hpp>
#include <Joueur.hpp>

using namespace std;

class Plateau

{

    protected :
        vector<Case> vecteur_plateau;
        unsigned int impots;

    public:
        Plateau(); //Constructeur
        int getNombreJoueur();
        void executerAction(unsigned int numCase, Joueur &joueur);
        int ajouterImpots(int montant);
        unsigned int getImpots();
};

#endif