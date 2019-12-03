//
//  Inventaire.h
//  tp2_log2810
//
//  Created by Rania Abid on 2019-11-25.
//  Copyright © 2019 Rania Abid. All rights reserved.
//

#ifndef Inventaire_h
#define Inventaire_h
#include <iostream>
#include <vector>
#include "Objets.h"
#include <fstream>
class Inventaire
{
public:
    Inventaire();
    std::vector <Objets> lireInventaire();
    void afficherInventaire();
    
    std::vector <Objets> rechercheNomObjet(std::string nomObjet);
    Objets rechercheCodeObjet(std::string codeObjet);
    std::vector <Objets> rechercheTypeObjet(char TypeObjet);
    std::vector <Objets> rechercheNomEtCodeObjet(std::string nomObjet, std::string codeObjet);
    std::vector <Objets> rechercheNomEtType(std::string nomObjet, char typeObjet);
    std::vector <Objets> rechercheCodeEtType(std::string codeObjet, char typeObjet);


    void enleverObjet(std::string code);

    
    
private:
    std::vector <Objets> inventaire_;
    
    
};

#endif /* Inventaire_h */
