#pragma once

#include "Prototype.h"
#include<string.h>
#include <unordered_map>

using namespace std;

class ConcretePrototype1:public Prototype
{
private:
    float field;
public:
    ConcretePrototype1(string name, float field) :
        Prototype(name), field(field)
    {}

    Prototype* Clone()const override
    {
        return new ConcretePrototype1(*this);
    }

};


class ConcretePrototype2 :public Prototype
{
private:
    float field;
public:
    ConcretePrototype2(string name, float field) :
        Prototype(name), field(field)
    {}

    Prototype* Clone()const override
    {
        return new ConcretePrototype2(*this);
    }

};


class PrototypeFactory {
private:
    std::unordered_map<Type, Prototype*, std::hash<int>> prototypes;
    //std::unordered_map<Type, Prototype*> prototypes;

public:
    PrototypeFactory() {
        prototypes[Type::PROTOTYPE_1] = new ConcretePrototype1("PROTOTYPE_1 ", 50.f);
        prototypes[Type::PROTOTYPE_2] = new ConcretePrototype2("PROTOTYPE_2 ", 60.f);
    }

    ~PrototypeFactory() {
        delete prototypes[Type::PROTOTYPE_1];
        delete prototypes[Type::PROTOTYPE_2];
    }


    Prototype* CreatePrototype(Type type) {
        return prototypes[type]->Clone();
    }

};