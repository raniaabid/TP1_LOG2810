#include"Voisin.h"
using namespace std;

void Voisin::setVoisin(int sommet, int sommetVoisin, int dst)
{
	numerosSommet_ = sommet;
	voisinDe_ = sommetVoisin;
	distance_ = dst;
}
int Voisin::getDistance() 
{
	return distance_;
};
int Voisin::getSommetVoisin() 
{
	return voisinDe_;
};
