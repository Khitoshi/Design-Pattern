#include <iostream>
#include "Dishware.h"
using namespace std;

int main()
{
    typedef ExtendedAbstraction<ConcreteImplementationB> ExAbstraction;
    ExAbstraction* Exabs = new ExAbstraction;
    Abstraction<ExAbstraction>* abs = new Abstraction<ExAbstraction>(Exabs);
    abs->use();
    
    delete Exabs, abs;

    return 0;
}