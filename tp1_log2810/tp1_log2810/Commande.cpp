
#include <stdio.h>
#include "Commande.h"

double Commande::getMasseTotale() //ala place de calcul la masse totale
{
	return((nbreObjetA * obA.getPoids()) + (nbreObjetB * obB.getPoids()) + (nbreObjetC * obC.getPoids()));
}

void Commande::prendreCommande()
{
	cout << "entrez  le nombre d'objet A, B et C que vous désirer séparé d'un espace" << endl;
	cin >> nbreObjetA >> nbreObjetB >> nbreObjetC;
}

void Commande::afficherCommande()
{
	cout << nbreObjetA << " objets A" << endl << nbreObjetB << " objets B" << endl << nbreObjetC << " objets C" << endl;
}