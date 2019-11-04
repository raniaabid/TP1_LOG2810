//
//  main.cpp
//  tp1log2810
//
//  Created by Rania Abid on 2019-10-11.
//  Copyright © 2019 Rania Abid. All rights reserved.
//

#include <iostream>
#include "Fonctions.h"
#include "Noeuds.h"
#include "Commande.h"

int main() {
    // insert code here...
    
    
    Fonctions f1;
    vector<Noeuds> graphe=f1.creerGraphe();
    
    f1.afficherGraphe(graphe);
    cout<<endl;
    Commande commande1;
    commande1.prendreCommande();
    
    cout<< "votre commande est:"<<endl;
    
    commande1.afficherCommande();
    
    
    string reponse;
    cout<<"voulez vous quitter?"<<endl;
    cin>>reponse;
    
    cout<<"votre chemin le plus court pour récolter recolter votre commande sera... avec le robot et avec un temps"<<endl;
    if(reponse=="oui")
        f1.quitter();
    
    
    
    
    return 0;
}
