// ConsoleApplication7.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
void cheers(int);
double cube(double);

int main()
{
	cheers(5);
	cout << "Enter a number: ";
	double side;
	cin >> side;
	double volume = cube(side);
	cout << "Volume: " << volume << endl;
    return 0;
}
void cheers(int n)
{
	for (int i = 0; i < n; i++)
		cout << "Cheers!";
	cout << endl;
}
double cube(double i)
{
	return i*i*i;
}

