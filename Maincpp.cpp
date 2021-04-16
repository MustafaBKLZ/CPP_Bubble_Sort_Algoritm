#include <stdio.h>
#include <iostream>
using namespace std;

int dizi[] = { 5, 6, 8, 1, 88, 99, 78, 45, 36, 25, 12, 9, 7 };

void swap(int num1, int index1, int num2, int index2)
{
	// burada deðerler parametre olarak tutulduðu içim temp deðiþkenine gerek duymadýk.
	dizi[index1] = num2;
	dizi[index2] = num1;
	
}

void printArray(int dizii[], int size)
{
	for (int i = 0; i < size; i++)
		cout << dizii[i] << " ";
	cout << endl;
}

void bubbleSort(int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = 0; j < n - i - 1; j++)
			if (dizi[j] > dizi[j + 1]) {
				swap(dizi[j], j, dizi[j + 1], (j + 1));
				
				int n = sizeof(dizi) / sizeof(dizi[0]);
				printArray(dizi, n);
			}
}

int main()
{
	int n = sizeof(dizi) / sizeof(dizi[0]);
	bubbleSort(n);
	cout << "Siralanmis Dizi: \n";
	//printArray(dizi, n);
	return 0;
}