//
//  Commande.h
//  tp2_vrai_log2810
//
//  Created by Rania Abid on 2019-11-27.
//  Copyright © 2019 Rania Abid. All rights reserved.
//

#ifndef Commande_h
#define Commande_h

#include <typeinfo>
#include "Objets.h"
#include "Inventaire.h"


class Commande
{
public:
     Commande();
    
    void ajouterObjetCommande(std:: string code);
    double calculPoidsCommande();
    void afficherCommande();

private:
    std::vector <Objets> commande_;
    Inventaire inventaire_;
};

#endif /* Commande_h */
