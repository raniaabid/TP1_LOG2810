//
//  Commande.cpp
//  tp2_vrai_log2810
//
//  Created by Rania Abid on 2019-11-27.
//  Copyright © 2019 Rania Abid. All rights reserved.
//

#include <stdio.h>
#include "Commande.h"

Commande:: Commande()

{
    for (int i=0; i<commande_.size(); i++)
    
    {
        commande_[i]= Objets();
    }
    inventaire_=Inventaire();
}

double Commande::calculPoidsCommande()
{
    double poidsTotal=0;
    for (int i=0; i<commande_.size();i++)
    {
        poidsTotal+=commande_[i].getPoids();
    }
    return poidsTotal;
}

void Commande:: ajouterObjetCommande(std:: string code)
{
    int index= this->inventaire_.rechercheCodeObjet(code);
    Objets ajout=this->inventaire_[index];
    if (this->calculPoidsCommande()<25)
    {
        commande_.push_back(ajout);
        //enlever l'élement de l'inventaire
        inventaire_.enleverObjet(code);
        
    }
    else
        std::cout<< " votre commande a atteint sa limite de 25kg vous ne pouvez pas ajouter un autre item"<<std::endl;
}

void Commande:: afficherCommande()
{
    if (commande_.size()<=0)
        std::cout<<"le panier est vide"<<std::endl;
    for (int i=0; i<commande_.size();i++)
    {
        std::cout<< "le panier contient acutellement les objets:"<<std::endl<<commande_[i]<<std::endl;
    }
}
