#include "../headers/Plateau.hpp"

/**
 * @brief Constructeur de la classe Plateau.
 * 
 * Ce constructeur initialise le plateau de jeu en ajoutant différentes cases, telles que des terrains, des gares,
 * des cases spéciales comme "Chance" ou "Prison", ainsi que des services publics et des communautés. 
 * Chaque case est ajoutée au vecteur `vecteur_plateau` sous forme d'objets uniques de type dérivé (par exemple, `Terrain`, `Gare`, `Case`).
 */

Plateau::Plateau()
{
    this->vecteur_plateau.push_back(make_unique<Case>("Départ"));
    this->vecteur_plateau.push_back(make_unique<Terrain>("Boulevard de Belleville", 60, "violet", vector<uint16_t>{2, 10, 30, 90, 160, 250}));
    this->vecteur_plateau.push_back(make_unique<Communaute>("Caisse de communauté"));
    this->vecteur_plateau.push_back(make_unique<Terrain>("Rue Lecourbe", 60, "violet", vector<uint16_t>{4, 20, 60, 180, 320, 450}));
    this->vecteur_plateau.push_back(make_unique<Case>("Impôts sur le revenu"));
    this->vecteur_plateau.push_back(make_unique<Gare>("Gare Montparnasse", 200));
    this->vecteur_plateau.push_back(make_unique<Terrain>("Rue de Vaugirard", 100, "bleu clair", vector<uint16_t>{6, 30, 90, 270, 400, 550}));
    this->vecteur_plateau.push_back(make_unique<Chance>("Chance"));
    this->vecteur_plateau.push_back(make_unique<Terrain>("Rue de Courcelles", 100, "bleu clair", vector<uint16_t>{6, 30, 90, 270, 400, 550}));
    this->vecteur_plateau.push_back(make_unique<Terrain>("Avenue de la République", 120, "bleu clair", vector<uint16_t>{8, 40, 100, 300, 450, 600}));
    this->vecteur_plateau.push_back(make_unique<Case>("Prison"));
    this->vecteur_plateau.push_back(make_unique<Terrain>("Boulevard de la Villette", 140, "rose", vector<uint16_t>{10, 50, 150, 450, 625, 750}));
    this->vecteur_plateau.push_back(make_unique<ServicePublic>("Compagnie de distribution d'électricité", 150, vector<uint16_t>{4, 10}));
    this->vecteur_plateau.push_back(make_unique<Terrain>("Avenue de Neuilly", 140, "rose", vector<uint16_t>{10, 50, 150, 450, 625, 750}));
    this->vecteur_plateau.push_back(make_unique<Terrain>("Rue de Paradis", 160, "rose", vector<uint16_t>{12, 60, 180, 500, 700, 900}));
    this->vecteur_plateau.push_back(make_unique<Gare>("Gare de Lyon", 200));
    this->vecteur_plateau.push_back(make_unique<Terrain>("Avenue Mozart", 180, "orange", vector<uint16_t>{14, 70, 200, 550, 750, 950}));
    this->vecteur_plateau.push_back(make_unique<Communaute>("Caisse de communauté"));
    this->vecteur_plateau.push_back(make_unique<Terrain>("Boulevard Saint-Michel", 180, "orange", vector<uint16_t>{14, 70, 200, 550, 750, 950}));
    this->vecteur_plateau.push_back(make_unique<Terrain>("Place Pigalle", 200, "orange", vector<uint16_t>{16, 80, 220, 600, 800, 1000}));
    this->vecteur_plateau.push_back(make_unique<Case>("Parc gratuit"));
    this->vecteur_plateau.push_back(make_unique<Terrain>("Avenue Matignon", 220, "rouge", vector<uint16_t>{18, 90, 250, 700, 875, 1050}));
    this->vecteur_plateau.push_back(make_unique<Chance>("Chance"));
    this->vecteur_plateau.push_back(make_unique<Terrain>("Boulevard Malesherbes", 220, "rouge", vector<uint16_t>{18, 90, 250, 700, 875, 1050}));
    this->vecteur_plateau.push_back(make_unique<Terrain>("Avenue Henri-Martin", 240, "rouge", vector<uint16_t>{20, 100, 300, 750, 925, 1100}));
    this->vecteur_plateau.push_back(make_unique<Gare>("Gare du Nord", 200));
    this->vecteur_plateau.push_back(make_unique<Terrain>("Faubourg Saint-Honoré", 260, "jaune", vector<uint16_t>{22, 110, 330, 800, 975, 1150}));
    this->vecteur_plateau.push_back(make_unique<Terrain>("Place de la Bourse", 260, "jaune", vector<uint16_t>{22, 110, 330, 800, 975, 1150}));
    this->vecteur_plateau.push_back(make_unique<ServicePublic>("Compagnie de distribution des eaux", 150, vector<uint16_t>{4, 10}));
    this->vecteur_plateau.push_back(make_unique<Terrain>("Rue La Fayette", 280, "jaune", vector<uint16_t>{24, 120, 360, 850, 1025, 1200}));
    this->vecteur_plateau.push_back(make_unique<Case>("Allez en prison"));
    this->vecteur_plateau.push_back(make_unique<Terrain>("Avenue de Breteuil", 300, "vert", vector<uint16_t>{26, 130, 390, 900, 1100, 1275}));
    this->vecteur_plateau.push_back(make_unique<Terrain>("Avenue Foch", 300, "vert", vector<uint16_t>{26, 130, 390, 900, 1100, 1275}));
    this->vecteur_plateau.push_back(make_unique<Communaute>("Caisse de communauté"));
    this->vecteur_plateau.push_back(make_unique<Terrain>("Boulevard des Capucines", 320, "vert", vector<uint16_t>{28, 150, 450, 1000, 1200, 1400}));
    this->vecteur_plateau.push_back(make_unique<Gare>("Gare Saint-Lazare", 200));
    this->vecteur_plateau.push_back(make_unique<Chance>("Chance"));
    this->vecteur_plateau.push_back(make_unique<Terrain>("Avenue des Champs-Élysées", 350, "bleu", vector<uint16_t>{35, 175, 500, 1100, 1300, 1500}));
    this->vecteur_plateau.push_back(make_unique<Case>("Taxe de luxe"));
    this->vecteur_plateau.push_back(make_unique<Terrain>("Rue de la Paix", 400, "bleu", vector<uint16_t>{50, 200, 600, 1400, 1700, 2000}));

    this->impots = 0;
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

void Plateau::executerAction(uint8_t numCase, Joueur &joueur)
{
    
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
