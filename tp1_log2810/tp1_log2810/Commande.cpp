//
//  Commande.cpp
//  tp1log2810
//
//  Created by Rania Abid on 2019-10-29.
//  Copyright © 2019 Rania Abid. All rights reserved.
//

#include <stdio.h>
#include "Commande.h"

Commande::Commande(){
    
    obA = ObjetA();
    obB = ObjetB();
    obC = ObjetC();
    for(int i= 0; i<toutNoeuds.size();i++){
        
        toutNoeuds[i]= Noeuds();
    }
}

double Commande::getMasseTotale() //ala place de calcul la masse totale
{
    return(( obA.getNbObjet()*obA.getPoids())+ (obB.getNbObjet()*obB.getPoids())+(obC.getNbObjet()*obC.getPoids()));
    
}


void Commande::prendreCommande()

{
    int nbreA;
    int nbreB;
    int nbreC;
    
    
    cout<<"entrez  le nombre d'objet A, B et C que vous désirer séparé d'un espace"<< endl;
    cin>>nbreA>>nbreB>>nbreC;
    
    obA.setNbObjet(nbreA);
    obB.setNbObjet(nbreB);
    obC.setNbObjet(nbreC);
    
}

void Commande::afficherCommande()
{
    cout <<obA.getNbObjet()<< " objets A"<<endl<<obB.getNbObjet()<<" objets B"<<endl<<obC.getNbObjet()<<" objets C"<<endl;
}
