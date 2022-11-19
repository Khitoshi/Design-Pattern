#pragma once

#include "Product.h"

/*
template <class T>
concept is_AbstractFactory =
std::default_initializable<T> && 
requires(T & obj)
{
    obj.CreateProduct1();
    obj.CreateProduct2();
    obj.CreateProduct3();
};
*/


class ConcreteFactoryA
{
public:
    ConcreteFactoryA() {}
    ~ConcreteFactoryA() {}
    
    AbstractProduct1<ConcreteProduct1>* CreateProduct1() {
        return new AbstractProduct1<ConcreteProduct1>;
    };

    AbstractProduct2<ConcreteProduct2>* CreateProduct2() {
        return new AbstractProduct2<ConcreteProduct2>;
    };
    
    AbstractProduct3<ConcreteProduct3>* CreateProduct3() {
        return new AbstractProduct3<ConcreteProduct3>;
    };
};