#include "../headers/Propriete.hpp"

/**
 * @brief Constructeur de la classe Propriete.
 *
 * Ce constructeur initialise une propriété avec un prix de 0, un nom vide, aucune maison ni hôtel,
 * et le statut de propriété non possédé par un joueur.
 */

Propriete::Propriete() : prix(0), nom(""), possedeParJoueur(false), nbMaisons(0), hotel(false)
{
}

/**
 * @brief Définit le prix de la propriété.
 *
 * Cette fonction permet d'assigner un prix à la propriété.
 *
 * @param prix Le prix de la propriété à définir.
 */

void Propriete::setPrix(uint16_t prix)
{
    this->prix = prix;
}

/**
 * @brief Récupère le prix de la propriété.
 *
 * Cette fonction retourne le prix actuel de la propriété.
 *
 * @return uint16_t Le prix de la propriété.
 */

uint16_t Propriete::getprix()
{
    return prix;
}

/**
 * @brief Assigne un propriétaire à la propriété.
 *
 * Cette fonction permet de définir un joueur comme le propriétaire de la propriété et marque la propriété comme possédée.
 *
 * @param joueur Le joueur qui devient propriétaire de la propriété.
 */

void Propriete::setProprietaire(Joueur &joueur)
{
    proprietaire = joueur;
    possedeParJoueur = true;
}

/**
 * @brief Récupère le propriétaire de la propriété.
 *
 * Cette fonction retourne le joueur actuel qui possède la propriété.
 *
 * @return Joueur Le propriétaire de la propriété.
 */

Joueur Propriete::getPropritaire()
{
    return proprietaire;
}

/**
 * @brief Récupère le nom de la propriété.
 *
 * Cette fonction retourne le nom de la propriété.
 *
 * @return string Le nom de la propriété.
 */

string Propriete::getNom()
{
    return this->nom;
}

/**
 * @brief Vérifie si la propriété est un hôtel.
 *
 * Cette fonction vérifie si la propriété possède un hôtel.
 *
 * @return bool True si la propriété a un hôtel, false sinon.
 */

bool Propriete::estHotel()
{
    return hotel;
}

/**
 * @brief Vérifie si la propriété possède des maisons.
 *
 * Cette fonction vérifie si la propriété possède au moins une maison.
 *
 * @return bool True si la propriété possède des maisons, false sinon.
 */

bool Propriete::estMaison()
{
    return nbMaisons > 0;
}

/**
 * @brief Ajoute une maison à la propriété.
 *
 * Cette fonction ajoute une maison à la propriété si le maximum de maisons (4) n'a pas été atteint et si la propriété
 * n'a pas déjà un hôtel.
 *
 * @note Si le nombre de maisons est déjà de 4 ou si un hôtel est présent, un message d'erreur sera affiché.
 */

void Propriete::ajouterMaison()
{
    if (nbMaisons < 4 && !hotel)
    {
        nbMaisons++;
    }
    else
    {
        cout << "Maximum de maisons atteint ou hôtel déjà présent." << endl;
    }
}

/**
 * @brief Ajoute un hôtel à la propriété.
 *
 * Cette fonction ajoute un hôtel à la propriété si la propriété a déjà 4 maisons et si elle ne possède pas encore d'hôtel.
 *
 * @note Si la propriété n'a pas 4 maisons ou possède déjà un hôtel, un message d'erreur sera affiché.
 */

void Propriete::ajouterHotel()
{
    if (nbMaisons == 4 && !hotel)
    {
        hotel = true;
    }
    else
    {
        cout << "Impossible d'ajouter un hôtel, vérifiez les conditions." << endl;
    }
}

/**
 * @brief Récupère le prix de la maison en fonction de la position sur le plateau.
 *
 * Cette fonction retourne le prix de la maison en fonction de la position de la propriété sur le plateau.
 *
 * @param position La position de la propriété sur le plateau (index de la case).
 *
 * @return uint16_t Le prix de la maison pour la position donnée.
 */

uint16_t Propriete::getPrixMaison(uint8_t position)
{
    switch (position)
    {
    case 1:
    case 3:
        return 50;
    case 6:
    case 8:
    case 9:
        return 50;
    case 11:
    case 13:
    case 14:
        return 100;
    case 16:
    case 18:
    case 19:
        return 150;
    case 21:
    case 23:
    case 24:
        return 150;
    case 26:
    case 27:
    case 29:
        return 200;
    case 31:
    case 32:
    case 34:
        return 200;
    case 37:
    case 39:
        return 200;
    default:
        return 0;
    }
}

/**
 * @brief Récupère le prix de l'hôtel en fonction de la position sur le plateau.
 *
 * Cette fonction retourne le prix de l'hôtel en fonction de la position de la propriété sur le plateau.
 *
 * @param position La position de la propriété sur le plateau (index de la case).
 *
 * @return uint16_t Le prix de l'hôtel pour la position donnée.
 */

uint16_t Propriete::getPrixHotel(uint8_t position)
{
    switch (position)
    {
    case 1:
    case 3:
        return 50;
    case 6:
    case 8:
    case 9:
        return 50;
    case 11:
    case 13:
    case 14:
        return 100;
    case 16:
    case 18:
    case 19:
        return 150;
    case 21:
    case 23:
    case 24:
        return 150;
    case 26:
    case 27:
    case 29:
        return 200;
    case 31:
    case 32:
    case 34:
        return 200;
    case 37:
    case 39:
        return 200;
    default:
        return 0;
    }
}

/**
 * @brief Vérifie si la propriété a été achetée.
 *
 * Cette fonction permet de vérifier si la propriété a été achetée, c'est-à-dire si elle est possédée par un joueur.
 *
 * @return bool True si la propriété est achetée, false sinon.
 */

bool Propriete::estAchetee()
{
    return possedeParJoueur;
}
