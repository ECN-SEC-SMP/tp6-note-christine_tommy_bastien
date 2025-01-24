#include "../headers/Jeu.hpp"
#include <limits>
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

    for (uint8_t i = 0; i < nombreJoueurs; i++)
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
    int value;

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

void Jeu::jouerPartie()
{
    bool partieEnCours = true;
    while (partieEnCours)
    {
        for (Joueur& joueur : joueurs)
        {
            cout << "\nC'est au tour de " << joueur.getNom() << "." << endl;
            cout << "Appuyez sur Entrée pour lancer les dés..." << endl;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin.get();

            // Lancer les dés
            bool resDouble = joueur.lancerDes(this->des);
            int valeurDes = des.getValue();
            cout << joueur.getNom() << " a obtenu " << valeurDes << " et avance." << endl;

            joueur.avancer(valeurDes);
            int position = joueur.getPosition();
            cout << joueur.getNom() << " est maintenant sur la case " << position << "." << endl;

            // Exécution de l'action de la case
            plateau.executerAction(position, joueur);

            // Boucle pour les choix du joueur
            bool tourTermine = false;
            while (!tourTermine)
            {
                cout << "\nOptions disponibles :" << endl;
                cout << "1. Acheter la propriété" << endl;
                cout << "2. Afficher mes propriétés" << endl;
                cout << "3. Voir mon argent" << endl;
                cout << "4. Passer le tour" << endl;
                cout << "5. Quitter la partie" << endl;

                int choix;
                cout << "Votre choix : ";
                cin >> choix;

                switch (choix)
                {
                case 1:
                    cout << joueur.getNom() << " souhaite acheter la propriété." << endl;
                    joueur.acheterPropriete(joueur, nullptr);  // À remplacer par une logique réelle
                    break;
                case 2:
                    joueur.afficherProprietes();
                    break;
                case 3:
                    joueur.afficherArgent();
                    break;
                case 4:
                    cout << joueur.getNom() << " passe son tour." << endl;
                    tourTermine = true;
                    break;
                case 5:
                    cout << joueur.getNom() << " a décidé de quitter la partie." << endl;
                    partieEnCours = false;
                    tourTermine = true;
                    break;
                default:
                    cout << "Option invalide. Veuillez choisir à nouveau." << endl;
                }
            }

            if (!partieEnCours)
                break;
        }
    }

    cout << "Fin de la partie." << endl;
}

