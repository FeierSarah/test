//��Ŀ����
//�������������� n�� m��
//��� nm ��������������
//����
//��һ������ T��
//������ T �У�ÿһ�ж������������� n �� m��
//(0 < n < 100��1 < n < 100000�� 0 < m < 10000)
//���
//����μ�������
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
	int y;
	scanf("%d", &n);
	for (int j = 1; j <= n; j++)
	{
		scanf("%lld%d", &x, &y);
		{
			for (int i = 2; i <= x; i++)
			{
				if (x%i == 0)
				{
					int cnt = 0;
					while (x%i == 0)
					{
						x /= i;
						cnt++;
					}
					cnt=cnt*y;
					if (cnt == 1)
						printf("%lld", i);
					else
						printf("%lld^%d", i, cnt);
					if (i <= x)
						printf(" * ");
					else
						printf("\n");
				}
			}
		}
	}
	return 0;
}
