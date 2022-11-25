#include <iostream>
#include <string>
using namespace std;





template <class T>
concept is_Comparator = requires(T & obj)
{
    obj.Comprator();
};


template <is_Comparator T>
class InterFace
{
public:
    InterFace() {};
    ~InterFace(){};

    void Use() { cout << obj.Comprator() << endl; }

private:
    T obj;
};


class AgeComparator
{
public:
    string Comprator() {
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
    InterFace<AgeComparator>* interFace = new InterFace<AgeComparator>();
    interFace->Use();

    delete interFace;

    return 0;
}