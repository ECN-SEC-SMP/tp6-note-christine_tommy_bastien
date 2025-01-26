#pragma once

#include "Propriete.hpp"
#include <vector>

using namespace std;

/**
 * @class Terrain
 * @brief Représente un terrain constructible dans le jeu Monopoly.
 */
class Terrain : public Propriete
{
private:
    string couleur; ///< Couleur du terrain.
    uint8_t nbMaisons; ///< Nombre de maisons construites sur le terrain.
    bool hotel; ///< Indique si un hôtel est construit.
    vector<uint16_t> loyers; ///< Liste des loyers pour le terrain.

public:
    /**
     * @brief Constructeur par défaut de la classe Terrain.
     */
    Terrain();

    /**
     * @brief Constructeur paramétré de la classe Terrain.
     * @param nom Nom du terrain.
     * @param prix Prix d'achat du terrain.
     * @param couleur Couleur du terrain.
     * @param loyers Vecteur contenant les loyers.
     */
    Terrain(string nom, uint16_t prix, string couleur, vector<uint16_t> loyers);

    /**
     * @brief Ajoute une maison sur le terrain.
     */
    void ajouterMaison();

    /**
     * @brief Calcule le loyer du terrain.
     * @return uint16_t Montant du loyer.
     */
    uint16_t calculerLoyer();

    /**
     * @brief Affiche les détails du terrain.
     */
    virtual void afficherDetails() override;
};