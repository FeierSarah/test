#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i = 10, j = 30, k = 20, s;
	if (i<j)
	{
		s = j;
		j = i;
		i = s;
	}
	if (j<k)
	{
		s = k;
		k = j;
		j = s;
	}
	printf("%d %d %d", i, j, k);
	system("pause");
	return 0;
}

