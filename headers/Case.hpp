#pragma once

#include <iostream>
#include <string>
#include "Joueur.hpp"
#include "Plateau.hpp"

class Case
{
protected:
    string nom;

public:
    Case(); // constructeur
    Case(string nom);
    void caseDepart(Joueur &joueur);
    void casePrison(Joueur &joueur);
    void caseTaxe(Joueur &joueur);
    void caseImpots(Joueur &joueur);
    void caseParcGratuit(Joueur &joueur, Plateau &plateau);
};