// Task_4_HW_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
int const ROWS = 4;
int const COLS = 4;
using namespace std;

void Arr(int arr[ROWS][COLS])
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << "arr[" << i << "][" << j << "] = ";
			cin >> arr[i][j];
		}
	}
}

void transp(int arr[ROWS][COLS], int transpArr[ROWS][COLS])
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			transpArr[j][i] = arr[i][j];
		}
	}
}

void printArr(int arr[][COLS])
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}
}

int main()
{

	int arr[ROWS][COLS];
	int arr2[ROWS][COLS];
	Arr(arr);
	cout << endl;
	transp(arr, arr);
	printArr(arr);
	return 0;
}

