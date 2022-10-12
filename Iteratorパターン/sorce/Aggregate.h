#pragma once

#include <iostream>
class Iterator;
//template <class T>

class Aggregate
{
public:
    virtual Iterator* iterator() = 0;
    virtual ~Aggregate() {};
};