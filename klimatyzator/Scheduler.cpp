#include "Scheduler.h"
#include <iostream>
#include "WirtualnyPokoj.h"
#include "Sterownik.h"
#include <Windows.h>
using namespace std;

Scheduler::Scheduler()
{
	wskNaSterwonik = NULL;
	wskNaWirtualnyPokoj = NULL;
}


Scheduler::~Scheduler()
{
}


void Scheduler::run()
{
	int licznik = 0;
	for (;;)
	{
		wskNaSterwonik->update();
		wskNaWirtualnyPokoj->update();
		cout << endl << endl;
		licznik++;
		if (licznik == 7)
		{
			system("cls");
			cout << "TEMPERATURA ZADANA:" << wskNaSterwonik->wantedTemperature << endl;
			licznik = 0;
		}
		Sleep(1000);
	}
}
