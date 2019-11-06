//
//  ObjetC.cpp
//  tp1log2810
//
//  Created by Rania Abid on 2019-10-29.
//  Copyright © 2019 Rania Abid. All rights reserved.
//

#include <stdio.h>
#include "ObjetC.h"
ObjetC:: ObjetC(){
    poids_=6;
    nbObjetC=0;
}

double ObjetC:: getPoids(){
    return poids_;
}

int ObjetC::getNbObjet()
{
    return nbObjetC;
}

void ObjetC:: setNbObjet(int n)
{
    nbObjetC=n;
}
