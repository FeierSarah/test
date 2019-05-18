#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i, j, n;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n - i; j++)
			putchar(' ');
		for (j = 0; j<2 * i - 1; j++)
			putchar('*');
		printf("\n");
	}
	for (i = 1; i <= n - 1; i++)
	{
		for (j = 1; j <= i; j++)
			putchar(' ');
		for (j = 0; j<2 * (n - i) - 1; j++)
			putchar('*');
		printf("\n");
	}
	system("pause");
	return 0;
}