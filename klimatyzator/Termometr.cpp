#include "Termometr.h"
#include <iostream>
using namespace std;


Termometr::Termometr()
{
	myTemp = 0.0;
}


Termometr::~Termometr()
{
}


Termometr::Termometr(float constructorTemp)
{
	myTemp = constructorTemp;
}
