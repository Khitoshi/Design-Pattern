#pragma once

#include "Adaptee.h"

class Adapter :public Adaptee
{
public:
	Adapter() :Adaptee() {};
	~Adapter() {};

	//Adapteeの関数を結合する
	void Coupling() { Method(); }
};
