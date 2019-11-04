#ifndef DEF_VOISIN
#define DEF_VOISIN

#include <iostream>
#include "Noeuds.h"


class Voisin : public Noeuds 
{
public:
	void setVoisin(int sommet, int sommetVoisin, int dst) {};
	int getSommetVoisin() {};
	int getDistance() {};
private: 
	int voisinDe_;
	int distance_;
};

#endif