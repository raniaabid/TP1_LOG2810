//
//  Voisins.cpp
//  tp1log2810
//
//  Created by Rania Abid on 2019-10-29.
//  Copyright © 2019 Rania Abid. All rights reserved.
//

#include <stdio.h>

#include"Voisins.h"
using namespace std;

Voisins::Voisins(){
    voisinDe_=0;
    distance_=0; // dou elle vient? cette var
    //propre a noeuds
    a_=ObjetA();
    b_=ObjetB();
    c_=ObjetC();
    //
    numerosSommet_=0;
}

void Voisins::setVoisin(int sommet, int SommetVoisin, int dst)
{
    numerosSommet_ = sommet;
    voisinDe_ = SommetVoisin;
    distance_ = dst;
}

int Voisins::getDistance()
{
    return distance_;
};
int Voisins::getSommetVoisin()
{
    return voisinDe_;
};
