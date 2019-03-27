#include "function.h"
void fillArray(int* a, int n)
{
	for (size_t i = 0; i < n; i++)
	{
		a[i] = 1 + rand() % 100;
	}
}
void printArray(int* a, int n)
{
	for (size_t i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}
int minArray(int *a, int n)
{
	int min = a[0];
	for (size_t i = 0; i < n; i++)
	{
		if (a[i] < min)
			min = a[i];
	}
	return min;
}
void sortArray(int* a, int n)
{
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = i; j > 0; j--)
		{
			if (a[j] < a[j - 1])
				swap(a[j], a[j - 1]);
		}
	}
}

void fillArray(double* a, int n)
{
	for (size_t i = 0; i < n; i++)
	{
		a[i] = double(1 + rand() % 100) / (rand() % 20 + 1);
	}
}
void printArray(double* a, int n)
{
	for (size_t i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

int minArray(double *a, int n)
{
	double min = a[0];
	for (size_t i = 0; i < n; i++)
	{
		if (a[i] < min)
			min = a[i];
	}
	return min;
}

void sortArray(double* a, int n)
{
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = i; j > 0; j--)
		{
			if (a[j] < a[j - 1])
				swap(a[j], a[j - 1]);
		}
	}
}