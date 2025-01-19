#include "../headers/Case.hpp"
#include "../headers/Plateau.hpp"

Case::Case()
{
}

Case::Case(string nom)
{
    this->nom = nom;
}

void Case::caseDepart(Joueur &joueur)
{
     const int Bonus = 200;
     joueur.recevoir_argent(200);
     cout << joueur.getNom() << " reçoit " << Bonus << " mono." << endl;
}

void Case::casePrison(Joueur &joueur)
{
    joueur.aller_prison();
     cout << joueur.getNom() << " va en taule" << endl;
}

void Case::caseTaxe(Joueur &joueur, Plateau &plateau)
{
    const int Taxe = 100;
    joueur.payer_impots(Taxe, plateau);
    cout << joueur.getNom() << " doit payer une taxe de " << Taxe << " mono." << endl;
}

void Case::caseImpots(Joueur &joueur, Plateau &plateau)
{
    const int Impot = 200;
    joueur.payer_impots(Impot, plateau);
    cout << joueur.getNom() << " doit payer " << Impot << " mono d'impot ce fraudeur." << endl;
}

void Case::caseParcGratuit(Joueur &joueur, Plateau &plateau)
{
    int Total_Impot = plateau.getImpots();
    joueur.recevoir_argent(Total_Impot);
    plateau.ajouterImpots(-Total_Impot); //Remet a Zero les impots

    cout << joueur.getNom() << " est sur le Parc Gratuit et recupere " << Total_Impot << " mono." << endl;
}

