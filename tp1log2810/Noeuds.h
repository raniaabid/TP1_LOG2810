#ifndef Noeuds_h
#define Noeuds_h

#include <iostream>
#include <vector>
#include "ObjetA.h"
#include "ObjetB.h"
#include "ObjetC.h"
#include "Voisin.h"
using namespace std;

class Noeuds
{
public:
    void setNumSommet(int num) {};
    void setNbOBjet(int x, int y, int z) {};
    void setRelations(Voisin x) {};
    int getNumSommet() {};
    int getNbObjetA() {};
    int getNbObjetB() {};
    int getNbObjetC() {};
private:
    int numerosSommet_;
    ObjetA a_;
    ObjetB b_;
    ObjetC c_;
    vector <Voisin> voisins_;
};

#endif /* Noeuds_h */
