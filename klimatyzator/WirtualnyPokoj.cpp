#include "WirtualnyPokoj.h"
#include "Termometr.h"
#include "Klimatyzator.h"
#include <iostream>
using namespace std;


WirtualnyPokoj::WirtualnyPokoj()
{
	deltaOgrzewania = 0.5;
	deltaChlodzenia = 2;

}


WirtualnyPokoj::~WirtualnyPokoj()
{
}


WirtualnyPokoj::WirtualnyPokoj(float constructor_deltaOgrzewania, float constructor_deltaChlodzenia, float tempPokoju)
{
	deltaOgrzewania = constructor_deltaOgrzewania;
	deltaChlodzenia = constructor_deltaChlodzenia;
	wskNaTermometr = new Termometr;
	wskNaTermometr->myTemp = tempPokoju;

}


void WirtualnyPokoj::update()
{
	if (wskNaKlimatyzator->myState == 1)
	{
		wskNaTermometr->myTemp -= deltaChlodzenia;
		cout << "Dziala klimatyzator - temp sie zmniejsza" << endl;
	}
	else
	{
		wskNaTermometr->myTemp += deltaOgrzewania;
		cout << "Klimatyzajca nie jest wlaczona, pokoj sie nagrzewa" << endl;
	}

	cout << "Temperatura w pokoju wynosi: " << wskNaTermometr->myTemp << endl;

}
