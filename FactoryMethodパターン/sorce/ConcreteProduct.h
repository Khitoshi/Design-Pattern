#pragma once
#include <iostream>
#include "Interface.h"

using namespace std;

class ConcreteProduct1 :public Interface<ConcreteProduct1> {
public:
    string Method() override{
        return "Result of the ConcreteProduct1";
    }
};

class ConcreteProduct2 :public  Interface<ConcreteProduct2> {
public:
    string Method() override{
        return "Result of the ConcreteProduct2";
    }
};

class ConcreteProduct3 {
public:
    string Method() {
        return "Result of the ConcreteProduct2";
    }
};