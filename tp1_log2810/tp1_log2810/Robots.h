//
//  Robots.h
//  tp1log2810
//
//  Created by Rania Abid on 2019-11-05.
//  Copyright © 2019 Rania Abid. All rights reserved.
//

#ifndef Robots_h
#define Robots_h
#include "Commande.h"

class Robots {

public:
	Robots();
	bool eligible();
	double calculerkz();
	double calculerT();
protected:
	Commande commande_;

};


#endif /* Robots_h */
