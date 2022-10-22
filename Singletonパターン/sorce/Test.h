#pragma once

#include<string>
#include"Singleton.h"

using namespace std;

class TEST1 :public Singleton<TEST1>
{
    friend Singleton<TEST1>;
private:
    TEST1() {};
    ~TEST1() {};
public:
    void SetStr(const string str) { this->str = str; }
    string GetStr()const { return str; }
private:
    std::string str;
};


class TEST2 :public Singleton<TEST2>
{
    friend Singleton<TEST2>;
private:
    TEST2() {};
    ~TEST2() {};
public:
    void SetStr(const string str) { this->str = str; }
    string GetStr()const { return str; }
private:
    std::string str;
};