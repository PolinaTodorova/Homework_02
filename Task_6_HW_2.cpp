// Task_6_HW_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int const n = 10;

int indexFinder(double *pointer, int length) {
	int maxI = 0;
	for (int i = 0; i <length; i++) {
		if (i == 0) {
			if (*pointer == (*pointer + 1) / 2) {
				maxI = i;
			}
		}
		else if (i == length - 1) {
			if (*pointer + i == (*pointer + i - 1) / 2) { maxI = i; }

		}
		else if (i != 0 && i != length - 1) {
			if (*pointer + i == (*pointer + i - 1 + *pointer + i + 1) / 2)
			{
				if (i > maxI) {
					maxI = i;
				}
			}
		}
	}
	if (maxI == 0) { return -1; }
	else return maxI - 1;
}

int main()
{
	int length = n;
	double array[n] = { 1,3,2,4,6,7,8,9,20,50 };
	double *pointer = &array[0];
	cout << indexFinder(pointer, length);
	return 0;
}
