#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int* a, const int size, const int Low, const int High, int i);
void Max(int* a, const int size, int i, int& imax);
void Min(int* a, const int size, int j, int& imin);
void Print(int* a, const int size, int i);
int main()
{
	srand((unsigned)time(NULL)); // ініціалізація генератора випадкових чисел
	const int n = 25;
	int imax;
	imax = n - 1;
	int imin;
	imin = 0;
	int a[n];
	int Low = 5;
	int High = 90;
	Create(a, n, Low, High, 0);
	Min(a, n, 1, imin);
	Max(a, n, 0, imax);
	cout << "Index of max" << setw(5) << "=" << setw(5) << imax << endl;
	cout << "Index of min" << setw(5) << "=" << setw(5) << imin << endl;
	Print(a, n, 0);
	return 0;
}
void Create(int* a, const int size, const int Low, const int High, int i)
{
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
}

void Max(int* a, const int size,int i, int& imax)
{
	int max = a[imax];
	if (max < a[i])
	{
		max = a[i];
		imax = i;
	}
	if (i < size - 2)
		Max(a, size, i + 1, imax);
}
void Min(int* a, const int size, int j, int &imin)
{
	int min = a[imin];
	if (min > a[j])
	{
		min = a[j];
		imin = j;
	}
	if (imin == 0)
	{
		imin = 0;
	}
	if (j < size - 1)
		Min(a, size, j + 1,imin);
}
void Print(int* a, const int size, int i)
{
	cout << "a[" << setw(2) << i << " ] = " << setw(4) << a[i] << endl;
	if (i < size - 1)
		Print(a, size, i + 1);
}

