#include <iostream>
#include <iomanip> 

using namespace std;

void read(int& n, double a[])
{
	setlocale(LC_ALL, "ru");
	cout << "������� ������ ������ �������(������� -1 ����� ��������� ���������):\n";
	cin >> n;
	if (n < 1)
		return;
	cout << "������� ��� ������:\n";
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

void write(int n, double a[])
{
	cout << fixed << setprecision(1); //����� ������ ����� ����� �������
	int p = 0;
	for (int i = n - 1; i >= 0; i--)
		if (a[i] != 0)
		{
			cout << a[i] << " ";
			p++; //������� ���������� ���������� ���������
		}
	if (p == 0)
		cout << "��������������� ������� �������� ����������";
	cout << endl;
}