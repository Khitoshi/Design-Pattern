#include<iostream>
#include"Creator.h"
#include"ConcreteCreator.h"

using namespace std;

int main()
{
    ConcreteCreator creator;
    
    //output: Result of the ConcreteProduct1
    creator.FactoryMethod<ConcreteProduct1>().Use();

    //output: Result of the ConcreteProduct2
    creator.FactoryMethod<ConcreteProduct2>().Use();

    return 0;
}