#pragma once
#include "WirtualnyPokoj.h"
#include "Sterownik.h"
class Scheduler
{
public:
	Scheduler();
	~Scheduler();

	Sterownik* wskNaSterwonik;
	WirtualnyPokoj* wskNaWirtualnyPokoj;
	void run();
};

