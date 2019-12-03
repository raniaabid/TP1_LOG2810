//
//  Objets.cpp
//  tp1log2810
//
//  Created by Rania Abid on 2019-11-05.
//  Copyright © 2019 Rania Abid. All rights reserved.
//

#include <stdio.h>
#include "Objets.h"

Objets::Objets()
{
    poids_=0;
    nom_= "";
    code_="";
    type_=NULL;
}

double Objets:: getPoids()
{
    return poids_;
}

std::string Objets:: getNom() const{
    return nom_;
}

void Objets:: setNom(std::string nom)
{
    nom_=nom;
}

std::string Objets:: getCode()
{
    return code_;
    
    
}


void Objets::setCode(std::string code)
{
    code_=code;
}


char Objets::getType()
{
    return type_;
}

void Objets::setType(char type)
{
    type_=type;
}

std::ostream& operator<<(std::ostream& os, const Objets& objets)
{
    os<< objets.getNom()<<" "<< objets.code_<<" "<< objets.type_<<std::endl;
    return os;
}
