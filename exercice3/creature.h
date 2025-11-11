#pragma once

namespace creature{

    class Creature{
        private :
            int pv;
            int pa;
            int niveau;

        public :
            Creature();
            Creature(int, int, int);
            void afficher();
            int attaque();
            void subitDegat(int degat);
            bool estvivant();
    };
}