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
	char toContinue, end = '�';
	fp = fopen("Employees.txt", "wt");

	EmployeeData *ED = new EmployeeData;
	//CollectData(*ED);
	//TextRecord(*ED, fp);
	//printf("�� ������ �������� ������ ���������� ������ � ��������� ����?\n(�-��, �-���)");
	//cin >> toContinue;
	while (true)
	{
		CollectData(*ED);
		TextRecord(*ED, fp);
		delete ED;
	
		/*if (toContinue == '�')
		{
			TextRecord(*ED, fp);
			continue;
		}
		else if (toContinue == '�')
		{
			printf("���������� ���� ������?\n(�-��, �-���)");
			scanf("%c", &end);
			if (end == '�')
				continue;
			else if(end=='�')
				break;
		}*/
	}
	fclose(fp);
    return 0;
}

void CollectData(EmployeeData &ED)
{
	setlocale(LC_ALL, "rus");
	
	printf("������� ����� ������ ��� � ������� ���������: ");
	scanf("%s %s", ED.Name, ED.Surname);
	printf("������� ��� �������� ���������: ");
	scanf("%d", &ED.BirthYear);
	printf("������� ���������� ����� ���������: ");
	scanf("%f", &ED.Money);
	
}

void TextRecord(EmployeeData &ED, FILE *fp)
{
	setlocale(LC_ALL, "rus");
	int i = 0;
	//fprintf(fp, "���\t\t�������\t\t��� ��������\t\t���������� �����\n");
	fprintf(fp, "%s\t\t%s\t\t%d\t\t%.2f\n", ED.Name, ED.Surname, ED.BirthYear, ED.Money);
	fclose(fp);
	//delete &ED;
}