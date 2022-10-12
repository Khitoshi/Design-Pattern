#include"Creator.h"
#include "ConcreteCreator.h"
#include<iostream>

using namespace std;

int main()
{
    ConcreteCreator1 creator ;
    
    creator.FactoryMethod().Use();

    return 0;
}