#include "../headers/Communaute.hpp"
#include "../headers/Joueur.hpp"
#include "../headers/Plateau.hpp"
#include <iostream>
using namespace std;

Communaute::Communaute()
{
    this->cartesCommunaute = {
        "Placez-vous sur la case départ",
        "Erreur de la banque en votre faveur. Recevez 200 monos",
        "Payez la note du médecin 50 monos",
        "La vente de votre stock vous rapporte 50 monos", 
        "Vous êtes libéré de prison. Cette carte peut être conservée jusqu’à ce qu’elle soit utilisée ou vendue.",
        "Aller en prison. Rendez-vous directement à la prison. Ne franchissez pas par la case départ, ne touchez pas 200 monos", 
        "Retournez à Belleville",
        "Recevez votre revenu annuel 100 monos",
        "C’est votre anniversaire. Chaque joueur doit vous donner 10 monos",
        "Les contributions vous remboursent la somme de 20 monos", 
        "Recevez votre intérêt sur l’emprunt à 7% 25 monos",
        "Payez votre Police d’Assurance 50 monos",
        "Payez une amende de 10 monos ou bien tirez une carte « CHANCE »",
        "Rendez-vous à la gare la plus proche. Si vous passez par la case départ, recevez 200 monos",
        "Vous avez gagné le deuxième Prix de Beauté. Recevez 10 monos",
        "Vous héritez 100 monos"};
}

void Communaute::afficherNomCarte()
{
    cout << "Carte tirée : " << this->cartesCommunaute[this->nbRandom] << endl;
}


void Communaute::appliquerEffet(Joueur &joueur, Pion pion, Plateau plateau)
{
    switch (this->nbRandom)
    {
        case 0:
            joueur.avancer_pion(40 - joueur.getPosition());
            joueur.recevoir_argent(200);
            break;
        case 1:
            joueur.recevoir_argent(200);
            break;
        case 2:
            joueur.payer_banque(50);
            break;
        case 3:
            joueur.recevoir_argent(50);
            break;
        case 4:
            cout << joueur.getNom() << " a tiré une carte 'Libéré de prison'. Elle peut être conservée." << endl;
            //joueur.recevoir_carte_sortie_prison();
            break;
        case 5:
            joueur.aller_prison(pion);
            break;
        case 6:
            if (joueur.getPosition()==0)
                joueur.avancer_pion(1);
            else
                joueur.avancer_pion(41 - joueur.getPosition());
            break;
        case 7:
            joueur.recevoir_argent(100);
            break;
        case 8:
            joueur.recevoir_argent(10*plateau.getNombreJoueur());
            //comment faire pour enelver de l'argent à tous les joueurs
            break;
        case 9:
            joueur.recevoir_argent(20);
            break;
        case 10:
            joueur.recevoir_argent(25);
            break;
        case 11:
            joueur.payer_banque(50);
            break;
        case 12:
            //"Payez une amende de 10 monos ou bien tirez une carte « CHANCE »",
            cout<<"0 : Payez une amende de 10 monos"<<endl;
            cout<<"1 : Tirez une carte « CHANCE »" <<endl;

            int choix;
            while (true) {
                string input;
                cout << "Entrez votre choix (0 ou 1) : ";
                getline(cin, input);

                stringstream ss(input);
                if (ss >> choix && (choix == 0 || choix == 1)) {
                    break; 
                } else {
                    cout << "Choix invalide. Veuillez entrer 0 ou 1." << endl;
                }
            }

            if (choixVs == 0) {
                joueur.payer_banque(10);
                cout << "Vous avez payé une amende de 10 monos." << endl;
            } else {
                joueur.tirer_carte_chance()
                cout << "Vous avez choisi de tirer une carte Chance." << endl;
            break;

        case 13:
            //"Rendez-vous à la gare la plus proche. Si vous passez par la case départ, recevez 200 monos"
            
            if(0<=joueur.getPosition()<=9) pion.setPosition(5);
            else if(10<=joueur.getPosition<=19) pion.setPosition(15);
            else if(20<=joueur.getPosition<=29) pion.setPosition(25);
            else(30<=joueur.getPosition<=39) pion.setPosition(35);
            break;
        case 14:
            joueur.recevoir_argent(10);
            break;
        case 15:
            joueur.recevoir_argent(100);
            break;


        default:
            cout << "Erreur: Carte chance invalide." << endl;
            break;
    }
}