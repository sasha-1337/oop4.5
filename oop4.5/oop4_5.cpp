#include "Bubble.h"
#include "Choice.h"
#include <io.h>
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Bubble mas1(5), mas1_1(5);

	mas1.Read(mas1);  // ввід
	mas1.Print(mas1); // вивід
	mas1_1 = mas1; // копіювання масиву в інший об'єкт
	cout << "--- Cортування бульбашкою ---" << endl;
	mas1.sort(); // сортування бульбашкою
	mas1.Print(mas1);
	cout << "--- Kорінь з кожного елементу ---" << endl;
	mas1.foreach(); // корінь з кожного елементу
	mas1.Print(mas1);
	int i = 0;
	cout << " Введіть номер елемента: "; cin >> i;
	cout << " arr[" << i << "] = \u221A" << mas1_1.GetArr()[i] << " = " << mas1_1.foreach1(i) << endl << endl;


	Choice mas2(5), mas2_2(5);
	
	mas2.Read(mas2);
	mas2_2 = mas2; // копіювання масиву в інший об'єкт
	mas2.Print(mas2);
	cout << "--- Cортування методом вибору ---" << endl;
	mas2.sort(); // сортування методом вибору
	mas2.Print(mas2);
	cout << "--- Логарифм з кожного елементу ---" << endl;
	mas2.foreach(); // логарифм з кожного елементу
	mas2.Print(mas2);
	int l = 0;
	cout << " Введіть номер елемента: "; cin >> l; // значення береться з невідсортованого масиву
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
	cout << "--- Масив №1 ---" << endl;
	cout << " arr[" << 0 << "] = \u221A" << mas1_1.GetArr()[0] << " = " << arr[0]->foreach1(0) << endl;
	cout << "--- Масив №2 ---" << endl;
	cout << " arr[" << 1 << "] = log( " << mas2_2.GetArr()[1] << " ) = " << arr[1]->foreach1(1) << endl;

	return 0;
}