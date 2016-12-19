// Task_1_HW_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
void swap(int* pointer1, int* pointer2)
{
	int temp = *pointer1;
	*pointer1 = *pointer2;
	*pointer2 = temp;
}
int main()
{
	int x = 1, y = 2;
	swap(x, y);
	cout << x << endl;
	cout << y << endl;
    return 0;
}

