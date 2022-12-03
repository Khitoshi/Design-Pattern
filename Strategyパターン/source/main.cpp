#include <iostream>
#include <string>
using namespace std;

template <class T>
concept is_Comparator = requires(T & obj)
{
    //{obj.Comprator()}->convertible_to<string>;
    obj.Comprator();
};


template <is_Comparator T>
class InterFace
{
public:
    InterFace() {};
    virtual ~InterFace() = default;

    unique_ptr<T> Use() { return make_unique<T>(); }
};


class AgeComparator
{
public:
    AgeComparator(){}
    string Comprator()const {
        return "AgeComparator";
    }
};


class HeightComparator
{
public:
    string Comprator() {
        return "HeightComparator";
    }
};

class WeightComparator
{
public:
    string Comprator() {
        return "WeightComparator";
    }
};


int main()
{
    //InterFace<AgeComparator>* interFace = new InterFace<AgeComparator>();
    auto age = make_unique<InterFace<AgeComparator>>();
    cout << age->Use()->Comprator()<<endl;
    


    return 0;
}