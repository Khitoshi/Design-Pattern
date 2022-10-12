#pragma once
#include "Creator.h"
#include "ConcreteProduct.h"
#include "Product.h"
class ConcreteCreator1 : public Creator<ConcreteCreator1> {
    /**
     * Note that the signature of the method still uses the abstract product type,
     * even though the concrete product is actually returned from the method. This
     * way the Creator can stay independent of concrete product classes.
     */
public:
    Product<ConcreteProduct1> FactoryMethod(){
        Product<ConcreteProduct1> obj;
        return obj;
    }
};

/*
class ConcreteCreator2 : public Creator {
public:
    Product* FactoryMethod() const override {
        return new ConcreteProduct2();
    }
};
*/