#include<iostream>
#include"Creator.h"
#include"ConcreteCreator.h"
#include "ConcreteProduct.h"

using namespace std;

int main()
{
    //Creator<ConcreteCreator>  creator;
    Creator<ConcreteCreator> creator;
    creator.FactoryMethod<ConcreteProduct2>()

    //creator.FactoryMethod<ConcreteProduct1>().Use();
    //creator.FactoryMethod<ConcreteProduct2>().Use();


    

    return 0;
}