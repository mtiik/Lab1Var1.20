#include <iostream>
#include <iomanip>
#include "analys.cpp"
#include "readWrite.cpp"

using namespace std;

double a[100005]; 
double b[100005]; 

int main()
{
	int n = 1;

	while (n > 0)
	{
		read(n, a);

		if (n < 1)
			break;

		analys(n, a, b);

		write(n, b);
	}

	return 0;
}