#include <iostream>
#include "Eleve.h"
#include "Classe.h"

int main() {
    ///////creation classe/////////
    Classe SN2("SN2");
//////////creation eleve/////////
SN2.ajoutereleve(0,"jeremy","mailly");
SN2.ajoutereleve(1,"anais","prost");
SN2.ajoutereleve(2,"francis","dupond");
/////////ajout des notes/////////////////
    SN2.getPromo()[0]->ajouternote(15);
    SN2.getPromo()[0]->ajouternote(14.25);
    SN2.getPromo()[0]->ajouternote(13.60);
    SN2.getPromo()[1]->ajouternote(15);
    SN2.getPromo()[1]->ajouternote(14.25);
    SN2.getPromo()[1]->ajouternote(10.60);
    SN2.getPromo()[2]->ajouternote(19);
    SN2.getPromo()[2]->ajouternote(6.25);
    SN2.getPromo()[2]->ajouternote(8.60);
    std::cout<<"la moyenne de l'eleve est de "<<SN2.getPromo()[0]->calculmoyenne();
//////////////////////test retirer note/////////
//std::cout<<"moyenne de promo : "<<SN2.moyennepromo();
//////////////////recherche d'eleve///////////////
std::cout<<SN2.rechercheparid(2).getNom()<<std::endl;
//SN2.rechercheparid(5);
std::cout<<SN2.rechercheparnom("anais").getId()<<std::endl;
SN2.retirereleve(0);
SN2.moyennepromo();
    return 0;
}
