#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int k = 1, s = 1, i, j;
	scanf("%d %d", &i, &j);
	for (k = 1; k <= i&&k <= j; k++)
	{
		if (i%k == 0 && j%k == 0)
			s = k;
	}
	printf("%d", s);
	system("pause");
	return 0;
}