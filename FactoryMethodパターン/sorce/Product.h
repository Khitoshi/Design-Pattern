#pragma once

#include <string>
#include <iostream>

using namespace std;

template <class T>
class Interface;

template<class T,bool isExtended = std::is_base_of<Interface<T>,T>::value>
class Product
{
    static_assert(isExtended, "T is not extended interface class");
};

template <class T>
class Product<T,true>
{
private:
    T obj;
public:
    Product() {}
    ~Product() {}
    void Use() { cout << obj.Method() << endl; };
};