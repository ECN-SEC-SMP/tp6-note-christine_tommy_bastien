#include "../headers/Case.hpp"
#include "../headers/Plateau.hpp"
#include "../headers/Pion.hpp"

/**
 * @brief Constructeur par défaut de la classe Case.
 */

Case::Case()
{
}

/**
 * @brief Constructeur de la classe Case avec un nom.
 * @param nom Nom de la case.
 */

Case::Case(string nom)
{
    this->nom = nom;
}

/**
 * @brief Gère l'effet de la case Départ.
 * 
 * Le joueur reçoit un bonus de 200 mono après être passé par la case départ.
 * 
 * @param joueur Référence vers le joueur qui passe par la case.
 */

void Case::caseDepart(Joueur &joueur)
{
     const int Bonus = 200;
     joueur.recevoir_argent(200);
     cout << joueur.getNom() << " reçoit " << Bonus << " mono." << endl;
}

/**
 * @brief Gère l'effet de la case Prison.
 * 
 * Le joueur va en prison.
 * 
 * @param joueur Référence vers le joueur envoyé en prison.
 * @param pion Pion du joueur (non utilisé dans cette fonction).
 */

void Case::casePrison(Joueur &joueur, Pion pion)
{
    joueur.aller_prison();
    cout << joueur.getNom() << " va en taule" << endl;
}

/**
 * @brief Gère l'effet de la case Taxe.
 * 
 * Le joueur doit payer une taxe de 100 mono au plateau.
 * 
 * @param joueur Référence vers le joueur qui doit payer la taxe.
 * @param plateau Référence vers le plateau pour gérer la transaction.
 */

void Case::caseTaxe(Joueur &joueur, Plateau &plateau)
{
    const int Taxe = 100;
    joueur.payer_impots(Taxe, plateau);
    cout << joueur.getNom() << " doit payer une taxe de " << Taxe << " mono." << endl;
}

/**
 * @brief Gère l'effet de la case Impôts.
 * 
 * Le joueur doit payer un impôt de 200 mono au plateau.
 * 
 * @param joueur Référence vers le joueur qui doit payer l'impôt.
 * @param plateau Référence vers le plateau pour gérer la transaction.
 */

void Case::caseImpots(Joueur &joueur, Plateau &plateau)
{
    const int Impot = 200;
    joueur.payer_impots(Impot, plateau);
    cout << joueur.getNom() << " doit payer " << Impot << " mono d'impot ce fraudeur." << endl;
}

/**
 * @brief Gère l'effet de la case Parc Gratuit.
 * 
 * Le joueur récupère tous les impôts accumulés sur le plateau.
 * 
 * @param joueur Référence vers le joueur qui récupère l'argent.
 * @param plateau Référence vers le plateau qui stocke les impôts.
 */

void Case::caseParcGratuit(Joueur &joueur, Plateau &plateau)
{
    int Total_Impot = plateau.getImpots();
    joueur.recevoir_argent(Total_Impot);
    plateau.ajouterImpots(-Total_Impot); //Remet a Zero les impots

    cout << joueur.getNom() << " est sur le Parc Gratuit et recupere " << Total_Impot << " mono." << endl;
}

