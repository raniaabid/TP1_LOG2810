#ifndef RobotX_h
#define RobotX_h
#include "Commande.h"
class RobotX
{
public:
	double calculerkx(); // 1+commande_.calculerMasse();
	double calculerT();

private:
	Commande commande_;
}


#endif /* RobotX_h */