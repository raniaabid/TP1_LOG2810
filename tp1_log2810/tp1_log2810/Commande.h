//
//  Commande.h
//  tp1log2810
//
//  Created by Rania Abid on 2019-10-11.
//  Copyright © 2019 Rania Abid. All rights reserved.
//

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

    ObjetA obA;
    ObjetB obB;
    ObjetC obC;
    
    vector <Noeuds> toutNoeuds;
    
    
    
    
}

#endif /* Commande_h */
