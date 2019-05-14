#pragma once
#include "Termometr.h"
#include "Klimatyzator.h"

class Sterownik
{
public:
	Sterownik();
	~Sterownik();
	Sterownik(float constructorTemperature, Klimatyzator* constructor_klimatyzator);

	Termometr* wskNaTermometr;
	Klimatyzator* wskNaKlimatyzator;
	float wantedTemperature;
	void update();
	void zmianaTemp(float temperatura);
};


