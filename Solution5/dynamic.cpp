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
		double* a = read(n); //читаем массив, функция возвращает указатель, n меняется в функции
		write(n, a);
		if (n < 1) 
			break;
			
		double* b = analys(n, a, k); //записываем новый массив
		write(k, b);
		delete [] a; //очищаем память, выделенную под динамические массивы
		delete[] b;
	}
}