#pragma once

#include <iostream>
#include <vector> 
#include <fstream>
#include <string>
#include "Noeuds.h"
#include "Voisin.h"
using namespace std;

class Fonctions {
	vector<Noeuds> creerGraphe();
	void afficherGraphe(vector<Noeuds> graphe);
	void plusCourtChemin(); // Dijkstra
};
