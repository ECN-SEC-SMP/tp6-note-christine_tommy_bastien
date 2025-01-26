#include "../headers/Plateau.hpp"
#include <memory>

using namespace std;

/**
 * @brief Constructeur de la classe Plateau.
 *
 * Ce constructeur initialise le plateau de jeu en ajoutant différentes cases, telles que des terrains, des gares,
 * des cases spéciales comme "Chance" ou "Prison", ainsi que des services publics et des communautés.
 * Chaque case est ajoutée au vecteur `vecteur_plateau` sous forme d'objets uniques de type dérivé (par exemple, `Terrain`, `Gare`, `Case`).
 */

Plateau::Plateau()
{
    vecteur_plateau.push_back(make_unique<Case>("Départ"));
    vecteur_plateau.push_back(make_unique<Terrain>("Boulevard de Belleville", 60, "violet", vector<uint16_t>{2, 10, 30, 90, 160, 250}));
    vecteur_plateau.push_back(make_unique<Communaute>("Caisse de communauté"));
    vecteur_plateau.push_back(make_unique<Terrain>("Rue Lecourbe", 60, "violet", vector<uint16_t>{4, 20, 60, 180, 320, 450}));
    vecteur_plateau.push_back(make_unique<Case>("Impôts sur le revenu"));
    vecteur_plateau.push_back(make_unique<Gare>("Gare Montparnasse", 200));
    vecteur_plateau.push_back(make_unique<Terrain>("Rue de Vaugirard", 100, "bleu clair", vector<uint16_t>{6, 30, 90, 270, 400, 550}));
    vecteur_plateau.push_back(make_unique<Chance>("Chance"));
    vecteur_plateau.push_back(make_unique<Terrain>("Rue de Courcelles", 100, "bleu clair", vector<uint16_t>{6, 30, 90, 270, 400, 550}));
    vecteur_plateau.push_back(make_unique<Terrain>("Avenue de la République", 120, "bleu clair", vector<uint16_t>{8, 40, 100, 300, 450, 600}));
    vecteur_plateau.push_back(make_unique<Case>("Prison"));
    vecteur_plateau.push_back(make_unique<Terrain>("Boulevard de la Villette", 140, "rose", vector<uint16_t>{10, 50, 150, 450, 625, 750}));
    vecteur_plateau.push_back(make_unique<ServicePublic>("Compagnie de distribution d'électricité", 150, vector<uint16_t>{4, 10}));
    vecteur_plateau.push_back(make_unique<Terrain>("Avenue de Neuilly", 140, "rose", vector<uint16_t>{10, 50, 150, 450, 625, 750}));
    vecteur_plateau.push_back(make_unique<Terrain>("Rue de Paradis", 160, "rose", vector<uint16_t>{12, 60, 180, 500, 700, 900}));
    vecteur_plateau.push_back(make_unique<Gare>("Gare de Lyon", 200));
    vecteur_plateau.push_back(make_unique<Terrain>("Avenue Mozart", 180, "orange", vector<uint16_t>{14, 70, 200, 550, 750, 950}));
    vecteur_plateau.push_back(make_unique<Communaute>("Caisse de communauté"));
    vecteur_plateau.push_back(make_unique<Terrain>("Boulevard Saint-Michel", 180, "orange", vector<uint16_t>{14, 70, 200, 550, 750, 950}));
    vecteur_plateau.push_back(make_unique<Terrain>("Place Pigalle", 200, "orange", vector<uint16_t>{16, 80, 220, 600, 800, 1000}));
    vecteur_plateau.push_back(make_unique<Case>("Parc gratuit"));
    vecteur_plateau.push_back(make_unique<Terrain>("Avenue Matignon", 220, "rouge", vector<uint16_t>{18, 90, 250, 700, 875, 1050}));
    vecteur_plateau.push_back(make_unique<Chance>("Chance"));
    vecteur_plateau.push_back(make_unique<Terrain>("Boulevard Malesherbes", 220, "rouge", vector<uint16_t>{18, 90, 250, 700, 875, 1050}));
    vecteur_plateau.push_back(make_unique<Terrain>("Avenue Henri-Martin", 240, "rouge", vector<uint16_t>{20, 100, 300, 750, 925, 1100}));
    vecteur_plateau.push_back(make_unique<Gare>("Gare du Nord", 200));
    vecteur_plateau.push_back(make_unique<Terrain>("Faubourg Saint-Honoré", 260, "jaune", vector<uint16_t>{22, 110, 330, 800, 975, 1150}));
    vecteur_plateau.push_back(make_unique<Terrain>("Place de la Bourse", 260, "jaune", vector<uint16_t>{22, 110, 330, 800, 975, 1150}));
    vecteur_plateau.push_back(make_unique<ServicePublic>("Compagnie de distribution des eaux", 150, vector<uint16_t>{4, 10}));
    vecteur_plateau.push_back(make_unique<Terrain>("Rue La Fayette", 280, "jaune", vector<uint16_t>{24, 120, 360, 850, 1025, 1200}));
    vecteur_plateau.push_back(make_unique<Case>("Allez en prison"));
    vecteur_plateau.push_back(make_unique<Terrain>("Avenue de Breteuil", 300, "vert", vector<uint16_t>{26, 130, 390, 900, 1100, 1275}));
    vecteur_plateau.push_back(make_unique<Terrain>("Avenue Foch", 300, "vert", vector<uint16_t>{26, 130, 390, 900, 1100, 1275}));
    vecteur_plateau.push_back(make_unique<Communaute>("Caisse de communauté"));
    vecteur_plateau.push_back(make_unique<Terrain>("Boulevard des Capucines", 320, "vert", vector<uint16_t>{28, 150, 450, 1000, 1200, 1400}));
    vecteur_plateau.push_back(make_unique<Gare>("Gare Saint-Lazare", 200));
    vecteur_plateau.push_back(make_unique<Chance>("Chance"));
    vecteur_plateau.push_back(make_unique<Terrain>("Avenue des Champs-Élysées", 350, "bleu", vector<uint16_t>{35, 175, 500, 1100, 1300, 1500}));
    vecteur_plateau.push_back(make_unique<Case>("Taxe de luxe"));
    vecteur_plateau.push_back(make_unique<Terrain>("Rue de la Paix", 400, "bleu", vector<uint16_t>{50, 200, 600, 1400, 1700, 2000}));

    impots = 0;
}

/**
 * @brief Retourne le nombre de joueurs dans le jeu.
 *
 * Cette fonction retourne le nombre de joueurs actuels dans la partie.
 * Cependant, la fonction n'est pas encore implémentée.
 *
 * @return uint8_t Le nombre de joueurs (non implémenté ici).
 */

uint8_t Plateau::getNombreJoueur()
{
    return nombreJoueurs;
}

/**
 * @brief Exécute l'action liée à une case du plateau.
 *
 * Cette fonction détermine l'action à effectuer lorsqu'un joueur atterrit sur une case du plateau.
 * L'action dépend du type de la case (terrain, gare, chance, etc.) et est exécutée pour le joueur spécifié.
 *
 * @param numCase L'index de la case sur laquelle le joueur se trouve.
 * @param joueur Une référence au joueur qui doit exécuter l'action.
 */

Propriete *Plateau::executerAction(uint8_t numCase, Joueur &joueur)
{
    if (numCase < vecteur_plateau.size())
    {
        auto &caseActuelle = vecteur_plateau[numCase];

        if (auto terrain = dynamic_cast<Terrain *>(caseActuelle.get()))
        {
            cout << joueur.getNom() << " est sur la case " << terrain->getNom() << endl
                 << endl;
            terrain->afficherDetails();
            return terrain;
            // terrain->appliquerEffet(joueur);
        }
        else if (auto gare = dynamic_cast<Gare *>(caseActuelle.get()))
        {
            cout << joueur.getNom() << " est sur la case \"gare " << gare->getNom() << endl
                 << endl;
            gare->afficherDetails();
            return gare;
            // gare->appliquerEffet(joueur);
        }
        else if (auto service = dynamic_cast<ServicePublic *>(caseActuelle.get()))
        {
            cout << joueur.getNom() << " est sur la case service public " << service->getNom() << endl
                 << endl;
            service->afficherDetails();
            return service;
            // service->appliquerEffet(joueur);
        }
        else if (auto chance = dynamic_cast<Chance *>(caseActuelle.get()))
        {
            cout << joueur.getNom() << " est sur une case Chance !" << endl
                 << endl;
            joueur.tirer_carte_chance();
            // chance->appliquerEffet(joueur);
            return nullptr;
        }
        else if (auto communaute = dynamic_cast<Communaute *>(caseActuelle.get()))
        {
            cout << joueur.getNom() << " est sur une case Caisse de Communauté !" << endl
                 << endl;
            joueur.tirer_carte_communaute();
            // communaute->appliquerEffet(joueur, nombreJoueurs, joueurs);
            return nullptr;
        }
        else if (auto _case = dynamic_cast<Case *>(caseActuelle.get()))
        {
            if (numCase == 0)
            {
                cout << joueur.getNom() << " est sur la case Départ !" << endl;
                _case->caseDepart(joueur);
            }
            else if (numCase == 4)
            {
                cout << joueur.getNom() << " est sur la case Impôts sur le revenu !" << endl;
                _case->caseImpots(joueur, *this);
            }
            else if (numCase == 10)
            {
                cout << joueur.getNom() << " est sur la case Prison !" << endl;
                _case->casePrison(joueur);
            }
            else if (numCase == 20)
            {
                cout << joueur.getNom() << " est sur la case Parc gratuit !" << endl;
                _case->caseParcGratuit(joueur, *this);
            }
            else if (numCase == 30)
            {
                cout << joueur.getNom() << " est sur la case Allez en prison !" << endl;
                joueur.aller_prison();
            }
            else if (numCase == 38)
            {
                cout << joueur.getNom() << " est sur la case Taxe de luxe !" << endl;
                _case->caseTaxe(joueur, *this);
            }
            else
            {
                cout << "Aucune action spéciale pour cette case." << endl;
            }
            return nullptr;
        }
        else
        {
            cout << "Aucune action spéciale pour cette case." << endl;
            return nullptr;
        }
    }
    else
    {
        cout << "Position invalide." << endl;
        return nullptr;
    }

    // if (numCase < vecteur_plateau.size())
    // {
    //     auto &caseActuelle = vecteur_plateau[numCase];

    //     if (auto chance = dynamic_cast<Chance *>(caseActuelle.get()))
    //     {
    //         cout << joueur.getNom() << " est sur une case Chance !" << endl;
    //         chance->appliquerEffet(joueur);
    //     }
    //     else if (auto communaute = dynamic_cast<Communaute *>(caseActuelle.get()))
    //     {
    //         cout << joueur.getNom() << " est sur une case Caisse de Communauté !" << endl;
    //         communaute->appliquerEffet(joueur);
    //     }
    //     else
    //     {
    //         cout << "Aucune action spéciale pour cette case." << endl;
    //     }
    // }
    // else
    // {
    //     cout << "Position invalide." << endl;
    // }
}

/**
 * @brief Ajoute un montant aux impôts collectés.
 *
 * Cette fonction permet d'ajouter un montant donné aux impôts collectés. Elle met également à jour l'affichage
 * pour indiquer le montant total des impôts collectés jusqu'à présent.
 *
 * @param montant Le montant des impôts à ajouter.
 */

void Plateau::ajouterImpots(uint16_t montant)
{
    impots += montant;
    cout << "Les impôts collectés s'elevent désormais à " << impots << " mono." << endl;
}

/**
 * @brief Retourne le montant total des impôts collectés.
 *
 * Cette fonction permet de récupérer la somme totale des impôts collectés jusqu'à présent.
 *
 * @return uint16_t Le montant des impôts collectés.
 */

uint16_t Plateau::getImpots()
{
    return impots;
}

// void Plateau::afficherDetailsCase(uint8_t position) const
// {
//     if (position < vecteur_plateau.size())
//     {
//         cout << "Vous êtes sur la case : " << vecteur_plateau[position]->getNom() << endl;

//         // Vérifie si la case est un Terrain
//         if (auto terrain = dynamic_cast<Terrain*>(vecteur_plateau[position].get()))
//         {
//             cout << "Type : Terrain" << endl;
//             cout << "Prix : " << terrain->getPrix() << " mono" << endl;
//         }
//         // Vérifie si la case est une Gare
//         else if (auto gare = dynamic_cast<Gare*>(vecteur_plateau[position].get()))
//         {
//             cout << "Type : Gare" << endl;
//             cout << "Prix : " << gare->getPrix() << " mono" << endl;
//         }
//         // Vérifie si la case est un Service Public
//         else if (auto service = dynamic_cast<ServicePublic*>(vecteur_plateau[position].get()))
//         {
//             cout << "Type : Service Public" << endl;
//             cout << "Prix : " << service->getPrix() << " mono" << endl;
//         }
//         // Vérifie si la case est une carte Chance
//         else if (auto chance = dynamic_cast<Chance*>(vecteur_plateau[position].get()))
//         {
//             cout << "Type : Carte Chance" << endl;
//         }
//         // Vérifie si la case est une carte Communauté
//         else if (auto commu = dynamic_cast<Communaute*>(vecteur_plateau[position].get()))
//         {
//             cout << "Type : Carte Caisse de Communauté" << endl;
//         }
//         else
//         {
//             cout << "Type : Case spéciale" << endl;
//         }
//     }
//     else
//     {
//         cout << "Case invalide." << endl;
//     }
// }