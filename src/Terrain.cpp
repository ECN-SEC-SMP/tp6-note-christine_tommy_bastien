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
 * Cette méthode ajoute une maison sur le terrain.
 */

void Terrain::ajouterMaison()
{
}

/**
 * @brief Méthode pour calculer le loyer d'un terrain.
 *
 * Cette méthode est utilisée pour calculer le loyer d'un terrain en fonction de son développement,
 * tel que le nombre de maisons ou d'hôtels sur le terrain.
 */

// uint_16 Terrain::calculerLoyer(Jouer &proprietaire)
// {
//     if (!Propriete.get)
//     {
//         cout << "La propriété n'appartient à personne. Aucun loyer à payer." << endl;
//         return 0;
//     }

// }

/**
 * @brief Méthode pour afficher les détails d'un terrain.
 *
 * Cette méthode affiche les détails d'un terrain, tels que le nom, le prix, la couleur et les loyers.
 */

void Terrain::afficherDetails()
{
    cout << "Nom : " << nom << endl;
    cout << "Prix : " << prix << " mono" << endl;
    cout << "Couleur : " << couleur << endl;
    cout << "Loyers : " << endl;
    for (uint16_t loyer : loyers)
    {
        cout << loyer << " mono" << endl;
    }
}
