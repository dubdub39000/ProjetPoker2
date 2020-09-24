//
// Created by ACER on 24/09/2020.
//

#ifndef CLASSE_ELEVE_H
#define CLASSE_ELEVE_H


#include <iostream>
#include <vector>
#include "Note.h"

class Eleve {
private:
    int ID;
    std::string nom;
    std::string prenom;
    std::vector<Note*> bulletin;
public:
    Eleve(int id, const std::string &nom, const std::string &prenom);

    virtual ~Eleve();

    void ajouternote(float note );
    void retirernote( int index);
    float calculmoyenne();

    int getId() const;
    const std::string &getNom() const;

};


#endif //CLASSE_ELEVE_H
