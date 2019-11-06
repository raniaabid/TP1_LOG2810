#pragma once

#include <iostream>
#include <fstream>
#include"Struct.h"
#include <vector>
#include "Noeuds.h"
#include "Voisins.h"
#include "ObjetA.h"
#include "ObjetB.h"
#include "ObjetC.h"
#include "Commande.h"


class Fonctions {

public:

	void afficherGraphe(vector<Noeuds> graphe);
	void plusCourtChemin(Commande commande); // Dijkstra
	vector<Noeuds> creerGraphe();
	void quitter();



protected:

	vector<Noeuds> graphe;


};
