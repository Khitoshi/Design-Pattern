#pragma once

#include <string>
#include "Product.h"

template <class T>
class Creator
{
public:
    Creator() {}
    ~Creator() {}

    string Method() { 
        return static_cast<T&>(this)->Method();
    }
};