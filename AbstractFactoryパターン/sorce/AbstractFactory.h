#pragma once
#include "ConcreteProduct.h"

// Factoryを表すインタフェース
template<class T>
concept FactoryConcept = requires(T obj) {
    {obj.create_product_a()}->std::convertible_to<std::unique_ptr<Product>>;
    {obj.create_product_b()}->std::convertible_to<std::unique_ptr<Product>>;
};


template<FactoryConcept T>
class AbstractFactory
{
public:
    AbstractFactory() {}
    virtual ~AbstractFactory() {};
    std::unique_ptr<T> Use() { return std::make_unique<T>(); }
};


//TODO:AbstractFactoryから派生させたい
// 具体的なFactoryを表すクラス
class ConcreteFactory
{
public:
    ConcreteFactory() {};
    ~ConcreteFactory() {};
    std::unique_ptr<Product> create_product_a() const
    {
        return std::make_unique<ConcreteProductA>();
    }

    std::unique_ptr<Product> create_product_b() const
    {
        return std::make_unique<ConcreteProductB>();
    }
};