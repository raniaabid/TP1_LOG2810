#pragma once

#include <iostream>

#include <vector>
#include "Noeuds.h"
#include "ObjetA.h"
#include "ObjetB.h"
#inc

class Fonctions {
    
public:
vector<Noeuds> creerGraphe();
void afficherGraphe(vector<Noeuds> graphe);
void plusCourtChemin(); // Dijkstra
    
protected:
   
};
