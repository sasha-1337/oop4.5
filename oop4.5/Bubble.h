#pragma once
#include "Container.h"
class Bubble : public Container
{
	int size;
	double* arr;
public:
	Bubble(int n = 0)
		: size(n)
	{
		arr = new double[size];
		for (int i = 0; i < size; i++)
			arr[i] = 0;
	}
	~Bubble()
	{
		delete[] arr;
	}

	int GetSize() const { return size; }
	double* GetArr() { return arr; }

	Bubble& operator = (const Bubble& a);
	double& operator [] (const int i);
	const double& operator [] (const int i) const;

	
	virtual void Print(const Bubble& a);
	virtual void Read(Bubble& a);
	virtual void sort();
	virtual void foreach();
	virtual double foreach1(int);
};

