#include "../headers/ServicePublic.hpp"

/**
 * @brief Constructeur par défaut de la classe ServicePublic.
 * 
 * Ce constructeur initialise un objet de type `ServicePublic` sans nom, prix ou loyers définis.
 */

ServicePublic::ServicePublic()
{
}

/**
 * @brief Constructeur de la classe ServicePublic avec paramètres.
 * 
 * Ce constructeur permet d'initialiser un objet `ServicePublic` avec un nom, un prix et une liste de loyers spécifiés.
 * 
 * @param nom Le nom du service public.
 * @param prix Le prix d'achat du service public.
 * @param loyers Un vecteur de loyers associés au service public.
 */

ServicePublic::ServicePublic(string nom, uint16_t prix, vector<uint16_t> loyers)
{
    this->nom = nom;
    this->prix = prix;
    this->loyers = loyers;
}

/**
 * @brief Méthode pour calculer le loyer d'un service public.
 * 
 * Cette méthode est actuellement vide, mais elle pourrait être utilisée pour calculer le loyer en fonction de certaines conditions,
 * comme les dés ou d'autres critères. La méthode sera complétée pour implémenter la logique de calcul du loyer.
 */
 
void ServicePublic::calculerLoyer()
{
}