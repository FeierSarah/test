#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 }, i, j;
	for (i = 0; i<10; i++)
	{
		if (a[i]>a[i + 1])
			j = a[i];
		else
			j = a[i + 1];
		i++;
	}
	printf("%d", j);
	system("pause");
	return 0;
}

