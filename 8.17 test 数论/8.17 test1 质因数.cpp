//��Ŀ����
//����һ������ n���������������������
//����
//��һ������ T��
//������ T �У�ÿһ�ж���һ�������� n��
//(0 < T < 100��1 < n < 108)
//���
//����μ�����
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
typedef long long LL;
int main()
{
	int n;
	LL x;
	scanf("%d", &n);
	for (int j = 1; j <= n; j++)
	{
		scanf("%lld", &x);
		printf("%lld =",x);
		for (int i = 2; i <= x; i++)
		{
			if (x%i == 0)
			{
				int cnt = 0;
				while(x%i == 0)
				{
					x/= i;
					cnt++;
				}
				if(cnt==1)
				printf(" %lld",i);
				else
				printf(" %lld^%d",i,cnt);
				if(i<=x)
				printf(" *");
				else
			    printf("\n");	
			}
		}
	}
    return 0;
}
