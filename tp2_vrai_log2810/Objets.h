//
//  Objets.h
//  tp1log2810
//
//  Created by Rania Abid on 2019-11-05.
//  Copyright © 2019 Rania Abid. All rights reserved.
//
#include <iostream>
#ifndef Objets_h
#define Objets_h
class Objets{
    
public:
    
Objets();
double getPoids();
    std::string getNom() const;
    void setNom(std::string nom);
    std::string getCode();
    void setCode(std::string code);
    char getType();
    void setType(char type);
    friend std::ostream& operator<<(std::ostream& os, const Objets& objets);


protected:

    double poids_;
    std::string nom_;
    std::string code_;
    char type_;
//int nbObjetB;
};
#endif /* Objets_h */
