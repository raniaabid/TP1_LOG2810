//
//  RobotX.h
//  tp1log2810
//
//  Created by Rania Abid on 2019-10-11.
//  Copyright © 2019 Rania Abid. All rights reserved.
//

#ifndef RobotX_h
#define RobotX_h
#include "Commande.h"
class RobotX
{
public:
    bool eligible();
    double calculerkx(); // 1+commande_.calculerMasse();
    double calculerT();
    
private:
    Commande commande_;
    
    
    
}


#endif /* RobotX_h */
