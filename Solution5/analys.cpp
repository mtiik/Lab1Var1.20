#include <iostream>

using namespace std;

double* analys(int n, double *a, int &k)
{
	for (int i = n - 1; i > 0; --i)
		if (a[i] < 0 ||
			a[i] - floor(a[i]) != 0) {
			++k;
		}
	double* b = new double[k];
	if (k == 0) {
		return 0;
	}
	k = 0;
	for (int i = n - 1; i > 0; --i)
		if (a[i] < 0 ||
			a[i] - floor(a[i]) != 0) {
			b[k] = a[i];
			++k;
		}
	return b;
}