#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int prime(int n)
{
	int m;
	for (m = 2; m <= n / 2; m++)
	{
		if (n%m == 0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int n;
	scanf("%d", &n);
	if (prime(n))
		printf("������\n");
	else
		printf("��������\n");
}