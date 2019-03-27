#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
#define fill fillArray
#define print printArray
#ifdef INTEGER_OLZHAS
void fillArray(int* a, int n);
void printArray(int* a, int n);
int minArray(int *a, int n);
void sortArray(int* a, int n);
#endif // INTEGER_OLZHAS


#ifdef DOUBLE_OLZHAS
void fillArray(double* a, int n);
void printArray(double* a, int n);
int minArray(double *a, int n);
void sortArray(double* a, int n);
#endif // DOUBLE_OLZHAS