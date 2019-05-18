#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main()
{
	srand((unsigned int)time(NULL));
	int r = rand() % 100;
	int n = -1;
	while (n != r)
	{
		scanf("%d", &n);
		if (n>r)
		{
			printf("猜大了\n");
		}
		else if (n<r)
		{
			printf("猜小了\n");
		}
	}
	printf("猜对了\n");
	system("pause");
	return 0;
}
