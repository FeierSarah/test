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
			printf("��½�ɹ�\n");
			system("pause");
			return 0;
		}
		printf("��������\n");
	}
	printf("��½ʧ��\n");
}
