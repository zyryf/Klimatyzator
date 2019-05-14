#include <iostream>
#include "Termometr.h"
#include "Klimatyzator.h"
#include "WirtualnyPokoj.h"
#include "Sterownik.h"
#include "Scheduler.h"
using namespace std;

int main()
{
	float tempZadana, tempPokoju;
	cout << "Podaj temperature w pokoju: ";
	cin >> tempPokoju;
	cout << endl;
	cout << "Podaj temperature zadana: ";
	cin >> tempZadana;

	

	Klimatyzator klimatyzacja;
	Sterownik sterowanie(tempZadana, &klimatyzacja);
	WirtualnyPokoj pokoj(0.5, 1, tempPokoju);
	Scheduler planista;

	sterowanie.wskNaKlimatyzator = &klimatyzacja;
	sterowanie.wskNaTermometr = pokoj.wskNaTermometr;

	pokoj.wskNaKlimatyzator = &klimatyzacja;

	planista.wskNaSterwonik = &sterowanie;
	planista.wskNaWirtualnyPokoj = &pokoj;

	planista.run();

	system("PAUSE");
	return 0;
}