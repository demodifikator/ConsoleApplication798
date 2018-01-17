// ConsoleApplication3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int Arr_Sum(int[], int);
const short arSize = 8;

int main()
{
	int cookies[arSize] = { 1,2,4,8,16,32,64,128 };
	int sum = Arr_Sum(cookies, arSize);
	cout << "Total cookies eaten: " << sum << endl;
    return 0;
}

int Arr_Sum(int cookies[], int arSize)
{
	int sum = 0;
	for (int i = 0; i < arSize; i++)
		sum += cookies[i];
	return sum;
}