#pragma once

#include "Carte.hpp"
#include "Joueur.hpp"

/**
 * @class Communaute
 * @brief Gère les cartes de type Caisse de Communauté dans le jeu Monopoly.
 * 
 * Ces cartes ont divers effets, comme payer des frais ou recevoir de l'argent.
 */
class Communaute : public Carte
{
private:
    vector<string> cartesCommunaute;

public:
    /**
     * @brief Constructeur par défaut de la classe Communaute.
     */
    Communaute();

    /**
     * @brief Constructeur paramétré de la classe Communaute.
     * @param nom Nom de la carte Caisse de Communauté.
     */
    Communaute(std::string nom);

    /**
     * @brief Applique l'effet de la carte Caisse de Communauté sur le joueur.
     * @param joueur Référence vers l'objet Joueur.
     * @param nbJoueurs Nombre total de joueurs dans la partie.
     * @param joueurs Vecteur contenant tous les joueurs de la partie.
     */
    void appliquerEffet(Joueur &joueur, uint8_t nbJoueurs, vector<Joueur> joueurs);

    /**
     * @brief Affiche le nom de la carte Caisse de Communauté tirée.
     */
    void afficherNomCarte();
};