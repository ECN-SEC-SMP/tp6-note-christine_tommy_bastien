#include "../headers/ServicePublic.hpp"
#include "../headers/Joueur.hpp"

/**
 * @brief Constructeur par défaut de la classe ServicePublic.
 * 
 * Ce constructeur initialise un objet de type `ServicePublic` sans nom, prix ou loyers définis.
 */

ServicePublic::ServicePublic()
{
}

/**
 * @brief Constructeur de la classe ServicePublic avec paramètres.
 * 
 * Ce constructeur permet d'initialiser un objet `ServicePublic` avec un nom, un prix et une liste de loyers spécifiés.
 * 
 * @param nom Le nom du service public.
 * @param prix Le prix d'achat du service public.
 * @param loyers Un vecteur de loyers associés au service public.
 */

ServicePublic::ServicePublic(string nom, uint16_t prix, vector<uint16_t> loyers)
{
    this->nom = nom;
    this->prix = prix;
    this->loyers = loyers;
}

/**
 * @brief Méthode pour calculer le loyer d'un service public.
 * 
 * Cette méthode est utilisée pour calculer le loyer.
 * @return La fonction retoure le montant total du loyer.
 */
 
// uint16_t ServicePublic::calculerLoyer(Joueur &proprietaire, Des &des)
// {
//     uint8_t nombreServicesPublics = proprietaire.getNombreServicesPublics();

//     switch (nombreServicesPublics) {
//         case 1:
//             cout<<"Lancer les dés : "<<endl;
//             des.lancerDes();
//             uint8_t resultatDes = des.getValue();
//             return 4*resultatDes;
//         case 2:
//             cout<<"Lancer les dés : "<<endl;
//             des.lancerDes();
//             resultatDes = des.getValue();
//             return 10*resultatDes;  
//         default:
//             cout<<"Le service public n'appartient à personne."<<endl;
//             return 0;
//     }
// }


/**
 * @brief Méthode pour afficher les détails d'un service public.
 * 
 * Cette méthode affiche les détails du service public, tels que le nom, le prix et les loyers.
 */

void ServicePublic::afficherDetails()
{
    cout << "Nom : " << nom << endl;
    cout << "Prix : " << prix << " mono" << endl;
    cout << "Loyers : " << endl;
    for (uint16_t loyer : loyers)
    {
        cout << loyer << " mono" << endl;
    }
}
