//
//  RobotX.cpp
//  tp1log2810
//
//  Created by Rania Abid on 2019-10-29.
//  Copyright © 2019 Rania Abid. All rights reserved.
//

#include <stdio.h>
#include "RobotX.h"
RobotX::RobotX():Robots(){
    
}
bool RobotX:: eligible()
{
    return (commande_.getMasseTotale()<5);
}

double RobotX::calculerkx() 
{
    return (1+commande_.getMasseTotale());
    
}

double RobotX::calculerT()
{
    if (eligible())
        return 1;
    //return(calculerkx()*calculerD()); // calculerd est la distance djikstrat
    else
        return 0;
}
