#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int change(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
int main()
{
	int a = 1, b = 2;
	change(&a, &b);
	printf("%d %d", a, b);
	system("pause");
	return 0;
}
