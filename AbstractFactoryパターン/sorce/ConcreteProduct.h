#pragma once
#include <string>
#include "AbstractFactory.h"

using namespace std;

class ConcreteProduct1
{
public:
	ConcreteProduct1() {};
	~ConcreteProduct1() {};

	const char* Excute()const
	{
		return "ConcreteProduct1:Excute";
	}
};


class ConcreteProduct2
{
public:
	ConcreteProduct2() {};
	~ConcreteProduct2() {};

	const char* Run()const
	{
		return "ConcreteProduct2:Run";
	}
};


class ConcreteProduct3
{
public:
	ConcreteProduct3() {};
	~ConcreteProduct3() {};

	const char* Action()const
	{
		return "ConcreteProduct3:Action";
	}
};