#pragma once
#include <string>
#include <iostream>
using namespace std;
template <class T>
class Product
{
private:
    T obj;
public:
    ~Product() {};
    void Use() { cout << obj.Method() << endl; };
};