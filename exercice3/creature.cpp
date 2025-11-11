#include "creature.h"
#include <iostream>

namespace creature{

    Creature::Creature() : Creature(0,0,0){};
    Creature::Creature(int pv, int pa, int niveau ) : pv(pv), pa(pa), niveau(niveau){
        if (niveau<1){
            this->niveau=1;
        }
    }

    void Creature::afficher(){
        std::cout<<"Il s'agit d'une créature de "<<pv<<" pv avec "<<pa<<" points d'attaques et d'un niveau de "<<niveau<<std::endl;
    }

    int Creature::attaque(){
        return pa;
    }

    void Creature::subitDegat(int degat){
        this->pv=pv-degat;
    }
    
    bool Creature::estvivant(){
        if (pv<=0){return false;}
        else {return true;}
    }
}