#include<iostream>
#include"Creator.h"
#include"ConcreteProduct.h"

int main()
{
    //output: ConcreteProduct1
    auto product1 = Creator::factory<ConcreteProduct1>();
    Creator::use(product1);

    //output: ConcreteProduct2  
    auto product2 = Creator::factory<ConcreteProduct2>();
    Creator::use(product2);

    //必要な関数がないのでエラーになる
    //auto product3 = Creator::factory<ConcreteProduct3>();
    //Creator::use(product3);

    return 0;
}