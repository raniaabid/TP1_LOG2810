#ifndef Commande_h
#define Commande_h

#include <vector>
#include "ObjetA.h"
#include "ObjetB.h"
#include "ObjetC.h"
#include "Noeuds.h"

class Commande
{
	public:
		void prendreCommande();
		void afficherCommande();
		double getMasseTotale();
	private:
		int nbreObjetA;
		int nbreObjetB;
		int nbreObjetC;
		ObjetA obA;
		ObjetB obB;
		ObjetC obC;
		vector <Noeuds> toutNoeuds; // a verifier
};

#endif /* Commande_h */