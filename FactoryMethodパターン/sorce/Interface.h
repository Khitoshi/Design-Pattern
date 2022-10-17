#pragma once

template <class T>
class Interface
{
private:
    T* obj;
public:
    string Method() {
        std::cout << "Method" << endl;
        //return static_cast<T*> (this)->Method();
        return static_cast<T&> (this)->Method();
    }
};

