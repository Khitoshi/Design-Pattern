#pragma once

template <class T>
class Cloneable
{
public:
	Cloneable() {};
	virtual ~Cloneable() {};

	T Clone() { return new T(static_cast<T&>(*this)); }
};