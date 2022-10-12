#pragma once

#include<string>
#include<vector>
using namespace std;

template <class T>
class Iterator
{
private:
    T obj;
public:
    Iterator() {};
    ~Iterator() {};
    bool HasNext() { return obj.isNext(); }
    T GetNext() { return obj.GetNext(); }
};
