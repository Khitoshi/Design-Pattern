#pragma once
#include <iostream>
#include "Product.h"
using namespace std;

class ConcreteProduct1:public Creator<ConcreteProduct1>{
public:
    string Method(){
        return "Result of the ConcreteProduct1";
    }
};

class ConcreteProduct2 :public Creator<ConcreteProduct2> {
public:
    string Method() {
        return "Result of the ConcreteProduct2";
    }
};