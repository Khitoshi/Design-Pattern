#pragma once
#include <unordered_map>
#include <string.h>
#include "Prototype.h"

class Manager {
private:
    std::unordered_map<string, Prototype*> Prototypes;

public:
    Manager() {}

    ~Manager() {
        if (!Prototypes.empty()) {
            Prototypes.clear();
        }
    }

    template <class T>
    void Register(string name, char emoji) { Prototypes[name] = new T(emoji); }

    Prototype* Create(string Name) { return Prototypes[Name]->Clone(); }

};