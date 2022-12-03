#pragma once

#include <iostream>
#include <memory>
#include <concepts>

class Product
{
public:
    virtual ~Product() = default;
    virtual void do_something() const = 0;
};




