#include "../headers/Jeu.hpp"

Jeu::Jeu()
{
}

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

void Jeu::askNombreJoueurs()
{
    uint8_t value;

    cout << "Combien y a t-il de joueurs ?" << endl;
    cin >> value;

    if (value < 2)
    {
        cout << "Pas assez de joueurs, il faut être au moins deux" << endl;
        this->askNombreJoueurs();
    }
    else if (value > 8)
    {
        cout << "Trop de joueurs, il faut être maximum huit" << endl;
        this->askNombreJoueurs();
    }
    else
    {
        this->askNombreJoueurs();
    }

    this->nombreJoueurs = value;
};

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
}

void Jeu::incrementerTour()
{
}

void Jeu::finDePartie()
{
}