#pragma once

template <class T>
class Abstract
{
private:
    T obj;
public:
    void TemplateMethod() 
    {
            obj.Method1();
            obj.Method2();
    };
};