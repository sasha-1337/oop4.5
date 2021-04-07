#pragma once
#include <iostream>
#include <Windows.h>
#include <cmath>
#include <fcntl.h>

using namespace std;

class Container
{
public:
	virtual void sort() = 0;
	virtual void foreach() = 0;
	virtual double foreach1(int) = 0;
	virtual void Print(const Container& a) {};
	virtual void Read(Container& a) {};
};

