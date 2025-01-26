#pragma once

//#include "Joueur.hpp"
#include "Case.hpp"

using namespace std;


class Joueur;  // Déclaration anticipée

/**
 * @class Propriete
 * @brief Représente une propriété dans le jeu Monopoly.
 */
class Propriete : public Case
{
protected:
    uint16_t prix; ///< Prix d'achat de la propriété.
    Joueur* proprietaire; ///< Pointeur vers le joueur propriétaire.
    string nom; ///< Nom de la propriété.
    bool hotel; ///< Indique si un hôtel est construit sur la propriété.
    uint8_t nbMaisons; ///< Nombre de maisons construites sur la propriété.
    uint16_t prixMaison; ///< Prix d'une maison sur cette propriété.
    uint16_t prixHotel; ///< Prix d'un hôtel sur cette propriété.
    bool possedeParJoueur = false; ///< Indique si la propriété est possédée.

public:
    /**
     * @brief Constructeur par défaut de la classe Propriete.
     */
    Propriete();

    /**
     * @brief Définit le prix de la propriété.
     * @param prix Le prix de la propriété.
     */
    void setPrix(uint16_t prix);

    /**
     * @brief Obtient le prix de la propriété.
     * @return uint16_t Le prix de la propriété.
     */
    uint16_t getprix();

    /**
     * @brief Définit le propriétaire de la propriété.
     * @param joueur Joueur propriétaire de la propriété.
     */
    void setProprietaire(Joueur &joueur);

    /**
     * @brief Obtient le propriétaire actuel de la propriété.
     * @return Joueur* Pointeur vers le propriétaire.
     */
    Joueur* getProprietaire();

    /**
     * @brief Obtient le nom de la propriété.
     * @return string Nom de la propriété.
     */
    string getNom();

    /**
     * @brief Vérifie si un hôtel est construit sur la propriété.
     * @return bool True si un hôtel est construit, sinon false.
     */
    bool estHotel();

    /**
     * @brief Vérifie si la propriété possède des maisons.
     * @return bool True si des maisons sont construites, sinon false.
     */
    bool estMaison();

    /**
     * @brief Obtient le prix d'une maison en fonction de la position.
     * @param position Position sur le plateau.
     * @return uint16_t Le prix d'une maison.
     */
    uint16_t getPrixMaison(uint8_t position);

    /**
     * @brief Obtient le prix d'un hôtel en fonction de la position.
     * @param position Position sur le plateau.
     * @return uint16_t Le prix d'un hôtel.
     */
    uint16_t getPrixHotel(uint8_t position);

    /**
     * @brief Ajoute une maison à la propriété.
     */
    void ajouterMaison();

    /**
     * @brief Ajoute un hôtel à la propriété.
     */
    void ajouterHotel();

    /**
     * @brief Vérifie si la propriété est achetée.
     * @return bool True si la propriété est possédée, sinon false.
     */
    bool estAchetee();

    /**
     * @brief Affiche les détails de la propriété (virtuel pur).
     */
    virtual void afficherDetails() = 0;
};