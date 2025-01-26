#pragma once

#include <iostream>
#include <vector>
#include <string>
#include "Propriete.hpp"
// #include "Plateau.hpp"
#include "Des.hpp"
#include "Pion.hpp"
// #include "Jeu.hpp"

class Plateau;
class Jeu;

using namespace std;

/**
 * @class Joueur
 * @brief Représente un joueur dans le jeu Monopoly.
 *
 * La classe Joueur gère les propriétés, l'argent, les mouvements et les interactions avec le plateau.
 */
class Joueur
{
private:
    uint16_t argent_total;          ///< Argent total du joueur.
    string nom;                     ///< Nom du joueur.
    bool prison;                    ///< Statut indiquant si le joueur est en prison.
    bool carteChancePrison;         ///< Indique si le joueur possède une carte de sortie de prison.
    vector<Propriete *> proprietes; ///< Liste des propriétés du joueur.
    Pion pion;                      ///< Pion du joueur.
    Jeu *jeu;                       ///< Pointeur vers la partie en cours.

public:
    /**
     * @brief Constructeur par défaut de la classe Joueur.
     */
    Joueur();

    /**
     * @brief Définit le nom du joueur.
     */
    void setNom();

    /**
     * @brief Obtient le nom du joueur.
     * @return string Nom du joueur.
     */
    string getNom();

    /**
     * @brief Obtient la position actuelle du pion du joueur.
     * @return uint8_t Position du joueur sur le plateau.
     */
    uint8_t getPosition();

    /**
     * @brief Lance les dés pour le joueur.
     * @param des Référence vers l'objet Des.
     * @return bool Retourne true si un double est obtenu, sinon false.
     */
    bool lancerDes(Des &des);

    /**
     * @brief Déplace le joueur sur le plateau.
     * @param nombre Nombre de cases à avancer.
     */
    void avancer(uint8_t nombre);

    /**
     * @brief Permet au joueur d'acheter une propriété.
     * @param joueur Joueur acheteur.
     * @param propriete Propriété à acheter.
     */
    void acheterPropriete(Joueur joueur, Propriete *);

    /**
     * @brief Vend une propriété appartenant au joueur.
     * @param propriete Pointeur vers la propriété à vendre.
     */
    void vendrePropriete(Propriete *);

    /**
     * @brief Retourne la liste des propriétés possédées par le joueur.
     * @return vector<Propriete *> Liste des propriétés du joueur.
     */
    vector<Propriete *> getProprietes();

    /**
     * @brief Le joueur tire une carte Chance et applique ses effets.
     */
    void tirer_carte_chance();

    /**
     * @brief Le joueur tire une carte de Communauté et applique ses effets.
     */
    void tirer_carte_communaute();

    /**
     * @brief Le joueur reçoit une somme d'argent.
     * @param montant Montant reçu par le joueur.
     */
    void recevoir_argent(uint16_t montant);

    /**
     * @brief Le joueur paie un autre joueur.
     * @param montant Montant à payer.
     * @param joueur_a_payer Joueur qui doit recevoir le paiement.
     */
    void payer_joueur(uint16_t montant, Joueur joueur_a_payer);

    /**
     * @brief Le joueur paie un montant à la banque.
     * @param montant Montant à payer à la banque.
     */
    void payer_banque(uint16_t montant) const;

    /**
     * @brief Gère le paiement d'impôts par le joueur.
     * @param montant Montant des impôts à payer.
     * @param plateau Référence au plateau pour ajouter les impôts collectés.
     */
    void payer_impots(uint16_t montant, Plateau &plateau);

    /**
     * @brief Envoie le joueur en prison.
     */
    void aller_prison();

    /**
     * @brief Joueur sort de la  prison.
     */
    void sortir_prison();

    /**
     * @brief Déclare la faillite du joueur.
     */
    void Faillite();

    /**
     * @brief Affiche les propriétés possédées par le joueur.
     */
    void afficherProprietes();
    /**
     * @brief Retourne le nombre total d'hôtels possédés par le joueur.
     * @return uint8_t Nombre d'hôtels détenus.
     */
    uint8_t getNombreHotels();

    /**
     * @brief Retourne le nombre total de maisons possédées par le joueur.
     * @return uint8_t Nombre total de maisons.
     */
    uint8_t getNombreMaisons();

    /**
     * @brief Ajoute une maison à une propriété possédée par le joueur.
     * @param propriete Référence vers la propriété sur laquelle la maison sera ajoutée.
     */
    void ajouterMaison(Propriete &propriete);

    /**
     * @brief Ajoute un hôtel à une propriété possédée par le joueur.
     * @param propriete Référence vers la propriété sur laquelle l'hôtel sera ajouté.
     */
    void ajouterHotel(Propriete &propriete);

    /**
     * @brief Déplace le joueur d'un nombre relatif de cases.
     * @param val_des Nombre de cases à avancer.
     */
    void aller_a_une_case(uint8_t val_des);

    /**
     * @brief Déplace le joueur à une case spécifique du plateau.
     * @param val_case Indice de la case cible.
     */
    void aller_a_une_case_absolue(uint8_t val_case);

    /**
     * @brief Retourne le nombre de gares possédées par le joueur.
     * @return uint8_t Nombre de gares possédées.
     */
    uint8_t getNombreGares();
    /**
     * @brief Retourne le nombre de services publics possédés par le joueur.
     * @return uint8_t Nombre de services publics possédés.
     */
    uint8_t getNombreServicesPublics();
    /**
     * @brief Affiche l'argent actuel du joueur.
     */
    void afficherArgent() const;
    /**
     * @brief Donne au joueur une carte "Sortie de prison".
     */
    void recevoir_carte_sortie_prison();

    /**
     * @brief Vérifie si le joueur possède une carte "Sortie de prison".
     * @return true si le joueur possède la carte, false sinon.
     */
    bool possede_carte_sortie_prison() const;

    /**
     * @brief Utilise la carte "Sortie de prison" pour sortir de prison.
     */
    void utiliser_carte_sortie_prison();
};
