#pragma once
#include <iostream>
#include "Product.h"
#include "Interface.h"
using namespace std;

class ConcreteProduct1 :Interface<ConcreteProduct1> {
public:

    string Method() {
        return "Result of the ConcreteProduct1";
    }
};

class ConcreteProduct2 : Interface<ConcreteProduct2> {
public:
    ConcreteProduct2() {}
    ~ConcreteProduct2() {}

    string Method() {
        return "Result of the ConcreteProduct2";
    }
};