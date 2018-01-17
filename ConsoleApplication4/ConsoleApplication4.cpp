// ConsoleApplication4.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	double *pArr = new double[3];
	pArr[0] = 0.2;
	pArr[1] = 0.3;
	pArr[2] = 0.4;
	cout << pArr[0] << endl << pArr[1] << endl << pArr[2] << endl;
	cout << "Firstly pArr[0] is " << pArr[0] << endl;
	pArr += 1;
	cout << "After pArr+=1 pArr[0] is " << pArr[0] << " and pArr[1] is " << pArr[1];
	pArr -= 1;
	cout << "\nAfter pArr-=1 pArr is " << pArr;
	return 0;
}

