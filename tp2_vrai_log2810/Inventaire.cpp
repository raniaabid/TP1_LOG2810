//
//  Inventaire.cpp
//  tp2_log2810
//
//  Created by Rania Abid on 2019-11-25.
//  Copyright © 2019 Rania Abid. All rights reserved.
//

#include "Inventaire.h"

Inventaire:: Inventaire()
{
    for (int i=0; i<inventaire_.size(); i++)
    {
        inventaire_[i]= Objets();
    }
}

std::vector <Objets> Inventaire:: lireInventaire()
{
    
  
    std::ifstream entree("/Users/raniaabid/Desktop/tp2_vrai_log2810/inventaire.txt");
    if(entree.fail())
        std::cout << "File failed to open." << std::endl;
    
    
    if (!entree.fail())  //Tout est prêt pour la lecture.
    {
        for (int i = 0; i <20 ; i++)
        { //Lecture des 21e premières lignes du fichier texte qui représente les 21 noeuds
            
            std::string nom,code;
            char type;
            
            entree>>nom>>code>>type;
            inventaire_[i].setNom(nom);
            inventaire_[i].setCode(code);
            inventaire_[i].setType(type);
            
        }
        
    }
    
     return inventaire_;
}

void Inventaire::afficherInventaire()
{
    for (int i=0; i<inventaire_.size();i++)
    {
        std::cout << inventaire_[i]<<std::endl;
    }
}


std::vector <Objets> Inventaire::rechercheNomObjet(std::string nomObjet)
{   std::vector<Objets> trouvé;
    
    for(int i=0; i<inventaire_.size(); i++)
    {
        if(inventaire_[i].getNom()==nomObjet)
            trouvé.push_back(inventaire_[i]);
    }
    std::cout<<"le nombre d'objets trouvé de nom"<<nomObjet<<" est :"<<trouvé.size()<<std::endl;
    for(int k=0; k<trouvé.size();k++)
    {
        std::cout<<trouvé[k]<<std::endl;
    }
    
    return trouvé;
}

int  Inventaire::rechercheCodeObjet(std::string codeObjet)
{
    int index=0;
    
    for(int i=0; i<inventaire_.size(); i++)
    {
        if(inventaire_[i].getCode()==codeObjet)
            index= i;
    }
    std::cout<<"l'objet trouvé de code"<< codeObjet<<" est :"<< inventaire_[index]<<std::endl;
    
    
    return index;
}

void Inventaire::enleverObjet(std::string code)
{
  
    for(int index=this->rechercheCodeObjet(code); index<inventaire_.size();index++)
    {
        inventaire_[index]=inventaire_[index++];
        inventaire_.pop_back();
        
    }
}

std::vector <Objets> Inventaire::rechercheTypeObjet(char typeObjet)
{
    
    std::vector<Objets> trouvé;
    
    for(int i=0; i<inventaire_.size(); i++)
    {
        if(inventaire_[i].getType()==typeObjet)
            trouvé.push_back(inventaire_[i]);
    }
    std::cout<<"le nombre d'objets trouvé de type"<< typeObjet<<" est :"<<trouvé.size()<<std::endl;
    for(int k=0; k<trouvé.size();k++)
    {
        std::cout<<trouvé[k]<<std::endl;
    }
    return trouvé;
}

std::vector <Objets> Inventaire:: rechercheNomEtCodeObjet(std::string nomObjet, std::string codeObjet)
{
    std::vector<Objets> trouvé;
    bool deja=false;
    for(int i=0; i<inventaire_.size(); i++)
    {
        if(inventaire_[i].getNom()==nomObjet)
            trouvé.push_back(inventaire_[i]);
        
        if(inventaire_[i].getCode()==codeObjet)//trouver ne contient pas deja lobjet
        {
            for(int j=0; i<trouvé.size();i++)
            {
                if(inventaire_[i].getNom()==trouvé[j].getNom())
                    deja=true;
            }
            if (!deja)
                trouvé.push_back(inventaire_[i]);
        }
            
            }
    
    std::cout<<"le nombre d'objets trouvé de nom et de code"<< nomObjet<<" "<<codeObjet<<" est :"<<trouvé.size()<<std::endl;
    for(int k=0; k<trouvé.size();k++)
    {
        std::cout<<trouvé[k]<<std::endl;
    }
    return trouvé;
    
}


std::vector <Objets> Inventaire::rechercheNomEtType(std::string nomObjet, char typeObjet)
{
    std::vector<Objets> trouvé;
    bool deja=false;
    for(int i=0; i<inventaire_.size(); i++)
    {
        if(inventaire_[i].getNom()==nomObjet)
            trouvé.push_back(inventaire_[i]);
        
        if(inventaire_[i].getType()==typeObjet)//trouver ne contient pas deja lobjet
        {
            for(int j=0; i<trouvé.size();i++)
            {
                if(inventaire_[i].getNom()==trouvé[j].getNom()) //on aurais pu verifier aussi avec le type
                    deja=true;
            }
            if (!deja)
                trouvé.push_back(inventaire_[i]);
        }
        
    }
    std::cout<<"le nombre d'objets trouvé de nom et de type "<< nomObjet<<" "<<typeObjet<<" est :"<<trouvé.size()<<std::endl;
    for(int k=0; k<trouvé.size();k++)
    {
        std::cout<<trouvé[k]<<std::endl;
    }
    return trouvé;
    
}


std::vector <Objets> Inventaire::rechercheCodeEtType(std::string codeObjet, char typeObjet)
{
    std::vector<Objets> trouvé;
    bool deja=false;
    for(int i=0; i<inventaire_.size(); i++)
    {
        if(inventaire_[i].getCode()==codeObjet)
            trouvé.push_back(inventaire_[i]);
        
        if(inventaire_[i].getType()==typeObjet)//trouver ne contient pas deja lobjet
        {
            for(int j=0; i<trouvé.size();i++)
            {
                if(inventaire_[i].getCode()==trouvé[j].getCode()) //on aurais pu verifier aussi avec le type
                    deja=true;
            }
            if (!deja)
                trouvé.push_back(inventaire_[i]);
        }
        
    }
    std::cout<<"le nombre d'objets trouvé de code et de type"<< codeObjet<<" "<< typeObjet<<" est :"<<trouvé.size()<<std::endl;
    for(int k=0; k<trouvé.size();k++)
    {
        std::cout<<trouvé[k]<<std::endl;
    }
    return trouvé;
}
