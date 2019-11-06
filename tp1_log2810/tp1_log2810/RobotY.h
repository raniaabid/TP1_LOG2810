//
//  RobotY.h
//  tp1log2810
//
//  Created by Rania Abid on 2019-10-11.
//  Copyright © 2019 Rania Abid. All rights reserved.
//

#ifndef RobotY_h
#define RobotY_h
#include "Commande.h"
class RobotY{
public:
    RobotY();
    bool eligible();
    double calculerky();
    double calculerT();
private:
    Commande commande_;
    
    
};


#endif /* RobotY_h */
