#pragma once

#include "Building.h"
#include <iostream>

class KamakuraBuilder {
private:
    Building builder;
public:
    KamakuraBuilder() {}
    ~KamakuraBuilder() {}

    void BuildBase() { builder.SetBase("SNOW"); }

    void BuildFrame() { builder.SetFrame("SNOW"); }

    void BuildWall() { builder.SetWall("SNOW"); }

    void Print() { cout << builder.GetMaterial() << endl; }
};