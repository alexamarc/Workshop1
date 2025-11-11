#include "Heros.h"
#include "creature.h"
#include <iostream>


int main(){
        creature::Creature goblin(10,15,20);
        goblin.afficher();
        Heros::Heros ninja("Ninja1",50,10);
        ninja.afficher();

        ninja.subitDegat(goblin.attaque());
        if (ninja.estvivant()){std::cout<<"Ninja est vivant."<<std::endl;}
        else {std::cout<<"Ninja est mort.";}

        goblin.subitDegat(ninja.attaque());
        if (goblin.estvivant()){std::cout<<"Goblin est vivant."<<std::endl;}
        else {std::cout<<"Goblin est mort.";}
        return 0;
}