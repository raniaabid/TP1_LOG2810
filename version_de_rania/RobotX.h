//
//  RobotX.h
//  tp1log2810
//
//  Created by Rania Abid on 2019-10-11.
//  Copyright © 2019 Rania Abid. All rights reserved.
//

#ifndef RobotX_h
#define RobotX_h
#include "Robots.h"

class RobotX:public Robots
{
public:
    RobotX();
    bool eligible();
    double calculerkx(); // 1+commande_.calculerMasse();
    double calculerT();
    

    
    
};


#endif /* RobotX_h */
