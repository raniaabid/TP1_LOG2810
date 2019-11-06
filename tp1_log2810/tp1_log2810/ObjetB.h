//
//  ObjetB.h
//  tp1log2810
//
//  Created by Rania Abid on 2019-10-11.
//  Copyright © 2019 Rania Abid. All rights reserved.
//

#ifndef ObjetB_h
#define ObjetB_h
class ObjetB
{
public:
    ObjetB();
    double getPoids();
    int getNbObjet();
    void setNbObjet(int n);

    
private:
    
    double poids_=3;
    int nbObjetB;
    
};

#endif /* ObjetB_h */
