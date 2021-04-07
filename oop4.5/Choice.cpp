#include "Choice.h"
void Choice::Read(Choice& a)
{
	cout << "--- �������� ����� �1 ---" << endl;
	for (int i = 0; i < a.GetSize(); i++)
	{
		cout << "arr[" << i << "] - ? "; cin >> a[i];
	}
	cout << endl;
}

void Choice::Print(const Choice& a)
{
	cout << "--- ����� �1 ---" << endl;
	for (int i = 0; i < a.GetSize(); i++)
		cout << "arr[" << i << "] = " << a[i] << endl;
	cout << endl;
}

void Choice::sort()
{
	double temp = 0;
	for (int i = 0; i < GetSize() - 1; i++) // ������ ������� �������������� �������
	{
		double min = GetArr()[i]; // ����� ���������� ��������
		int imin = i; // �������������� �������
		for (int j = i + 1; j < GetSize(); j++)
			if (min > GetArr()[j])
			{
				min = GetArr()[j];
				imin = j;
			}
		GetArr()[imin] = GetArr()[i]; // ���� ������ ���������� �� �������
		GetArr()[i] = min; // �������� �������������� �������
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
		cout << " �� ��������� " << endl;
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