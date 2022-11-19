#pragma once
#include <concepts>
#include <string>
#include "ConcreteProduct.h"
#include <string_view>

template <typename T>
concept is_product1 =
std::default_initializable<T> &&
requires(T & obj)
{
    {obj.Excute()}->std::convertible_to<std::string_view>;
};

template <is_product1 T>
class AbstractProduct1
{
private:
    T obj;
public:
    AbstractProduct1() {};
    ~AbstractProduct1() {};

    string Use()const { return obj.Excute(); }
};



template <class T>
concept is_product2 =
std::default_initializable<T> &&
requires(T & obj)
{
    {obj.Run()}->std::convertible_to<std::string_view>;
};

template <is_product2 T>
class AbstractProduct2
{
private:
    T obj;
public:
    AbstractProduct2() {};
    ~AbstractProduct2() {};

    string Use()const { return obj.Run(); }
};



template <class T>
concept is_product3 =
//std::default_initializable<T> && 
requires(T & obj)
{
    {obj.Action()}->std::convertible_to<std::string_view>;
};

template <is_product3 T>
class AbstractProduct3
{
private:
    T obj;
public:
    AbstractProduct3() {};
    ~AbstractProduct3() {};

    string Use()const { return obj.Action(); }
};
