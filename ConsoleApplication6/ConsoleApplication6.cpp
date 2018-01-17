// ConsoleApplication6.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int number = 1001;

void FirstChange(void)
{
	cout << "Value of number in FirstChange = " << number << endl;
	number++;
}
void SecondChange(void)
{
	cout << "Value of number in SecondChange = " << number << endl;
	number++;
}

int main()
{
	cout << "Value of number in main = " << number << endl;
	number+=10;
	FirstChange();
	SecondChange();
	cout << number;
    return 0;
}

