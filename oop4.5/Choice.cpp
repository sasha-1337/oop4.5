#include "Choice.h"
void Choice::Read(Choice& a)
{
	cout << "--- Заповніть масив №1 ---" << endl;
	for (int i = 0; i < a.GetSize(); i++)
	{
		cout << "arr[" << i << "] - ? "; cin >> a[i];
	}
	cout << endl;
}

void Choice::Print(const Choice& a)
{
	cout << "--- Масив №1 ---" << endl;
	for (int i = 0; i < a.GetSize(); i++)
		cout << "arr[" << i << "] = " << a[i] << endl;
	cout << endl;
}

void Choice::sort()
{
	double temp = 0;
	for (int i = 0; i < GetSize() - 1; i++) // індекс початку невпорядкованої частини
	{
		double min = GetArr()[i]; // пошук мінімального елемента
		int imin = i; // невпорядкованої частини
		for (int j = i + 1; j < GetSize(); j++)
			if (min > GetArr()[j])
			{
				min = GetArr()[j];
				imin = j;
			}
		GetArr()[imin] = GetArr()[i]; // обмін місцями мінімального та першого
		GetArr()[i] = min; // елементів невпорядкованої частини
	}
}

void Choice::foreach()
{
	for (int i = 0; i < GetSize(); i++)
	{
		if (GetArr()[i] > 0)
		{
			GetArr()[i] = log(GetArr()[i]);
		}
	}
}

double Choice::foreach1(int i)
{
	if (GetArr()[i] > 0)
	{
		return log(GetArr()[i]);
	}
	else
		cout << " Не опреділено " << endl;
}

Choice& Choice::operator = (const Choice& a)
{
	if (&a == this) return *this;
	size = a.size;
	delete[] arr;
	arr = new double[size];
	for (int i = 0; i < size; i++)
		arr[i] = a.arr[i];
	return *this;
}

double& Choice::operator [] (const int i)
{
	return arr[i];
}

const double& Choice::operator [] (const int i) const
{
	return arr[i];
}