#include "../headers/Joueur.hpp"
#include "../headers/Plateau.hpp"

Plateau::Plateau(){
    vector<Case> vecteur_plateau = {
        Boulevard de Belleville; Rue Lecourbe;
        Rue de Vaugirard; Rue de Courcelles; Avenue de la République,;
        Boulevard de la Villette; avenue de Neuilly; rue de Paradis;
        Avenue Mozart; boulevard Saint-Michel; place Pigalle;
        Avenue Matignon; boulevard Malesherbes; avenue Henri-Martin;
        Faubourg Saint-Honoré; place de la Bourse; rue La Fayette;
        Avenue de Breteuil; avenue Foch; boulevard des Capucines;
        Avenue des Champs-Élysées; rue de la Paix
    }

    impots = 0;
};

int Plateau::getNombreJoueur(){

};

void Plateau::executerAction(unsigned int numCase, Joueur &joueur){

};

int Plateau::ajouterImpots(int montant){

};

uint16_t Plateau::getImpots(){

};
