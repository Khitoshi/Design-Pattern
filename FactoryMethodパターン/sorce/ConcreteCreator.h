#pragma once

#include "Product.h"

class ConcreteCreator
{
public:
    ConcreteCreator() {}
    ~ConcreteCreator() {}

    template <class T>
    Product<T> FactoryMethod() {
        Product<T> product;
        return product;
    }
};