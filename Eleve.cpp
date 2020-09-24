//
// Created by ACER on 24/09/2020.
//

#include "Eleve.h"

Eleve::Eleve(int id, const std::string &nom, const std::string &prenom) : ID(id), nom(nom), prenom(prenom) {}



void Eleve::ajouternote(float note) {
bulletin.push_back(new Note(note));
std::cout<<"Note ajoutee avec succes\n";
}

void Eleve::retirernote( int index) {
    bulletin.erase(bulletin.begin()+index);
    std::cout<<"Note retiree avec succes\n";
}

float Eleve::calculmoyenne() {
Note moyenne=0;
    for (int i = 0; i <bulletin.size() ; ++i) {
        std::cout<<i<<") "<<bulletin[i]->getValeur()<<"\n";
        moyenne=moyenne.getValeur()+bulletin[i]->getValeur();
    }
    return moyenne.getValeur()/bulletin.size();
}

int Eleve::getId() const {
    return ID;
}

const std::string &Eleve::getNom() const {
    return nom;
}

Eleve::~Eleve() {

}






