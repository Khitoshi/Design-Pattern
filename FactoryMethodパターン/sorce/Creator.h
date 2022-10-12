#pragma once
#include <string>
#include "Product.h"

template <class T>
class Creator
{
private:
public:
    string Method() { 
        return static_cast<T&>(this)->Method();;
    }

};