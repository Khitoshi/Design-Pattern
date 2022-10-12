#pragma once

#include <string>
#include <iostream>
#include "Intorface.h"

using namespace std;

class Adaptee
{
private:
    string str;
public:
    //Adaptee(const string s) :str(s) {}
    Adaptee() {};
    ~Adaptee() {}

protected:
    void Method() { cout << "Adaptee" << endl; }
};