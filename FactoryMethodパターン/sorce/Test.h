#pragma once

#include <iostream>

using namespace std;

template<class T>
class Printer
{
private:
    T obj;
public:
    void print() { obj.print(); }
};

template<class T>
class Interface
{
public:
    void print() { static_cast<T&>(this)->print(); }
};

class Test1 :Interface<Test1>
{
public:
    void print() { cout << "Test1" << endl; }
};

class Test2 :Interface<Test1>
{
public:
    void print() { cout << "Test2" << endl; }
};