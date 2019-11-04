#include"Noeuds.h"

using namespace std;

void Noeuds::setNumSommet(int num) 
{
	numerosSommet_ = num;
}

void Noeuds::setNbOBjet(int x, int y, int z)
{
	/* Utiliser pour définir le nb de chaque
	type d'objet dans la lecture du fichier*/
	a_.setNbObjet = x;
	b_.setNbObjet = y;
	c_.setNbObjet = z;
}

void Noeuds::setRelations(Voisin x)
{
	/*Utiliser pour établir les arcs
	entre deux noeuds x et y*/
	voisins_.push_back(x);
}

int Noeuds::getNumSommet() { // retourne le # du sommet
	return numerosSommet_;
};

int Noeuds::getNbObjetA() { // retourne le nb d'objet A
	return a_.getNbObjet;
};

int Noeuds::getNbObjetB() { // retourne le nb d'objet B
	return b_.getNbObjet;
};

int Noeuds::getNbObjetC() { // retourne le nb d'objet C
	return c_.getNbObjet;
};

int Noeuds::getNbDeVoisins() {
	return voisins_.size();
};

vector<Voisin> Noeuds::getVoisin() {
	return voisins_;
}