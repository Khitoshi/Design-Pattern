#include<iostream>
#include "Concrete.h"

using namespace std;

int main()
{
    Abstract<Concrete1> concreate1 ;
    Abstract<Concrete2> concreate2 ;

    concreate1.TemplateMethod();
    concreate2.TemplateMethod();
    
    return 0;
}