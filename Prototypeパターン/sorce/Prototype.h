#pragma once
#include<concepts>
#include <string>
#include "Cloneable.h"
using namespace std;


class Prototype:public Cloneable<Prototype>
{
public:
    virtual void Use(string s) {obj.Method(s)};
    virtual Prototype CreateClone() = 0;

};