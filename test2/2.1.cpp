#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i = 1, j = 2, k;
	k = j;
	j = i;
	i = k;
	printf("%d %d", i, j);
	system("pause");
	return 0;
}