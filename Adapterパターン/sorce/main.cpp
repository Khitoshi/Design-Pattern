#include "Adapter.h"
#include "Intorface.h"

int main()
{
    Interface<Adapter> adapter;

    adapter.printStr();

    return 0;
}