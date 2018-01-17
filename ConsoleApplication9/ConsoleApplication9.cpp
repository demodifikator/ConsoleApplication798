#include "stdafx.h"
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include "ConsoleApplication9.h"
using namespace std;
struct EmployeeData
{
	int BirthYear;
	float Money;
	char *Name = new char[20], *Surname = new char[30];

};
void CollectData(EmployeeData &ED);
void TextRecord(EmployeeData &ED, FILE*fp);
int main()
{
	setlocale(LC_ALL, "rus");
	FILE *fp;
	char toContinue, end = 'Д';
	fp = fopen("Employees.txt", "wt");

	EmployeeData *ED = new EmployeeData;
	//CollectData(*ED);
	//TextRecord(*ED, fp);
	//printf("Вы хотите провести запись полученных данных в текстовый файл?\n(Д-Да, Н-Нет)");
	//cin >> toContinue;
	while (true)
	{
		CollectData(*ED);
		TextRecord(*ED, fp);
		delete ED;
	
		/*if (toContinue == 'Д')
		{
			TextRecord(*ED, fp);
			continue;
		}
		else if (toContinue == 'Н')
		{
			printf("Продолжить сбор данных?\n(Д-Да, Н-Нет)");
			scanf("%c", &end);
			if (end == 'Д')
				continue;
			else if(end=='Н')
				break;
		}*/
	}
	fclose(fp);
    return 0;
}

void CollectData(EmployeeData &ED)
{
	setlocale(LC_ALL, "rus");
	
	printf("Введите через пробел имя и фамилию работника: ");
	scanf("%s %s", ED.Name, ED.Surname);
	printf("Введите год рождения работника: ");
	scanf("%d", &ED.BirthYear);
	printf("Введите заработную плату работника: ");
	scanf("%f", &ED.Money);
	
}

void TextRecord(EmployeeData &ED, FILE *fp)
{
	setlocale(LC_ALL, "rus");
	int i = 0;
	//fprintf(fp, "Имя\t\tФамилия\t\tГод рождения\t\tЗаработная плата\n");
	fprintf(fp, "%s\t\t%s\t\t%d\t\t%.2f\n", ED.Name, ED.Surname, ED.BirthYear, ED.Money);
	fclose(fp);
	//delete &ED;
}