#pragma once

#include <vector>
#include <iostream>
#include "Propriete.hpp"

using namespace std;

/**
 * @class Gare
 * @brief Représente une gare dans le jeu Monopoly.
 *
 * Cette classe hérite de Propriete et ajoute la gestion des loyers spécifiques aux gares.
 */
class Gare : public Propriete
{
private:
    vector<uint16_t> loyers; ///< Vecteur contenant les loyers associés à la gare.

public:
    /**
     * @brief Constructeur par défaut de la classe Gare.
     */
    Gare();

    /**
     * @brief Constructeur paramétré de la classe Gare.
     * @param nom Le nom de la gare.
     * @param prix Le prix d'achat de la gare.
     */
    Gare(const string& nom, int prix); 

    /**
     * @brief Calcule le loyer à payer en fonction du nombre de gares possédées par le joueur.
     * @param proprietaire Référence au joueur propriétaire de la gare.
     * @return uint16_t Le montant du loyer à payer.
     */
    uint16_t calculerLoyer(Joueur &proprietaire);

    /**
     * @brief Affiche les détails de la gare (nom, prix, loyers).
     */
    virtual void afficherDetails() override;
};
