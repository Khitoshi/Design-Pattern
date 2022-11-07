#pragma once
#include "Builder.h"

template <is_builder builder>
class Director
{
private:
    builder obj;
public:
    void construct()
    {
        obj.BuildBase();
        obj.BuildFrame();
        obj.BuildWall();
        obj.Print();
    }
};