//
// Created by ACER on 24/09/2020.
//

#include "Classe.h"

Classe::Classe(const std::string &nom) : nomclass(nom) {}
Classe::~Classe() {

}

void Classe::ajoutereleve(const int &id,const  std::string &prenom,const  std::string &nom) {
promo.push_back(new Eleve(id,prenom,nom));
std::cout<<"eleve ajoute avec succes\n";
}

void Classe::retirereleve(int id) {
promo.erase(promo.begin()+id);
    std::cout<<"eleve retire avec succes\n";
}


const float Classe::moyennepromo() {
    Note moyenne=0;
    for (int i = 0; i <promo.size() ; ++i) {
        std::cout<<i<<") "<<"moyenne de l'eleve "<<promo[i]->getNom()<<" : "<<promo[i]->calculmoyenne()<<"\n";
        moyenne=moyenne.getValeur()+promo[i]->calculmoyenne();
    }
    return moyenne.getValeur()/promo.size();
}

Eleve Classe::rechercheparid(const int &id) {
    for (int i = 0; i <promo.size() ; ++i) {
        if(promo[i]->getId()==id) {
            return *promo[i];
        }
    }
}

Eleve Classe::rechercheparnom(const std::string &nom) {
    for (int i = 0; i <promo.size() ; ++i) {
        if (promo[i]->getNom()==nom)
            return *promo[i];
    }
}

const std::vector<Eleve *> &Classe::getPromo() const {
    return promo;
}




