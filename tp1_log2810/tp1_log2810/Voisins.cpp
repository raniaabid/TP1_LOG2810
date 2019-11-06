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

Voisins::Voisins() {
	numerosSommet_ = 0;
	a_ = ObjetA();
	b_ = ObjetB();
	c_ = ObjetC();


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




void Voisins::setNumSommet(int num)
{
	numerosSommet_ = num;
}

void Voisins::setNbOBjet(int x, int y, int z)
{
	// Utiliser pour définir le nb de chaque type d'objet dans la lecture du fichier
	a_.setNbObjet(x);
	b_.setNbObjet(y);
	c_.setNbObjet(z);
}


int Voisins::getNumSommet() { // retourne le # du sommet
	return numerosSommet_;
};

int Voisins::getNbObjetA() { // retourne le nb d'objet A
	return a_.getNbObjet();
};

int Voisins::getNbObjetB() { // retourne le nb d'objet B
	return b_.getNbObjet();
};

int Voisins::getNbObjetC() { // retourne le nb d'objet C
	return c_.getNbObjet();
};
