#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int judgeLeapYear(int year)
{
	return((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
}
int main()
{
	int year;
	scanf("%4d", &year);
	if (judgeLeapYear(year))
		printf("������\n");
	else
		printf("��������\n");
	system("pause");
	return 0;
}