#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i, j, k, n;
	for (n = 0; n<1000; n++)
	{
		i = n / 100;
		j = n / 10 % 10;
		k = n % 10;
		if (n == i*i*i + j*j*j + k*k*k)
		{
			printf("%d  ", n);
		}
	}
	system("pause");
	return 0;
}
//������12321��������������ͷβ�Ƚ�
//������� 
//  int i;
//	int n,tmp,sum=0;
//	scanf("%d",&n);
//	for(i=n;i;i/=10)//��λ���� 
//	{
//	tmp=i%10;
//	sum=sum*10+tmp; 
//	 } 
//	printf("%d",sum);