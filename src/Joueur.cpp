#include "../headers/Joueur.hpp"
#include "../headers/Propriete.hpp"
#include "../headers/Plateau.hpp"

using namespace std;

string Joueur::getNom()
{
    return this->nom;
}

void Joueur::setNom()
{
    cout << "Nom du joueur : " << endl;
    cin >> nom;

    this->nom = nom;
}

uint8_t Joueur::getPosition()
{
    return position;
}

bool Joueur::lancerDes(Des &des)
{
    des.lancerDes();
    bool checkDouble = des.checkDouble();

    return checkDouble;
}

void Joueur::avancer_pion(uint8_t nombre)
{
     position += nombre;
     if (position >= 40) 
    {
        position -= 40;
        cout << nom << " passe par la case Départ et reçoit 200 mono." << endl;
        recevoir_argent(200);
    }
    cout << nom << " avance de " << static_cast<int>(nombre) << " cases et se trouve sur la case " << static_cast<int>(position) << "." << endl;
}

void Joueur::acheterPropriete(Joueur joueur, Propriete * propriete)
{
    if(argent_total>= propriete->getprix())
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

vector<Propriete*> Joueur::getProprietes()
{
    return proprietes;
}

void Joueur::tirer_carte_chance()
{
}

void Joueur::tirer_carte_communaute()
{
}

void Joueur::recevoir_argent(uint16_t montant)
{
    argent_total += montant;
    cout << nom << " reçoit " << montant << " mono." << endl;
}

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

void Joueur::aller_prison()
{
    prison = true;
    position = 10; 
    cout << nom << " est envoyé en prison. CETTE RACAILLE" << endl;
}

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

void Joueur::Faillite(){
    cout << nom << " est en faillite. THE END" << endl;
}

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