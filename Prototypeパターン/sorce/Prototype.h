#pragma once

#include <string>
#include <iostream>
using namespace std;

enum Type
{
    PROTOTYPE_1 = 0,
    PROTOTYPE_2,
};


class Prototype
{
protected:
    string name;
    float field;

public:
    Prototype() {};
    Prototype(string name) :name(name) {};

    virtual ~Prototype() {};

    virtual Prototype* Clone() const = 0;

    virtual void Method(float field) {
        this->field = field;
        cout << "name: " << name << "; " << "field" << this->field<<endl;
    }

};

