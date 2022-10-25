#include <iostream>
#include "Test.h"

using namespace std;

int main()
{
    TEST1& test1 = TEST1::GetInstance();
    test1.SetStr("test1");
    cout << test1.GetStr() << endl;


    TEST2& test2 = TEST2::GetInstance();
    test2.SetStr("test2");
    cout << test2.GetStr() << endl;

    return 0;
}