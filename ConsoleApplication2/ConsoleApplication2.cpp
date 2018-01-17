// ConsoleApplication2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
long double probability(unsigned numbers, unsigned picks);

int main()
{
	double total, choises;
	cout << "Enter the total number of choises on the game card and the number of picks allowed: ";
	while ((cin >> total >> choises) && choises <= total)
	{
		cout << "You have one chance in ";
		cout << probability(total, choises);
		cout << " of winning.";
		cout << "Enter next two numbers or press q to quit." << endl;
	}
	cout << "Bye!" << endl;
	return 0;
}

long double probability(unsigned numbers, unsigned picks)
{
	long double result = 1.0, n;
	unsigned p;
	for (n = numbers, p = picks; p > 0; n--, p--)
		result = result*n / p;
	return result;
}