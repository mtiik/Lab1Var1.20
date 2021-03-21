#include <iostream>
#include <iomanip>

using namespace std;

double* read(int& n) //функция возвращает указатель на динамический массив, n указано ссылкой чтобы передать значение в dynamic.cpp
{
	setlocale(LC_ALL, "ru");
	cout << "Введите размер вашего массива(введите -1 чтобы закончить программу):\n";
	cin >> n;
	if (n < 1)
		return 0;
	double *a = new double[n]; //создаем указатель на динамический массив, который будем возвращать
	cout << "Введите ваш массив:\n";
	for (int i = 0; i < n; i++)
		cin >> a[i];
	return a; 
}

void write(int n, double* a) //передаем размер и указатель на массив
{
	cout << fixed << setprecision(1); //вывод одного знака после запятой
	for (int i = 0; i < n; i++)
		cout << a[i] << ' ';
	cout << '\n';
}