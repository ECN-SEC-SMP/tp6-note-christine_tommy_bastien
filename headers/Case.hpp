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
    void casePrison(Joueur &joueur, Pion pion);
    void caseTaxe(Joueur &joueur, Plateau &plateau);
    void caseImpots(Joueur &joueur, Plateau &plateau);
    void caseParcGratuit(Joueur &joueur, Plateau &plateau);
};