#include <iostream>
#include "readWrite.cpp"
#include "analys.cpp"

using namespace std;

int main()
{
	int n = 1;
	int k = 0;
	
	while (n > 0)
	{
		double* a = read(n); //������ ������, ������� ���������� ���������, n �������� � �������
		write(n, a);
		if (n < 1) 
			break;
			
		double* b = analys(n, a, k); //���������� ����� ������
		write(k, b);
		delete [] a; //������� ������, ���������� ��� ������������ �������
		delete[] b;
	}
}