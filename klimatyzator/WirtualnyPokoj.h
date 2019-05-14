#pragma once
#include "Termometr.h"
#include "Klimatyzator.h"
class WirtualnyPokoj
{
public:
	WirtualnyPokoj();
	WirtualnyPokoj(float constructor_deltaOgrzewania, float constructor_deltaChlodzenia, float tempPokoju);
	~WirtualnyPokoj();
	float deltaOgrzewania;
	float deltaChlodzenia;

	Termometr* wskNaTermometr;
	Klimatyzator* wskNaKlimatyzator;
	
	void update();
	
};

