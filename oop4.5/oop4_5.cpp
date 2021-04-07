#include "Bubble.h"
#include "Choice.h"
#include <io.h>
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Bubble mas1(5), mas1_1(5);

	mas1.Read(mas1);  // ���
	mas1.Print(mas1); // ����
	mas1_1 = mas1; // ��������� ������ � ����� ��'���
	cout << "--- C��������� ���������� ---" << endl;
	mas1.sort(); // ���������� ����������
	mas1.Print(mas1);
	cout << "--- K���� � ������� �������� ---" << endl;
	mas1.foreach(); // ����� � ������� ��������
	mas1.Print(mas1);
	int i = 0;
	cout << " ������ ����� ��������: "; cin >> i;
	cout << " arr[" << i << "] = \u221A" << mas1_1.GetArr()[i] << " = " << mas1_1.foreach1(i) << endl << endl;


	Choice mas2(5), mas2_2(5);
	
	mas2.Read(mas2);
	mas2_2 = mas2; // ��������� ������ � ����� ��'���
	mas2.Print(mas2);
	cout << "--- C��������� ������� ������ ---" << endl;
	mas2.sort(); // ���������� ������� ������
	mas2.Print(mas2);
	cout << "--- �������� � ������� �������� ---" << endl;
	mas2.foreach(); // �������� � ������� ��������
	mas2.Print(mas2);
	int l = 0;
	cout << " ������ ����� ��������: "; cin >> l; // �������� �������� � ��������������� ������
	cout << " arr[" << l << "] = log( " << mas2_2.GetArr()[l] << " ) = " << mas2_2.foreach1(l) << endl << endl;

	Container* x = new Bubble(1);
	Container* y = new Choice(1);

	cout << endl << typeid(x).name() << endl;
	cout << typeid(*x).name() << endl;
	cout << typeid(y).name() << endl;
	cout << typeid(*y).name() << endl << endl;

	delete x; delete y;

	Container* arr[2];
	arr[0] = &mas1_1;
	arr[1] = &mas2_2;
	cout << "--- ����� �1 ---" << endl;
	cout << " arr[" << 0 << "] = \u221A" << mas1_1.GetArr()[0] << " = " << arr[0]->foreach1(0) << endl;
	cout << "--- ����� �2 ---" << endl;
	cout << " arr[" << 1 << "] = log( " << mas2_2.GetArr()[1] << " ) = " << arr[1]->foreach1(1) << endl;

	return 0;
}