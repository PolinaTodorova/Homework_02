// Task_2_HM_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int const SIZE = 100;

void Array(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "arr[" << i << "]=";
		cin >> arr[i];
		cout << endl;
	}
}

void upside(int* arr, int size)
{
	for (int i = size - 1; i >= 0; i--)
	{
		cout << "arr[" << i << "]=" << arr[i] << endl;
	}
}

int main()
{
	int arr[SIZE], size;
	cout << "size = ";
	cin >> size;
	Array(arr, size);
	upside(arr, size);
    return 0;
}

