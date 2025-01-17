#ifndef CASE_HPP
#define CASE_HPP

#include <iostream>
#include <string>
#include "Joueur.hpp"
#include "Plateau.hpp"

using namespace std;

class Case

{
    private : 
        string nom;

    public:
        Case(); //constructeur
        void caseDepart(Joueur &joueur);
        void casePrison(Joueur &joueur);
        void caseTaxe(Joueur &joueur);
        void caseImpots(Joueur &joueur);
        void caseParcGratuit(Joueur &joueur, Plateau &plateau);
};

#endif