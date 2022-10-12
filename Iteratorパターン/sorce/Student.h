#pragma once
#include<string>
using namespace std;

class Student
{
private:
    string Name;
    string Sex;
public:
    Student() :Name("") {}

    Student(const string name, const string sex)
    {
        this->Name = name;
        this->Sex = sex;
    }

    virtual ~Student() {};

    string const GetName() { return Name; }
    string const GetSex() { return Sex; }

    void SetName(const string name) { this->Name = name; }
    void SetSex(const string Sex) { this->Sex = Sex; }
};