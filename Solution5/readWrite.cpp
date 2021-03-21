#include <iostream>
#include <iomanip>

using namespace std;

double* read(int& n) //������� ���������� ��������� �� ������������ ������, n ������� ������� ����� �������� �������� � dynamic.cpp
{
	setlocale(LC_ALL, "ru");
	cout << "������� ������ ������ �������(������� -1 ����� ��������� ���������):\n";
	cin >> n;
	if (n < 1)
		return 0;
	double *a = new double[n]; //������� ��������� �� ������������ ������, ������� ����� ����������
	cout << "������� ��� ������:\n";
	for (int i = 0; i < n; i++)
		cin >> a[i];
	return a; 
}

void write(int n, double* a) //�������� ������ � ��������� �� ������
{
	cout << fixed << setprecision(1); //����� ������ ����� ����� �������
	for (int i = 0; i < n; i++)
		cout << a[i] << ' ';
	cout << '\n';
}