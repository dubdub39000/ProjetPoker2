//
// Created by ACER on 24/09/2020.
//

#ifndef CLASSE_CLASSE_H
#define CLASSE_CLASSE_H


#include <string>
#include <vector>
#include "Eleve.h"


class Classe {
private:
    std::string nomclass;
    std::vector<Eleve*> promo;
public:
    Classe(const std::string &nom);

    virtual ~Classe();

    void ajoutereleve(const int &id,const  std::string &nom,const std::string &prenom);
    void retirereleve (int id);
    const float  moyennepromo();
    Eleve rechercheparid(const int &id);
    Eleve rechercheparnom(const std::string &nom);

    const std::vector<Eleve *> &getPromo() const;

};


#endif //CLASSE_CLASSE_H
