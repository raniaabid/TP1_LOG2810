#pragma once

#include <iostream>
#include <fstream>

#include <vector>
#include "Noeuds.h"
#include "ObjetA.h"
#include "ObjetB.h"
#include "ObjetC.h"

class Fonctions {
    
public:

void afficherGraphe(vector<Noeuds> graphe);
void plusCourtChemin(); // Dijkstra
    
protected:
    vector<Noeuds> creerGraphe();
   
};
