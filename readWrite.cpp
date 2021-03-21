#include <iostream>
#include <iomanip> 

using namespace std;

void read(int& n, double a[])
{
	setlocale(LC_ALL, "ru");
	cout << "¬ведите размер вашего массива(введите -1 чтобы закончить программу):\n";
	cin >> n;
	if (n < 1)
		return;
	cout << "¬ведите ваш массив:\n";
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

void write(int n, double a[])
{
	cout << fixed << setprecision(1); //вывод одного знака после зап€той
	int p = 0;
	for (int i = n - 1; i >= 0; i--)
		if (a[i] != 0)
		{
			cout << a[i] << " ";
			p++; //считаем количество подход€щих элементов
		}
	if (p == 0)
		cout << "”довлетвор€ющие условию элементы отсутсвуют";
	cout << endl;
}