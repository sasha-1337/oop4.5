#include "Bubble.h"

void Bubble::Read(Bubble& a)
{
	cout << "--- Заповніть масив №1 ---" << endl;
	for (int i = 0; i < a.GetSize(); i++)
	{
		cout << " arr[" << i << "] - ? "; cin >> a[i];
	}
	cout << endl;
}

void Bubble::Print(const Bubble& a)
{
	cout << "--- Масив №1 ---" << endl;
	for (int i = 0; i < a.GetSize(); i++)
		cout << "arr[" << i << "] = " << a[i] << endl;
	cout << endl;
}

void Bubble::sort()
{
	double temp = 0;
	for (int i = 0; i < GetSize() - 1; i++) // лічильник ітерацій
	{
		for (int j = 0; j < GetSize() - i - 1; j++) // номер поточного елемента
		{
			if (GetArr()[j] > GetArr()[j + 1]) // якщо порушено умову впорядкування
			{
				temp = GetArr()[j];				// 
				GetArr()[j] = GetArr()[j + 1];	// - обмін елементів місцями
				GetArr()[j + 1] = temp;			//
			}
		}
	}
}

void Bubble::foreach()
{
	for (int i = 0; i < GetSize(); i++)
	{

		if (GetArr()[i] >= 0)
		{
			GetArr()[i] = sqrt(GetArr()[i]);
		}
	}
}

double Bubble::foreach1(int i)
{
	if (GetArr()[i] >= 0)
	{
		return sqrt(GetArr()[i]);
	}
	else
		cout << " Не опреділено " << endl;
}

Bubble& Bubble::operator = (const Bubble& a)
{
	if (&a == this) return *this;
	size = a.size;
	delete[] arr;
	arr = new double[size];
	for (int i = 0; i < size; i++)
		arr[i] = a.arr[i];
	return *this;
}

double& Bubble::operator [] (const int i)
{
	return arr[i];
}

const double& Bubble::operator [] (const int i) const
{
	return arr[i];
}