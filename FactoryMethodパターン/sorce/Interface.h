#pragma once

template <class T>
class Interface
{
private:
    T* obj;
public:
    /*
    string Method() {
        std::cout << "Method" << endl;
        return obj->Method();
    }
    */
    virtual string Method() = 0;

};