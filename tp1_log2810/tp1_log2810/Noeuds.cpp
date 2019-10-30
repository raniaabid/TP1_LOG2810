#include"Noeuds.h"

using namespace std;

void Noeuds::setNumSommet(int num)
{
    numerosSommet_ = num;
}

void Noeuds::setNbOBjet(int x, int y, int z)
{
    /* Utiliser pour définir le nb de chaque
     type d'objet dans la lecture du fichier*/
    a_.nombre = x;
    b_.nombre = y;
    c_.nombre = z;
}

void Noeuds::setRelations(Voisin x)
{
    /*Utiliser pour établir les arcs
     entre deux noeuds x et y*/
    voisins_.push_back(x);
}
int Noeuds::getNumSommet() { // retourne le # du sommet
    return numerosSommet_;
};

int Noeuds::getNbObjetA() {
    return a_.nombre;
};

int Noeuds::getNbObjetB() {
    return b_.nombre;
};

int Noeuds::getNbObjetC() {
    return c_.nombre;
};
