#pragma once
#include <string>
#include "Product.h"

// ��̓I��Product��\���N���X
class ConcreteProductA : public Product
{
public:
    void do_something() const override
    {
        std::cout << "ConcreteProductA: doing something" << std::endl;
    }
};

class ConcreteProductB : public Product
{
public:
    void do_something() const override
    {
        std::cout << "ConcreteProductB: doing something" << std::endl;
    }
};