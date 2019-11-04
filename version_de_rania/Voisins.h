//
//  Voisins.h
//  tp1log2810
//
//  Created by Rania Abid on 2019-10-29.
//  Copyright © 2019 Rania Abid. All rights reserved.
//

#ifndef Voisins_h
#define Voisins_h


#include <iostream>
#include "ObjetA.h"
#include "ObjetB.h"
#include "ObjetC.h"



class Voisins
{
public:
    Voisins();
    void setVoisin(int sommet, int sommetVoisin, int dst);
    int getSommetVoisin();
    int getDistance();
    
private:
    int voisinDe_;
    int distance_; // dou elle vient? cette var
    //propre a noeuds
    ObjetA a_;
    ObjetB b_;
    ObjetC c_;
    //
     int numerosSommet_;
};

#endif /* Voisins_h */