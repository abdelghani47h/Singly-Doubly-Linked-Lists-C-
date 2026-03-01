#pragma once
#include <iostream>

using namespace std;

template <class T>
class clsNode
{
	T _value;
	clsNode <T>* _next;

public:


	clsNode(T val)
	{
		_value = val;
		_next = nullptr;
	}

	T Value()
	{
		return _value;
	}

	void SetValue(T val)
	{
		_value = val;
	}

	_declspec(property(put = SetValue, get = Value))   T value;


	clsNode <T>* GetNext()
	{
		return _next;
	}

	void SetNext(clsNode<T>* node)
	{
		_next = node;
	}

	_declspec(property(put = SetNext, get = GetNext)) clsNode<T>* next;

};

