#pragma once

#include "Carte.hpp"
#include "Joueur.hpp"
#include "Pion.hpp"

/**
 * @class Chance
 * @brief Gère les cartes de type Chance dans le jeu Monopoly.
 * 
 * Les cartes Chance peuvent avoir des effets variés, tels que déplacer un joueur ou lui donner de l'argent.
 */
class Chance : public Carte
{
private:
    vector<string> cartesChance;

public:
    /**
     * @brief Constructeur par défaut de la classe Chance.
     */
    Chance();

    /**
     * @brief Constructeur paramétré de la classe Chance.
     * @param nom Nom de la carte Chance.
     */
    Chance(std::string nom);

    /**
     * @brief Affiche le nom de la carte Chance tirée.
     */
    void afficherNomCarte();

    /**
     * @brief Applique l'effet de la carte Chance sur le joueur.
     * @param joueur Référence vers l'objet Joueur qui subit l'effet.
     */
    void appliquerEffet(Joueur &joueur);
};