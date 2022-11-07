#pragma once

#include <string>

using namespace std;

class Building
{
private:
    string Base;
    string Frame;
    string Wall;
public:

    void SetBase(const string base) { this->Base = base; }
    void SetFrame(const string frame) { this->Frame = frame; }
    void SetWall(const string wall) { this->Wall = wall; }

    string GetMaterial() {
        return
            "[Base:" + Base + ", "
            + "Frame:" + Frame + ", "
            + "Wall:" + Wall
            +"]";
    }
};