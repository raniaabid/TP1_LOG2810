#include"Noeuds.h"

using namespace std;


Noeuds::Noeuds() {
	numerosSommet_ = 0;
	a_ = ObjetA();
	b_ = ObjetB();
	c_ = ObjetC();
	for (int i = 0; i < voisins_.size();i++) {
		voisins_[i] = Voisins();
	}
	vector<Noeuds> voisins_;

}
void Noeuds::setNumSommet(int num)
{
	numerosSommet_ = num;
}

void Noeuds::setNbOBjet(int x, int y, int z)
{
	/* Utiliser pour définir le nb de chaque
	 type d'objet dans la lecture du fichier*/
	a_.setNbObjet(x);
	b_.setNbObjet(y);
	c_.setNbObjet(z);
}

void Noeuds::setRelations(Voisins x)
{
	//Utiliser pour établir les arcs entre deux noeuds x et y
	voisins_.push_back(x);
}
int Noeuds::getNumSommet() { // retourne le # du sommet
	return numerosSommet_;
};

int Noeuds::getNbObjetA() { // retourne le nb d'objet A
	return a_.getNbObjet();
};

int Noeuds::getNbObjetB() { // retourne le nb d'objet B
	return b_.getNbObjet();
};

int Noeuds::getNbObjetC() { // retourne le nb d'objet C
	return c_.getNbObjet();
};

size_t Noeuds::getNbDeVoisin() {
	return voisins_.size();
};

vector<Voisins> Noeuds::getNoeudsVoisins() {
	return voisins_;
}
