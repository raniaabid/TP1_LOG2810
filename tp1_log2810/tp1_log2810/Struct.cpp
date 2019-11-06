//
//  Struct.cpp
//  tp1log2810
//
//  Created by Rania Abid on 2019-11-04.
//  Copyright © 2019 Rania Abid. All rights reserved.
//

#include <stdio.h>
#include "Struct.h"


Struct::Struct(){
    
    distance_=0;
     noeudCourant_= Noeuds();
    visite_=false;
    ancienNoeud_=Noeuds();
}


int Struct:: getDistance()
{
    return distance_;
}
Noeuds Struct::getNoeudCourant()
{
    return  noeudCourant_;
}
bool Struct::getVisite()
{
    return visite_;
}
Noeuds Struct:: getAncienNoeud()
{
    return ancienNoeud_; 
}

void  Struct:: setDistance(int x){
    
    distance_=x;
}
void  Struct:: setNoeudCourant(Noeuds noeud){
    noeudCourant_=noeud;
}
void  Struct:: setVisite(bool visite){
    visite_=visite;
}
void  Struct:: setAncienNoeud(Noeuds ancienNoeud){
    ancienNoeud_=ancienNoeud_;
}
