//
//  ObjetB.cpp
//  tp1log2810
//
//  Created by Rania Abid on 2019-10-29.
//  Copyright © 2019 Rania Abid. All rights reserved.
//

#include <stdio.h>
#include "ObjetB.h"

ObjetB:: ObjetB() {
    poids_=3;
    nbObjetB=0;
    
}
double ObjetB:: getPoids()
{
    return poids_;
}

int ObjetB::getNbObjet()

{
    return nbObjetB;
}

void ObjetB:: setNbObjet(int n)
{
    nbObjetB=n;
}
