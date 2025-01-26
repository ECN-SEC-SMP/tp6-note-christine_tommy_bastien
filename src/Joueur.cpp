#include "../headers/Joueur.hpp"
#include "../headers/Propriete.hpp"
#include "../headers/Plateau.hpp"
#include "../headers/Pion.hpp"
#include "../headers/Carte.hpp"
#include "../headers/Communaute.hpp"
#include "../headers/Jeu.hpp"

using namespace std;

/**
 * @brief Constructeur par défaut de la classe Joueur.
 *
 * Initialise les attributs de l'objet Joueur, notamment l'argent de départ et les statuts.
 */
Joueur::Joueur()
{
    argent_total = 1500;
    prison = false;
    carteChancePrison = false;
}

/**
 * @brief Obtient le nom du joueur.
 *
 * @return string Le nom du joueur.
 */
string Joueur::getNom()
{
    return this->nom;
}

/**
 * @brief Définit le nom du joueur en demandant à l'utilisateur de l'entrer.
 */
void Joueur::setNom()
{
    cout << "Nom du joueur : " << endl;
    cin >> nom;

    this->nom = nom;
}

/**
 * @brief Obtient la position actuelle du pion du joueur sur le plateau.
 *
 * @return uint8_t La position actuelle du pion.
 */

uint8_t Joueur::getPosition()
{
    return pion.getPosition();
}


bool Joueur::getPrison(){
    return this->prison;
}

/**
 * @brief Lance les dés et retourne vrai si un double est obtenu.
 *
 * @param des Référence à l'objet Des utilisé pour le lancer.
 * @return bool Indique si un double a été obtenu.
 */

bool Joueur::lancerDes(Des &des)
{
    des.lancerDes();
    cout << "Total des dés : " << static_cast<int>(des.getValue()) << endl;
    cout << endl;
    bool checkDouble = des.checkDouble();

    return checkDouble;
}

/**
 * @brief Fait avancer le pion du joueur d'un certain nombre de cases.
 *
 * @param nombre Le nombre de cases à avancer.
 */
void Joueur::avancer(uint8_t nombre)
{
    uint8_t nouvellePosition = pion.getPosition() + nombre;
    if (nouvellePosition >= 40)
    {
        nouvellePosition -= 40; // Revenir au début du plateau
        cout << nom << " passe par la case Départ et reçoit 200 mono." << endl;
        recevoir_argent(200);
    }

    pion.setPosition(nouvellePosition);
    // cout << nom << " avance de " << static_cast<int>(nombre) << " cases et se trouve sur la case "
    //      << static_cast<int>(nouvellePosition) << "." << endl;
}

/**
 * @brief Achète une propriété si le joueur a suffisamment d'argent.
 *
 * @param joueur Le joueur acheteur.
 * @param propriete Pointeur vers la propriété à acheter.
 */

void Joueur::acheterPropriete(Joueur joueur, Propriete *propriete)
{
    if (propriete->estAchetee())
    {
        cout << "La propriété a déjà été achetée par " << propriete->getProprietaire()->getNom() << endl;
        return;
    }

    if (argent_total >= propriete->getprix())
    {
        argent_total -= propriete->getprix();
        proprietes.push_back(propriete);
        propriete->setProprietaire(joueur);
        cout << nom << " a acheté la propriété " << propriete->getNom() << " pour " << propriete->getprix() << " mono." << endl;
    }
    else
    {
        cout << nom << " n'a pas assez d'argent pour acheter " << propriete->getNom() << "." << endl;
    }
}

void Joueur::vendrePropriete(Propriete *)
{
}

/**
 * @brief Retourne la liste des propriétés possédées par le joueur.
 *
 * @return vector<Propriete *> Liste des propriétés possédées.
 */

vector<Propriete *> Joueur::getProprietes()
{
    return proprietes;
}

/**
 * @brief Le joueur tire une carte Chance et applique ses effets.
 */
void Joueur::tirer_carte_chance()
{
    Chance carteChance;
    carteChance.tirerCarte();
    carteChance.afficherNomCarte();
    carteChance.appliquerEffet(*this);
}

/**
 * @brief Le joueur tire une carte Caisse de communauté et applique ses effets.
 */
void Joueur::tirer_carte_communaute()
{
    Communaute carteCommunaute;
    carteCommunaute.tirerCarte();
    carteCommunaute.afficherNomCarte();
    carteCommunaute.appliquerEffet(*this, jeu->getNbJoueur(), jeu->getVecteurJoueurs());
}

/**
 * @brief Le joueur reçoit une somme d'argent.
 *
 * @param montant Le montant d'argent reçu.
 */
void Joueur::recevoir_argent(uint16_t montant)
{
    argent_total += montant;
    cout << nom << " reçoit " << montant << " mono." << endl;
}

/**
 * @brief Le joueur paie un montant à un autre joueur.
 *
 * @param montant Le montant à payer.
 * @param joueur_a_payer Le joueur à qui payer.
 */
void Joueur::payer_joueur(uint16_t montant, Joueur joueur_a_payer)
{
    if (argent_total >= montant)
    {
        argent_total -= montant;
        joueur_a_payer.recevoir_argent(montant);
        cout << nom << " a payé " << montant << " mono à " << joueur_a_payer.getNom() << "." << endl;
    }
    else
    {
        cout << nom << " n'a pas assez d'argent pour payer " << joueur_a_payer.getNom() << "." << endl;
    }
}

/**
 * @brief Le joueur paie un montant à la banque.
 *
 * @param montant Le montant à payer.
 */
void Joueur::payer_banque(uint16_t montant)
{
    if (argent_total >= montant)
    {
        argent_total -= montant;
        cout << nom << " a payé " << montant << " mono à la banque." << endl;
    }
    else
    {
        cout << nom << " n'a pas assez d'argent pour payer la banque." << endl;
    }
}

void Joueur::payer_impots(uint16_t montant, Plateau &plateau)
{
    if (argent_total > montant)
    {
        argent_total -= montant;
        plateau.ajouterImpots(montant);
        cout << nom << "a payé " << montant << " mono d'impots." << endl;
    }
    else
    {
        cout << nom << " n'a pas assez d'argent pour payer les impôts. Il doit vendre" << endl;

        if (!proprietes.empty())
        {
            afficherProprietes();
            cout << "Choisissez le numéro de la propriété à vendre (1-" << proprietes.size() << "): ";
            size_t choix;
            cin >> choix;
            if (choix > 0 && choix <= proprietes.size())
            {
                vendrePropriete(proprietes[choix - 1]);
            }
            else
            {
                cout << "Choix invalide." << endl;
                this->payer_impots(montant, plateau);
            }
        }
        else
        {
            cout << nom << " n'a plus de propriétés à vendre. Il est en faillite." << endl;
            Faillite();
        }
    }
}

/**
 * @brief Envoie le joueur en prison.
 */
void Joueur::aller_prison()
{
    prison = true;
    pion.setPosition(10);
    cout << nom << " est envoyé en prison. CETTE RACAILLE" << endl;
}

/**
 * @brief Libère le joueur de la prison.
 */
void Joueur::sortir_prison()
{
    if (prison)
    {
        prison = false;
        cout << nom << " est libéré de prison." << endl;
    }
    else
    {
        cout << nom << " n'est pas en prison." << endl;
    }
}

/**
 * @brief Déclare la faillite du joueur.
 */
void Joueur::Faillite()
{
    cout << nom << " est en faillite. THE END" << endl;
}

/**
 * @brief Affiche les propriétés possédées par le joueur.
 */
void Joueur::afficherProprietes()
{
    if (proprietes.empty())
    {
        cout << nom << " ne possède aucune propriété." << endl;
        return;
    }

    cout << "Propriétés possédées par " << nom << " :" << endl;
    for (size_t i = 0; i < proprietes.size(); i++)
    {
        cout << (i + 1) << ". " << proprietes[i]->getNom() << " - Prix: " << proprietes[i]->getprix() << " mono" << endl;
    }
}

/**
 * @brief Retourne le nombre total d'hôtels possédés par le joueur.
 *
 * Cette méthode parcourt toutes les propriétés du joueur et compte celles qui possèdent un hôtel.
 *
 * @return uint8_t Le nombre d'hôtels détenus par le joueur.
 */
uint8_t Joueur::getNombreHotels()
{
    uint8_t nombreHotels = 0;
    for (auto propriete : proprietes)
    {
        if (propriete->estHotel())
        {
            nombreHotels++;
        }
    }
    return nombreHotels;
}

/**
 * @brief Retourne le nombre total de maisons possédées par le joueur.
 *
 * Cette méthode parcourt toutes les propriétés du joueur et compte celles qui possèdent au moins une maison.
 *
 * @return uint8_t Le nombre total de maisons.
 */
uint8_t Joueur::getNombreMaisons()
{
    uint8_t nombreMaisons = 0;
    for (auto propriete : proprietes)
    {
        if (propriete->estMaison())
        {
            nombreMaisons++;
        }
    }
    return nombreMaisons;
}

/**
 * @brief Ajoute une maison sur une propriété possédée par le joueur.
 *
 * Cette méthode permet au joueur d'ajouter une maison sur une propriété s'il en est le propriétaire
 * et s'il possède suffisamment d'argent. Le coût de la maison est déterminé en fonction de la position de la propriété.
 *
 * @param propriete Référence vers l'objet Propriete où la maison sera ajoutée.
 */
void Joueur::ajouterMaison(Propriete &propriete)
{
    if (propriete.estAchetee())
    {
        uint16_t prixMaison = propriete.getPrixMaison(pion.getPosition());
        if (argent_total >= prixMaison && prixMaison > 0)
        {
            argent_total -= prixMaison;
            propriete.ajouterMaison();
            cout << nom << " a ajouté une maison sur " << propriete.getNom() << " pour " << prixMaison << " mono." << endl;
        }
        else
        {
            cout << nom << " n'a pas assez d'argent pour ajouter une maison sur " << propriete.getNom() << "." << endl;
        }
    }
    else
    {
        cout << "La propriété " << propriete.getNom() << " n'appartient pas à " << nom << "." << endl;
    }
}

/**
 * @brief Ajoute un hôtel sur une propriété possédée par le joueur.
 *
 * Cette méthode permet d'ajouter un hôtel sur une propriété si toutes les conditions sont remplies :
 * - Le joueur doit posséder la propriété.
 * - Le joueur doit avoir assez d'argent pour acheter un hôtel.
 * - La propriété doit déjà avoir le nombre requis de maisons avant d'ajouter un hôtel.
 *
 * @param propriete Référence vers l'objet Propriete où l'hôtel sera ajouté.
 */
void Joueur::ajouterHotel(Propriete &propriete)
{
    if (propriete.estAchetee())
    {
        uint16_t prixHotel = propriete.getPrixHotel(pion.getPosition());
        if (argent_total >= prixHotel)
        {
            argent_total -= prixHotel;
            propriete.ajouterHotel();
            cout << nom << " a ajouté un hôtel sur " << propriete.getNom() << " pour " << prixHotel << " mono." << endl;
        }
        else
        {
            cout << nom << " n'a pas assez d'argent pour ajouter un hôtel sur " << propriete.getNom() << "." << endl;
        }
    }
    else
    {
        cout << "La propriété " << propriete.getNom() << " n'appartient pas à " << nom << "." << endl;
    }
}

uint8_t Joueur::getNombreGares()
{
    uint8_t compteur = 0;
    for (Propriete *propriete : proprietes)
    {
        // Vérifiez si la propriété est une gare
        if (propriete->getNom().find("Gare") != string::npos)
        {
            compteur++;
        }
    }
    return compteur;
}

uint8_t Joueur::getNombreServicesPublics()
{
    uint8_t compteur = 0;
    for (Propriete *propriete : proprietes)
    {
        // Vérifiez si la propriété est une gare
        if ((propriete->getNom().find("Compagnie de distribution")) != string::npos)
        {
            compteur++;
        }
    }
    return compteur;
}

/**
 * @brief Déplace le joueur d'un nombre de cases relatif à sa position actuelle.
 *
 * @param val_des Le nombre de cases à avancer.
 */
void Joueur::aller_a_une_case(uint8_t val_des)
{
    pion.setPosition(val_des + pion.getPosition());
}

/**
 * @brief Déplace le joueur à une case spécifique.
 *
 * @param val_case La case cible.
 */
void Joueur::aller_a_une_case_absolue(uint8_t val_case)
{
    pion.setPosition(val_case);
}

void Joueur::afficherArgent() const
{
    std::cout << nom << " possède actuellement " << argent_total << " mono." << std::endl;
}
