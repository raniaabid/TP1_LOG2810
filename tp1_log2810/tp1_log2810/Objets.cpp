//
//  Objets.cpp
//  tp1log2810
//
//  Created by Rania Abid on 2019-11-05.
//  Copyright © 2019 Rania Abid. All rights reserved.
//

#include <stdio.h>
#include "Objets.h"

Objets::Objets()
{
	poids_ = 0;
	nbObjetB = 0;
}

double Objets::getPoids()
{
	return poids_;
}

int Objets::getNbObjet()
{
	return nbObjetB;
}

void Objets::setNbObjet(int n)
{
	nbObjetB = n;
}
