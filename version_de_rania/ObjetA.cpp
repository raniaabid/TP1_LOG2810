//
//  ObjetA.cpp
//  tp1log2810
//
//  Created by Rania Abid on 2019-10-29.
//  Copyright © 2019 Rania Abid. All rights reserved.
//

#include <stdio.h>
#include "ObjetA.h"

ObjetA::ObjetA(){
    poids_=1;
    nbObjetA=0;
}

double ObjetA:: getPoids()
{
    return poids_;
}

int ObjetA:: getNbObjet()
{
    return nbObjetA;
}

void ObjetA:: setNbObjet(int n)
{
    nbObjetA=n;
}
