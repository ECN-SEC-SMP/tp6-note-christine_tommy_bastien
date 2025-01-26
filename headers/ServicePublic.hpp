#pragma once

#include <vector>
#include "Propriete.hpp"
#include "Des.hpp"

using namespace std;

/**
 * @class ServicePublic
 * @brief Représente un service public dans le jeu Monopoly.
 */
class ServicePublic : public Propriete
{
private:
    vector<uint16_t> loyers; ///< Liste des loyers selon le nombre de services possédés.

public:
    /**
     * @brief Constructeur par défaut de la classe ServicePublic.
     */
    ServicePublic();

    /**
     * @brief Constructeur paramétré de la classe ServicePublic.
     * @param nom Nom du service public.
     * @param prix Prix d'achat du service public.
     * @param loyers Vecteur de loyers applicables.
     */
    ServicePublic(string nom, uint16_t prix, vector<uint16_t> loyers);

    /**
     * @brief Calcule le loyer dû au propriétaire en fonction du lancer de dés.
     * @param proprietaire Joueur propriétaire du service.
     * @param des Référence à l'objet Des.
     * @return uint16_t Montant du loyer.
     */
    uint16_t calculerLoyer(Joueur &proprietaire, Des &des);

    /**
     * @brief Affiche les détails du service public.
     */
    virtual void afficherDetails() override;
};