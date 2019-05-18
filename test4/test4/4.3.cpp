#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i, n, tmp, sum;
	scanf("%d", &n);
	for (i = 0; i <= 5; i++)
	{
		tmp = 10 * tmp + n;
		sum += tmp;
	}
	printf("%d", sum);
	system("pause");
	return 0;
}
