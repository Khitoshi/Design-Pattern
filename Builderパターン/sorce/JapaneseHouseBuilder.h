#pragma once

#include "Building.h"
#include <iostream>

using namespace std;
class JapaneseHouseBuilder {
private:
    Building builder;
public:
    JapaneseHouseBuilder() {}
    ~JapaneseHouseBuilder() {}

    void BuildBase() { builder.SetBase("CONCRETE"); }

    void BuildFrame() { builder.SetFrame("WOOD"); }

    void BuildWall() { builder.SetWall("CLAY"); }

    void Print() { cout << builder.GetMaterial() << endl; }
};