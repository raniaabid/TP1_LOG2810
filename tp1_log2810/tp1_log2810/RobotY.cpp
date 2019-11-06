//
//  RobotY.cpp
//  tp1log2810
//
//  Created by Rania Abid on 2019-10-29.
//  Copyright © 2019 Rania Abid. All rights reserved.
//

#include <stdio.h>
#include "RobotY.h"

RobotY::RobotY() :Robots() {

}
bool RobotY::eligible()
{
	return (commande_.getMasseTotale() < 10);
}

double RobotY::calculerky()
{
	return (1, 5 + (0, 6 * commande_.getMasseTotale()));
}

double RobotY::calculerT()
{
	if (eligible())
		return 1;
	else
		return 0;

}
