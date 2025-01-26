#pragma once

#include <iostream>
#include <string>
// #include "Joueur.hpp"
// #include "Plateau.hpp"

class Plateau;
class Joueur;
class Pion; // Ajout d'une déclaration anticipée

/**
 * @class Case
 * @brief Représente une case sur le plateau de jeu.
 * 
 * Cette classe définit les différents types de cases sur lesquelles un joueur peut atterrir
 * et les actions associées à ces cases.
 */
class Case
{
protected:
    std::string nom;

public:

    /**
     * @brief Constructeur par défaut de la classe Case.
     */
    Case();                    // constructeur
    virtual ~Case() = default; // Add a virtual destructor

     /**
     * @brief Constructeur paramétré pour définir une case avec un nom.
     * @param nom Le nom de la case.
     */
    Case(std::string nom);
    
    /**
     * @brief Gère l'effet de la case départ.
     * @param joueur Référence vers l'objet Joueur.
     */
    void caseDepart(Joueur &joueur);

    /**
     * @brief Gère l'effet de la case Prison.
     * @param joueur Référence vers l'objet Joueur.
     */
    void casePrison(Joueur &joueur);

    /**
     * @brief Gère l'effet de la case Taxe où le joueur doit payer un montant au plateau.
     * @param joueur Référence vers l'objet Joueur.
     * @param plateau Référence vers l'objet Plateau pour gérer les taxes collectées.
     */
    void caseTaxe(Joueur &joueur, Plateau &plateau);

    /**
     * @brief Gère l'effet de la case Impôts où le joueur doit payer un montant plus élevé au plateau.
     * @param joueur Référence vers l'objet Joueur.
     * @param plateau Référence vers l'objet Plateau pour gérer les impôts collectés.
     */
    void caseImpots(Joueur &joueur, Plateau &plateau);

    /**
     * @brief Gère l'effet de la case Parc Gratuit où le joueur récupère les impôts accumulés.
     * @param joueur Référence vers l'objet Joueur.
     * @param plateau Référence vers l'objet Plateau pour récupérer les impôts.
     */
    void caseParcGratuit(Joueur &joueur, Plateau &plateau);
};