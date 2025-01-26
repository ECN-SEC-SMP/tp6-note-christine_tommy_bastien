#pragma once

#include <vector>
#include <memory>
#include "Case.hpp"
#include "Terrain.hpp"
#include "Gare.hpp"
#include "ServicePublic.hpp"
#include "Communaute.hpp"
#include "Chance.hpp"
#include "Joueur.hpp"

using namespace std;

/**
 * @class Plateau
 * @brief Représente le plateau de jeu contenant toutes les cases du Monopoly.
 */
class Plateau
{
private:
    vector<unique_ptr<Case>> vecteur_plateau; ///< Vecteur contenant toutes les cases du plateau.
    uint16_t impots; ///< Montant des impôts collectés sur le plateau.
    vector<Joueur> joueurs; ///< Liste des joueurs sur le plateau.
    uint8_t nombreJoueurs; ///< Nombre de joueurs dans la partie.

public:
    /**
     * @brief Constructeur de la classe Plateau.
     */
    Plateau();

    /**
     * @brief Retourne le nombre de joueurs sur le plateau.
     * @return uint8_t Nombre de joueurs.
     */
    uint8_t getNombreJoueur();

    /**
     * @brief Exécute l'action de la case où se trouve le joueur.
     * @param numCase Index de la case actuelle du joueur.
     * @param joueur Référence au joueur concerné.
     * @return Propriete* Pointeur vers la propriété si elle existe, sinon nullptr.
     */
    Propriete* executerAction(uint8_t numCase, Joueur &joueur);

    /**
     * @brief Ajoute un montant aux impôts collectés sur le plateau.
     * @param montant Montant à ajouter aux impôts.
     */
    void ajouterImpots(uint16_t montant);

    /**
     * @brief Retourne le montant total des impôts collectés.
     * @return uint16_t Montant total des impôts.
     */
    uint16_t getImpots();

    /**
     * @brief Affiche les détails de la case spécifiée.
     * @param position Position de la case à afficher.
     */
    void afficherDetailsCase(uint8_t position) const;
};