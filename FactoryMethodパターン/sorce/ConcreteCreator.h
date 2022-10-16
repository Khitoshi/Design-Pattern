#pragma once

#include "Creator.h"
//#include "ConcreteProduct.h"
#include "Product.h"

template<class T>
class ConcreteCreatorInterface
{
public:

    Product<T> FactoryMethod() {
        static_cast<T&>(this) product;
        return product;
    }
};

class ConcreteCreator : ConcreteCreatorInterface<ConcreteCreator> {
public:
    ConcreteCreator() {}
    ~ConcreteCreator() {}

    template <class T>
    Product<T> FactoryMethod() {
        Product<T> product;
        return product;
    }
};