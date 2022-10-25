#pragma once
#include "Prototype.h"

class ConcretePrototype:public Prototype
{
public:
	ConcretePrototype(){}
	~ConcretePrototype()override{}
	

};

#include <iostream>
using namespace std;
class MassageBox :public Prototype<MassageBox>
{
private:
	string decoStr;
public:
	MassageBox(const string str) :decoStr(str) {};
	~MassageBox()override{};

	void Use(string str) {
		int length = str.length() + 4;
		for (int i = 0; i < length; i++) {
			cout << decoStr;
		}
		cout << endl;
		cout << decoStr << " " << str << " " << decoStr << endl;

		for (int i = 0; i < length; i++)
		{
			cout << decoStr;
		}
		cout << endl;
	}

	Prototype CreateClone()
	{

	}

};