#pragma once

#include "Adaptee.h"

class Adapter :public Adaptee
{
public:
	Adapter() :Adaptee() {};
	~Adapter() {};

	//Adaptee�̊֐�����������
	void Coupling() { Method(); }
};
