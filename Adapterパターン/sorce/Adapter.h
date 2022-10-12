#pragma once

#include "Adaptee.h"

class Adapter :public Adaptee
{
public:
	Adapter() :Adaptee() {};
	~Adapter() {};

	//Adaptee‚ÌŠÖ”‚ğŒ‹‡‚·‚é
	void Coupling() { Method(); }
};
