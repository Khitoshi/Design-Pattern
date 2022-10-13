#pragma once

#include "Creator.h"
#include "ConcreteProduct.h"
#include "Product.h"

class ConcreteCreator : public Creator<ConcreteCreator> {
public:
    template <class T>
    Product<T> FactoryMethod() {
        Product<T> product;
        return product;
    }
};