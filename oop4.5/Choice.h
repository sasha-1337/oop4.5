#pragma once
#include "Container.h"
class Choice : public Container
{
	int size;
	double* arr;
public:
	Choice(int n = 0)
		: size(n)
	{
		arr = new double[size];
		for (int i = 0; i < size; i++)
			arr[i] = 0;
	}
	~Choice()
	{
		delete[] arr;
	}

	int GetSize() const { return size; }
	double* GetArr() { return arr; }

	Choice& operator = (const Choice& a);
	double& operator [] (const int i);
	const double& operator [] (const int i) const;

	virtual void Print(const Choice& a);
	virtual void Read(Choice& a);
	virtual void sort();
	virtual void foreach();
	virtual double foreach1(int);
};

