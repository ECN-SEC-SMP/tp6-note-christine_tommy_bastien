#include "../headers/Chance.hpp"
#include "../headers/Joueur.hpp"
#include "../headers/Pion.hpp"

/**
 * @brief Constructeur de la classe Chance.
 *
 * Initialise toutes les cartes Chance avec leurs effets.
 */
Chance::Chance()
{
    // Implémentation du constructeur (peut être vide si non nécessaire)
}

Chance::Chance(std::string nom)
{
    this->cartesChance = {
        "Rendez-vous à la Rue de la Paix",
        "Avancer jusqu’à la case départ",
        "Rendez-vous à l’Avenue Henri-Martin. Si vous passez par la case départ, recevez 200 mono",
        "Avancez au Boulevard de La Villette. Si vous passez par la case départ, recevez 200 mono",
        "Vous êtes imposé pour les réparations de voirie à raison de 40 mono par maison et 115 mono par hôtel.",
        "Avancez jusqu’à la Gare de Lyon. Si vous passez par la case départ, recevez 200 mono",
        "Vous avez gagné le prix de mots croisés. Recevez 100 mono",
        "La banque vous verse un dividende de 50 mono",
        "Vous êtes libéré de prison. Cette carte peut être conservée jusqu’à ce qu’elle soit utilisée ou vendue.",
        "Reculez de trois cases",
        "Aller en prison. Rendez-vous directement en prison. Ne franchissez pas par la case départ, ne touchez pas 200 mono",
        "Faites des réparations dans toutes vos maisons. Versez pour chaque maison 25 mono. Versez pour chaque hôtel 100 mono",
        "Amende pour excès de vitesse 15 mono",
        "Payez pour frais de scolarité 15 mono",
        "Amende pour ivresse 20 mono",
        "Votre immeuble et votre prêt rapportent. Vous devez toucher 150 mono"};
}

/**
 * @brief Affiche le nom de la carte Chance tirée.
 */

void Chance::afficherNomCarte()
{
    cout << "Carte tirée : " << this->cartesChance[this->nbRandom] << endl;
}

/**
 * @brief Applique l'effet de la carte Chance tirée au joueur.
 *
 * En fonction de la carte tirée, le joueur peut avancer, reculer, payer des taxes ou recevoir de l'argent.
 *
 * @param joueur Référence vers le joueur affecté par la carte Chance.
 */

void Chance::appliquerEffet(Joueur &joueur)
{
    cout << nbRandom << endl;
    switch (this->nbRandom)
    {
    case 0:
        joueur.avancer(39 - joueur.getPosition());
        break;
    case 1:
        joueur.avancer(40 - joueur.getPosition());
        joueur.recevoir_argent(200);
        break;
    case 2:
        if (joueur.getPosition() > 24)
            joueur.recevoir_argent(200);
        joueur.avancer(24 - joueur.getPosition());
        break;
    case 3:
        if (joueur.getPosition() > 11)
            joueur.recevoir_argent(200);
        joueur.avancer(11 - joueur.getPosition());
        break;
    case 4:
        cout << joueur.getNom() << " doit payer 40 mono par maison et 115 mono par hôtel." << endl;
        joueur.payer_banque(40 * joueur.getNombreMaisons() + 115 * joueur.getNombreHotels());
        break;
    case 5:
        if (joueur.getPosition() > 15)
            joueur.recevoir_argent(200);
        joueur.avancer(15 - joueur.getPosition());
        break;
    case 6:
        joueur.recevoir_argent(100);
        break;
    case 7:
        joueur.recevoir_argent(50);
        break;
    case 8:
        cout << joueur.getNom() << " a tiré une carte 'Libéré de prison'. Elle peut être conservée." << endl;
         joueur.recevoir_carte_sortie_prison();
        break;
    case 9:
        joueur.avancer(-3);
        break;
    case 10:
        joueur.aller_prison();
        break;
    case 11:
        joueur.payer_banque(25 * joueur.getNombreMaisons() + 100 * joueur.getNombreHotels());
        break;
    case 12:
        joueur.payer_banque(15);
        break;
    case 13:
        joueur.payer_banque(150);
        break;
    case 14:
        joueur.payer_banque(20);
        break;
    case 15:
        joueur.recevoir_argent(150);
        break;
    default:
        cout << "Erreur: Carte chance invalide." << endl;
        break;
    }
}
