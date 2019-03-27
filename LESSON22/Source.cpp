#define INTEGER_OLZHAS
#define DOUBLE_OLZHAS
#include "function.h"
#define N 5

int main()
{
	int* a;
	double *d;
	int n;
	cin >> n;
#if N>1
	a = new int[n];
	fill(a, n);
	print(a, n);
	delete[] a;


#elif N==0
	d = new double[n];
	fill(d, n);
	print(d, n);
#endif
	system("pause");
	return 0;
}