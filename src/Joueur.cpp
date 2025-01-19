#include "../headers/Joueur.hpp"
#include "../headers/Propriete.hpp"
#include "../headers/Plateau.hpp"

using namespace std;

string Joueur::getNom()
{
}

void Joueur::setNom()
{
    cout << "Nom du joueur : " << endl;
    cin >> nom;

    this->nom = nom;
}

uint8_t Joueur::getPosition()
{
}

bool Joueur::lancerDes(Des &des)
{
    des.lancerDes();
    bool checkDouble = des.checkDouble();

    return checkDouble;
}

void Joueur::avancer_pion(uint8_t nombre)
{
}

void Joueur::acheterPropriete(Propriete *)
{
}

void Joueur::vendrePropriete(Propriete *)
{
}

vector<Propriete> Joueur::getProprietes()
{
}

void Joueur::tirer_carte_chance()
{
}

void Joueur::tirer_carte_communauté()
{
}

void Joueur::recevoir_argent(uint16_t montant)
{
}

void Joueur::payer_joueur(uint16_t montant, Joueur joueur_a_payer)
{
}

void Joueur::payer_banque(uint16_t montant)
{
}

void Joueur::payer_impots(uint16_t montant, Plateau &plateau)
{
}

void Joueur::aller_prison()
{
}

void Joueur::sortir_prison()
{
}
