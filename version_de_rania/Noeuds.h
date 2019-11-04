#ifndef Noeuds_h
#define Noeuds_h

#include <iostream>
#include <vector>
#include "ObjetA.h"
#include "ObjetB.h"
#include "ObjetC.h"
#include "Voisins.h"


using namespace std;
class Noeuds
{
public:
    Noeuds();
    void setNumSommet(int num);
    void setNbOBjet(int x, int y, int z);
    void setRelations(Voisins x);
    int getNumSommet();
    int getNbObjetA();
    int getNbObjetB();
    int getNbObjetC();
    int getNbDeVoisin();
    vector<Voisins> getNoeudsVoisins();
    
    
protected:
    int numerosSommet_;
    
private:
    ObjetA a_;
    ObjetB b_;
    ObjetC c_;
    vector<Voisins> voisins_;
};
#endif /* Noeuds_h */
