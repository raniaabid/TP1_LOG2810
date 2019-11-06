//
//  RobotZ.h
//  tp1log2810
//
//  Created by Rania Abid on 2019-10-11.
//  Copyright © 2019 Rania Abid. All rights reserved.
//

#ifndef RobotZ_h
#define RobotZ_h
#include "Commande.h"

class RobotZ
{
public:
    RobotZ();
    bool eligible();
    double calculerkz();
    double calculerT();
private:
    Commande commande_; 
};


#endif /* RobotZ_h */
