// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
void n_chars(char, int);

int main()
{
	int times;
	char ch;
	cout << "Enter a character: ";
	cin >> ch;
	while (ch != 'q')
	{
		cout << "How many times to output do you want to: ";
		cin >> times;
		n_chars(ch, times);
		cout << "\nEnter another character or press q for quit: ";
		cin >> ch;
	}
	cout << "The value of times is: " << times;
	cout << "\nBye!";
    return 0;
}

void n_chars(char ch, int times)
{
	while (times-- > 0)
	{
		cout << ch;
	}
}

