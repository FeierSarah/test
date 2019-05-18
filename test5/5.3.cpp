#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char pwd[100] = "123456";
	char input[100] = { 0 };
	int i;
	for (i = 0; i<3; i++)
	{
		scanf("%s5", &input);
		if (!strcmp(pwd, input))
		{
			printf("登陆成功\n");
			system("pause");
			return 0;
		}
		printf("重新输入\n");
	}
	printf("登陆失败\n");
}
