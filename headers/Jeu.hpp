#pragma once

#include <iostream>
#include <vector>
#include "Des.hpp"
#include "Plateau.hpp"
#include "Joueur.hpp"

using namespace std;

/**
 * @class Jeu
 * @brief Gère le déroulement de la partie du Monopoly.
 *
 * Cette classe gère les joueurs, le plateau de jeu et le déroulement des tours.
 */
class Jeu
{
private:
    uint8_t nombreJoueurs; ///< Nombre de joueurs dans la partie.
    uint8_t tour; ///< Indice du joueur actuel.
    Des des; ///< Dés utilisés pour le déplacement.
    Plateau plateau; ///< Plateau de jeu contenant les cases.
    vector<Joueur> joueurs; ///< Liste des joueurs de la partie.

    /**
     * @brief Demande à l'utilisateur le nombre de joueurs pour la partie.
     */
    void askNombreJoueurs();

public:
    /**
     * @brief Constructeur de la classe Jeu.
     */
    Jeu();

    /**
     * @brief Démarre la partie en initialisant les joueurs.
     */
    void demarrerPartie();

    /**
     * @brief Retourne le nombre de joueurs dans la partie.
     * @return uint8_t Nombre de joueurs.
     */
    uint8_t getNbJoueur();

    /**
     * @brief Retourne la liste des joueurs de la partie.
     * @return vector<Joueur> Liste des joueurs.
     */
    vector<Joueur> getVecteurJoueurs();

    /**
     * @brief Démarre le tour du joueur actuel.
     */
    void demarrerTour();

    /**
     * @brief Termine la partie et affiche les résultats.
     */
    void finDePartie();

    /**
     * @brief Démarre le déroulement complet de la partie.
     */
    void jouerPartie();

    /**
     * @brief Retourne une référence au plateau de jeu.
     * @return Plateau& Référence au plateau.
     */
    Plateau &getPlateau()
    {
        return plateau;
    }
};