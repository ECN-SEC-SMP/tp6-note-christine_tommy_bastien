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

void Terrain::ajouterMaison() {
    if (!hotel && nbMaisons < 4) {
        nbMaisons++;
    }
    else if (nbMaisons == 4 && !hotel) {
        hotel = true;
    }
}

/**
 * @brief Méthode pour calculer le loyer d'un terrain.
 *
 * Cette méthode est utilisée pour calculer le loyer d'un terrain en fonction de son développement,
 * tel que le nombre de maisons ou d'hôtels sur le terrain.
 */

uint16_t Terrain::calculerLoyer() {
    if (hotel) {
        return loyers[5];  // Loyer avec un hôtel (index 5)
    } else if (nbMaisons > 0) {
        return loyers[nbMaisons];  // Loyer selon le nombre de maisons
    } else {
        return loyers[0];  // Loyer sans maison
    }
}

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
    cout << "Loyers terrain nu : " << loyers[0]<< " mono" << endl;
    cout << "Loyers avec 1 maison : " << loyers[1]<< " mono" << endl;
    cout << "Loyers avec 2 maison : " << loyers[2]<< " mono" << endl;
    cout << "Loyers avec 3 maison : " << loyers[3]<< " mono" << endl;
    cout << "Loyers avec 4 maison : " << loyers[4]<< " mono" << endl;
    cout << "Loyers avec hôtel : " << loyers[5]<< " mono" << endl;
}
