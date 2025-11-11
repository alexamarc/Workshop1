#include "Heros.h"
#include <iostream>


namespace Heros{
    Heros::Heros() : Heros("NA",0,0){};

    Heros::Heros(std::string Nom, int pv, int pa): Nom(Nom), pv(pv), pa(pa){}

    void Heros::afficher(){
        std::cout<<"Il s'agit d'un Héros nommé "<<Nom<<"ayant"<<pv<<" pv avec "<<pa<<" points d'attaques "<< std::endl ;
    }

    int Heros::attaque(){
        return pa;
    }

    void Heros::subitDegat(int degat){
        this->pv=pv-degat;
    }
    
    bool Heros::estvivant(){
        if (pv<=0){return false;}
        else {return true;}
    }
}