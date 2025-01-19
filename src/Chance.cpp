#include "../headers/Chance.hpp"
#include "../headers/Joueur.hpp"

Chance::Chance()
{
    this->cartesChance = {
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
        "Votre immeuble et votre prêt rapportent. Vous devez toucher F15 000"};
}

void Chance::afficherNomCarte()
{
    cout << "Carte tirée : " << this->cartesChance[this->nbRandom] << endl;
}

void Chance::appliquerEffet(Joueur &joueur)
{
    switch (this->nbRandom)
    {
    }
}
