#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int chengfakoujue(int n)
{
	int i = 1, j, s;
	for (; i <= n; i++)
	{
		j = i;
		while (j >= i&&j <= n)
		{
			s = i*j;
			printf("%d", i);
			printf("*%d", j);
			printf("=%d   ", s);
			j++;
		}
		printf("\n");
	}
}
int main()
{
	int n = 12;
	chengfakoujue(n);
	system("pause");
	return 0;
}
