#include<iostream>
#include"Creator.h"
#include"ConcreteCreator.h"
#include "ConcreteProduct.h"

using namespace std;

int main()
{
    Creator<ConcreteCreator> creator;
    //output: Result of the ConcreteProduct1
    creator.FactoryMethod<ConcreteProduct1>().Use();
    //output: Result of the ConcreteProduct2
    creator.FactoryMethod<ConcreteProduct2>().Use();

    //コンパイルエラー(Interfaceを継承していない為)
    //creator.FactoryMethod<ConcreteProduct3>().Use();

    return 0;
}