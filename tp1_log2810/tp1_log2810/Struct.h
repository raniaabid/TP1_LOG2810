//
//  Struct.h
//  tp1log2810
//
//  Created by Rania Abid on 2019-11-04.
//  Copyright © 2019 Rania Abid. All rights reserved.
//

#ifndef Struct_h
#define Struct_h
#include "Noeuds.h"
class Struct {
    
public:
    Struct();
    void setDistance(int x);
    void setNoeudCourant(Noeuds noeud);
    void setVisite(bool visite);
    void setAncienNoeud(Noeuds ancienNoeud);
    int getDistance();
    Noeuds getNoeudCourant();
    bool getVisite();
    Noeuds getAncienNoeud();
private:
    
    int distance_;
    Noeuds noeudCourant_;
    bool visite_;
    Noeuds ancienNoeud_;
    
    
    
    
    
};

#endif /* Struct_h */
