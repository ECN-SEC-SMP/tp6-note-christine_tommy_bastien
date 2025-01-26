#include "../headers/Gare.hpp"
#include "../headers/Joueur.hpp"

/**
 * @brief Constructeur par défaut de la classe Gare.
 * 
 * Ce constructeur crée une instance de la classe Gare sans initialiser les attributs.
 */

Gare::Gare() {
}

/**
 * @brief Constructeur de la classe Gare avec paramètres.
 * 
 * Ce constructeur permet d'initialiser une instance de la classe Gare avec un nom, un prix et une liste de loyers.
 * 
 * @param nom Le nom de la gare.
 * @param prix Le prix de la gare.
 * @param loyers Un vecteur contenant les loyers associés à la gare.
 */

Gare::Gare(const string& nom, int prix) {
    this->nom = nom;
    this->prix = prix;
}

/**
 * @brief Calcule le loyer de la gare.
 * 
 * Cette fonction permet de calculer le loyer de la gare.
 */
uint16_t Gare::calculerLoyer(Joueur &proprietaire) {
    uint8_t nombreGares = proprietaire.getNombreGares();

    switch (nombreGares) {
        case 1:
            return 25;
            cout<<"Vous devez 25 monos à"<<proprietaire.getNom()<<"!"<<endl;
        case 2:
            return 50;
            cout<<"Vous devez 50 monos à"<<proprietaire.getNom()<<"!"<<endl;
        case 3:
            return 100;
            cout<<"Vous devez 100 monos à"<<proprietaire.getNom()<<"!"<<endl;
        case 4:
            return 200;
            cout<<"Vous devez 200 monos à"<<proprietaire.getNom()<<"!"<<endl;
        default:
            return 0;
            cout<<"La gare n'appartient à personne."<<endl;
    }
}

/**
 * @brief Affiche les détails de la gare.
 * 
 * Cette fonction affiche les détails de la gare, tels que le nom, le prix et les loyers.
 */

void Gare::afficherDetails() {
    cout << "Nom : " << nom << endl;
    cout << "Prix : " << prix << " mono" << endl;
    cout << "Loyers 1 gare: " << "25 mono"<< endl;
    cout << "Loyers 2 gares : " << "50 mono" <<endl;
    cout << "Loyers 3 gares : " << "100 mono" <<endl;
    cout << "Loyers 4 gares : " << "200 mono" <<endl;

}



