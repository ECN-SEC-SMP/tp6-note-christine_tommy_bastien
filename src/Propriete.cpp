#include "../headers/Propriete.hpp"

Propriete::Propriete() {

};

void Propriete::setPrix(uint16_t prix) {

};

uint16_t Propriete::getprix() {

};

void Propriete::setProprietaire(Joueur &joueur) {

};

void Propriete::getPropritaire(Joueur &Joueur) {

};

string Propriete::getNom()
{
    return this->nom;
}

bool Propriete::estHotel() {
    return hotel;
}

bool Propriete::estMaison() {
    return nbMaisons > 0;
}

void Propriete::ajouterMaison() {
    if (nbMaisons < 4 && !hotel) {
        nbMaisons++;
    } else {
        cout << "Maximum de maisons atteint ou hôtel déjà présent." << endl;
    }
}

void Propriete::ajouterHotel() {
    if (nbMaisons == 4 && !hotel) {
        hotel = true;
    } else {
        cout << "Impossible d'ajouter un hôtel, vérifiez les conditions." << endl;
    }
}

uint16_t Propriete::getPrixMaison(uint8_t position) {
    switch (position) {
        case 1: case 3:
            return 50;
        case 6: case 8: case 9:
            return 50;
        case 11: case 13: case 14:
            return 100;
        case 16: case 18: case 19:
            return 150;
        case 21: case 23: case 24:
            return 150;
        case 26: case 27: case 29:
            return 200;
        case 31: case 32: case 34:
            return 200;
        case 37: case 39:
            return 200;
        default:
            return 0;
    }
}

uint16_t Propriete::getPrixHotel(uint8_t position)  
{ 
    switch (position) {
        case 1: case 3:
            return 50;
        case 6: case 8: case 9:
            return 50;
        case 11: case 13: case 14:
            return 100;
        case 16: case 18: case 19:
            return 150;
        case 21: case 23: case 24:
            return 150;
        case 26: case 27: case 29:
            return 200;
        case 31: case 32: case 34:
            return 200;
        case 37: case 39:
            return 200;
        default:
            return 0;
    }
}

bool Propriete::estAchetee() 
{ 
    return possedeParJoueur; 
}
