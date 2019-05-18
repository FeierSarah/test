#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
char *change(char str[])
{
	int i;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] <= 'Z'&&str[i] >= 'A')
			str[i] += 32;
		else if (str[i] <= 'z'&&str[i] >= 'a')
			str[i] -= 32;
		else if (str[i] <= '9'&&str[i] >= '0')
			str[i] = 0;
	}
	return str;
}
int main()
{
	char str[] = "zxcSDF_.123";
	*change(str);
	printf("%s", str);
	system("pause");
	return 0;
}
