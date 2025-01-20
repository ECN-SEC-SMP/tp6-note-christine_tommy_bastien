#include "../headers/Terrain.hpp"

/**
 * @brief Constructeur par défaut de la classe Terrain.
 *
 * Ce constructeur initialise un objet de type `Terrain` sans nom, prix, couleur ni loyers définis.
 */

Terrain::Terrain()
{
}

/**
 * @brief Constructeur de la classe Terrain avec paramètres.
 *
 * Ce constructeur permet d'initialiser un objet `Terrain` avec un nom, un prix, une couleur et une liste de loyers spécifiés.
 *
 * @param nom Le nom du terrain.
 * @param prix Le prix d'achat du terrain.
 * @param couleur La couleur du terrain, utilisée pour la classification des propriétés.
 * @param loyers Un vecteur de loyers associés au terrain.
 */

Terrain::Terrain(string nom, uint16_t prix, string couleur, vector<uint16_t> loyers)
{
    this->nom = nom;
    this->prix = prix;
    this->couleur = couleur;
    this->loyers = loyers;
}

/**
 * @brief Méthode pour ajouter une maison sur le terrain.
 *
 * Cette méthode est actuellement vide, mais elle pourrait être utilisée pour ajouter une maison sur le terrain.
 * La logique associée à l'ajout d'une maison, comme vérifier si le terrain permet d'ajouter une maison ou limiter le nombre,
 * pourrait être implémentée ici.
 */

void Terrain::ajouterMaison()
{
}

/**
 * @brief Méthode pour calculer le loyer d'un terrain.
 *
 * Cette méthode est actuellement vide, mais elle pourrait être utilisée pour calculer le loyer d'un terrain en fonction de son développement,
 * tel que le nombre de maisons ou d'hôtels sur le terrain.
 */

void Terrain::calculerLoyer()
{
}