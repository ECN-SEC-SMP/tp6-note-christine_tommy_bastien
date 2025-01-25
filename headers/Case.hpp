#pragma once

#include <iostream>
#include <string>
// #include "Joueur.hpp"
// #include "Plateau.hpp"

class Plateau;
class Joueur;
class Pion; // Ajout d'une déclaration anticipée

class Case
{
protected:
    std::string nom;

public:
    Case();                    // constructeur
    virtual ~Case() = default; // Add a virtual destructor
    Case(std::string nom);
    void caseDepart(Joueur &joueur);
    void casePrison(Joueur &joueur);
    void caseTaxe(Joueur &joueur, Plateau &plateau);
    void caseImpots(Joueur &joueur, Plateau &plateau);
    void caseParcGratuit(Joueur &joueur, Plateau &plateau);
};