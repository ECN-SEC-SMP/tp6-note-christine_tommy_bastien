/*class Carte: public Case

{
    private : 
        string nom;
        unsigned int nbRandom;

    public:
        void tirerCarte();
};
*/

#include "Carte.hpp"

vector<string> Carte_chance = {
    "Rendez-vous à la Rue de la Paix",
    "Avancer jusqu’à la case départ",
    "Rendez-vous à l’Avenue Henri-Martin. Si vous passez par la case départ, recevez F20 000",
    "Avancez au Boulevard de La Villette. Si vous passez par la case départ, recevez F20 000",
    "Vous êtes imposé pour les réparations de voirie à raison de F4 000 par maison et F11 500 par hôtel.",
    "Avancez jusqu’à la Gare de Lyon. Si vous passez par la case départ, recevez F20 000",
    "Vous avez gagné le prix de mots croisés. Recevez F10 000",
    "La banque vous verse un dividende de F5 000",
    "Vous êtes libéré de prison. Cette carte peut être conservée jusqu’à ce qu’elle soit utilisée ou vendue.",
    "Reculez de trois cases",
    "Aller en prison. Rendez-vous directement en prison. Ne franchissez pas par la case départ, ne touchez pas F20 000",
    "Faites des réparations dans toutes vos maisons. Versez pour chaque maison F2 500. Versez pour chaque hôtel F10 000",
    "Amende pour excès de vitesse F1 500",
    "Payez pour frais de scolarité F15 000",
    "Amende pour ivresse F2 000",
    "Votre immeuble et votre prêt rapportent. Vous devez toucher F15 000"
};

vector<string> Carte_communaute = {
    "Placez-vous sur la case départ",
    "Erreur de la banque en votre faveur. Recevez F20 000",
    "Payez la note du médecin F5 000",
    "La vente de votre stock vous rapporte F5 000",
    "Vous êtes libéré de prison. Cette carte peut être conservée jusqu’à ce qu’elle soit utilisée ou vendue.",
    "Aller en prison. Rendez-vous directement à la prison. Ne franchissez pas par la case départ, ne touchez pas F20 000",
    "Retournez à Belleville",
    "Recevez votre revenu annuel F 10 000",
    "C’est votre anniversaire. Chaque joueur doit vous donner F 1 000",
    "Les contributions vous remboursent la somme de F2 000",
    "Recevez votre intérêt sur l’emprunt à 7% F2 500",
    "Payez votre Police d’Assurance F5 000",
    "Payez une amende de F 1 000 ou bien tirez une carte « CHANCE »",
    "Rendez-vous à la gare la plus proche. Si vous passez par la case départ, recevez F20 000",
    "Vous avez gagné le deuxième Prix de Beauté. Recevez F1 000",
    "Vous héritez F10 000"
};

string Carte :: tirerCarte(){

    Carte carte_nom = Carte.nom;
    int nbRandom = rand() % 15;
    string action;

    if (carte_nom == "Chance")
        action = Carte_chance[nbRandom];
    else (carte_nom=="Communauté")
        action = Carte_communauté[nbRandom];

    return action
}