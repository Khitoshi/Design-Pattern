#pragma once
#include <string>
using namespace std;

template <class T>
concept is_Implementation = requires(T & obj) {
	obj.Method();
};

class ConcreteImplementationA
{
private:
public:
	string Method()const
	{
		return "ConcreteImplementA";
	}
};

class ConcreteImplementationB
{
private:
public:
	string Method()const
	{
		return "ConcreteImplementB";
	}
};


//TODO: is_ImplementationÇ‡èåèÇ…ì¸ÇÍÇΩÇ¢
template <class T>
concept is_Abstraction =
requires(T & obj)
{
	obj.Operation();
};

template <is_Abstraction T>
class Abstraction
{
private:
	T* obj;
public:
	Abstraction(T* t):obj(t) {}
	~Abstraction(){}

	void use() { cout << obj->Operation() << endl; }

};


template <is_Implementation T>
class ExtendedAbstraction{
private:
	T obj;
public:
	ExtendedAbstraction(){}
	~ExtendedAbstraction(){}
	std::string Operation(){
		return "ExtendedAbstraction: Extended operation with:\n" + obj.Method();
	}
};

