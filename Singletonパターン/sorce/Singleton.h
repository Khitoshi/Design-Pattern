#pragma once
#include<string>

template <class T>
class Singleton
{
public:

    static T& GetInstance()
    {
        static T instance;
        return instance;
    }

};


class TEST :public Singleton<TEST>
{
private:
    TEST() {};
    ~TEST() {};

public:
    std::string str;

};
