#include <iostream>
#include "../headers/Jeu.hpp"

using namespace std;

int main()
{
    Jeu jeu;

    // Démarrer la partie (initialisation des joueurs)
    jeu.demarrerPartie();

    // Jouer la partie (lancer les tours)
    jeu.jouerPartie();

    cout << "La partie est terminée ! Merci d'avoir joué !" << endl;
    return 0;
}
