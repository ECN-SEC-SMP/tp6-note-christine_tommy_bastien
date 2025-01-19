#include "../headers/Communaute.hpp"
#include "../headers/Joueur.hpp"

Communaute::Communaute()
{
    this->cartesCommunaute = {
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
        "Vous héritez F10 000"};
}

void Communaute::appliquerEffet(Joueur &joueur)
{
}