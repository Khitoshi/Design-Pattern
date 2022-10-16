#pragma once

#include <string>
#include "Product.h"

template <class T>
class Creator
{
private:
    T obj;
public:
    Creator() {}
    ~Creator() {}

    template <class C>
    Product<C> FactoryMethod() {
        return obj.FactoryMethod<C>();
    }
}; 
