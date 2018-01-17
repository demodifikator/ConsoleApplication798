// ConsoleApplication5.cpp: определ€ет точку входа дл€ консольного приложени€.
//

#include "stdafx.h"
#include <iostream>
#include <ctime>
#pragma warning(disable: 4996)

using namespace std;


//void ChangeParams(int*, int*);
//void SwapValues(float*, float*);

int main()
{
	setlocale(LC_ALL, "rus");
	/*int a = 1000, b = 2000;
	cout << "Before using function a = " << a << ", b = " << b << endl;
	ChangeParams(&a, &b);
	cout << "After using function a = " << a << ", b = " << b << endl;
    return 0;*/
	
	/*float c = 54.567, d = 32.33;
	cout << "Value before swaping: c = " << c << ", d = " << d << endl;
	SwapValues(&c, &d);
	cout << "Value after swaping: c = " << c << ", d = " << d << endl;*/

	time_t system_time;
	system_time = time(NULL);
	cout << "“екущее системное врем€: " << ctime(&system_time) << endl;
}

//void ChangeParams(int*a, int*b)
//{
//	*a = 3456;
//	*b = 9887;
//}

//void SwapValues(float*a, float*b) 
//{
//	float temp;
//	temp = *a;
//	*a = *b;
//	*b = temp;
//}