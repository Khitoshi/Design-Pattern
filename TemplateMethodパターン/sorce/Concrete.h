#pragma once
#include<iostream>
#include "Abstract.h"

using namespace std;

class Concrete1 
{

public:
    Concrete1() {};
    ~Concrete1(){}

    void Method1() { cout << "concrete1:Method1" << endl;; }
    void Method2() { cout << "concrete1:Method2" << endl;; }
};

class Concrete2 
{
public:
    Concrete2() {};
    ~Concrete2() {}

    void Method1() { cout << "concrete2:Method1" << endl;; }
    void Method2() { cout << "concrete2:Method2" << endl;; }
};