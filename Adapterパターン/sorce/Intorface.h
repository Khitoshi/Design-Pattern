#pragma once

#include <string>
#include <iostream>

using namespace std;

template<class T>
class Interface
{
private:
    T obj;
public:
    Interface(){}
    ~Interface() {};

    void printStr() { obj.Coupling(); };
};