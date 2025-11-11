#pragma once
#include <string>

namespace Heros{

    class Heros{
        private :

        std::string Nom;
        int pv;
        int pa;

        public :
        Heros();
        Heros(std::string,int,int);
        void afficher();
        int attaque();
        void subitDegat(int degat);
        bool estvivant();
    };
}