#include <iostream>

using namespace std;

void analys(int n, double a[], double b[])
{
	for (int i = 0; i < n; i++)
		if (a[i] >= 0 ||
			a[i] - floor(a[i]) == 0)
			b[i] = 0; //если элемент положителен или его дробная часть равна нулю, стираем его
		else
			b[i] = a[i];
}