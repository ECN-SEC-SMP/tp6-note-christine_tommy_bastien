

#ifndef PROPRIETE_HPP
#define PROPRIETE_HPP

#include "Joueur.hpp"

using namespace std;

class Propriete:public Case

{
    protected : 
        unsigned int prix;
        Joueur proprietaire;

    public:
        Propriete(); //Constructeur
        void setPrix(uint prix);
        unsigned int getprix();
        void setProprietaire(Joueur*);
        void getPropritaire(Joueur*);
};

#endif