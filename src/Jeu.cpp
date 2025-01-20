#include "../headers/Jeu.hpp"

/**
 * @brief Constructeur par défaut de la classe Jeu.
 *
 * Ce constructeur crée une instance de la classe Jeu sans initialiser les attributs.
 */
Jeu::Jeu()
{
}

/**
 * @brief Démarre une partie de jeu.
 *
 * Cette fonction lance le démarrage de la partie, en demandant d'abord le nombre de joueurs,
 * puis en initialisant les joueurs et en les ajoutant au vecteur `joueurs`.
 * Elle affiche également un message indiquant que la partie commence.
 */
void Jeu::demarrerPartie()
{
    cout << "Appuyez sur entrée pour démarrer une partie" << endl;
    cin.get();

    askNombreJoueurs();

    for (unsigned int i = 0; i < nombreJoueurs; i++)
    {
        Joueur joueur;
        joueur.setNom();
        joueurs.push_back(joueur); // Ajoute un joueur au vecteur
    }

    cout << "La partie commence !" << endl;
}

/**
 * @brief Demande le nombre de joueurs pour la partie.
 *
 * Cette fonction demande à l'utilisateur combien de joueurs participent à la partie.
 * Elle vérifie que le nombre de joueurs est compris entre 2 et 8. Si ce n'est pas le cas,
 * elle redemande le nombre de joueurs.
 */

void Jeu::askNombreJoueurs()
{
    uint8_t value;

    cout << "Combien y a t-il de joueurs ?" << endl;
    cin >> value;

    if (value < 2)
    {
        cout << "Pas assez de joueurs, il faut être au moins deux" << endl;
        askNombreJoueurs();
    }
    else if (value > 8)
    {
        cout << "Trop de joueurs, il faut être maximum huit" << endl;
        askNombreJoueurs();
    }

    this->nombreJoueurs = value;
};

/**
 * @brief Démarre un tour pour le joueur actuel.
 *
 * Cette fonction permet de gérer le déroulement du tour pour le joueur courant,
 * en demandant un lancer de dés et en exécutant l'action associée à la position actuelle du joueur.
 * Si le joueur fait un double, il pourra rejouer à la fin de son tour.
 */

void Jeu::demarrerTour()
{
    cout << "C'est au tour de " << joueurs[tour].getNom() << endl;
    cout << "Appuyez sur entrée pour lancer les dés" << endl;
    cin.get();
    bool resDouble = joueurs[tour].lancerDes(this->des);

    if (resDouble)
    {
        cout << "Vous avez fait un double, vous pourrez rejouer à la fin de votre tour" << endl;
    }
    else
    {
        tour++;
    }

    if (tour >= nombreJoueurs)
    {
        tour = 0;
    }

    joueurs[tour].avancer(des.getValue());
    plateau.executerAction(joueurs[tour].getPosition(), joueurs[tour]);

    demarrerTour();
}

/**
 * @brief Termine la partie de jeu.
 *
 * Cette fonction permet de gérer la fin de la partie, mais elle est actuellement vide et nécessite une implémentation.
 */

void Jeu::finDePartie()
{
}

/**
 * @brief Retourne le nombre de joueurs dans la partie.
 *
 * @return uint8_t Le nombre de joueurs.
 */

uint8_t Jeu::getNbJoueur()
{
    return nombreJoueurs;
}

/**
 * @brief Retourne le vecteur des joueurs.
 *
 * @return vector<Joueur> Un vecteur contenant tous les joueurs de la partie.
 */

vector<Joueur> Jeu::getVecteurJoueurs()
{
    return joueurs;
}