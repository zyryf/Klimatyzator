#include "Sterownik.h"
#include "Termometr.h"
#include "Klimatyzator.h"
#include <iostream>
using namespace std;



Sterownik::Sterownik()
{
	wskNaTermometr = NULL;
	wantedTemperature = 0.0;
}

Sterownik::Sterownik(float constructorTemperature, Klimatyzator* constructor_klimatyzator)
{
	wantedTemperature = constructorTemperature;
	wskNaKlimatyzator = constructor_klimatyzator;

}

Sterownik::~Sterownik()
{
}


void Sterownik::update()
{
	
	
	if ((wskNaTermometr->myTemp) > wantedTemperature)
	{
		wskNaKlimatyzator->myState=1;
	}
	else
	{
		wskNaKlimatyzator->myState = 0;
	}
}




void Sterownik::zmianaTemp(float temperatura)
{
	wantedTemperature = temperatura;
}
