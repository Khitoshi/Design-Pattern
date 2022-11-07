#include <iostream>
#include "Director.h"
#include "JapaneseHouseBuilder.h"
#include "KamakuraBuilder.h"

int main()
{
    Director<JapaneseHouseBuilder> d1;
    Director<KamakuraBuilder> d2;

    d1.construct();
    d2.construct();
    return 0;
}