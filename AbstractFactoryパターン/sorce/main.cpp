#include <iostream>
#include "Product.h"
#include <typeinfo>
#include "AbstractFactory.h"
#include "ConcreteProduct.h"
using namespace std;

int main()
{
    ConcreteFactoryA CFactoryA;
    AbstractProduct1<ConcreteProduct1>* CProduct1 = CFactoryA.CreateProduct1();
    cout << CProduct1->Use() << endl;

    delete CProduct1;
    return 0;
}