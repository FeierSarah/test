//��Ŀ����
//���� n �������� ai��
//�� gcd(ai) �� lcm(ai)��
//����
//��һ������ T��
//ÿ��������������С�
//��һ���������� n��
//�ڶ������� n �������� ai��
//(0 < T < 100��1 < n < 100�� 0 < ai < 10 ^ 7)
//���
//������������Կո�ֿ����ֱ��ʾ gcd(ai) �� lcm(ai)��
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
typedef long long LL;
LL gcd(LL a, LL b)
{
	LL chushu, beichushu, yushu;
	chushu = min(a, b);
	beichushu = max(a, b);
	yushu = beichushu%chushu;
	while (yushu != 0)
	{
		beichushu = chushu;
		chushu = yushu;
		yushu = beichushu%chushu;
	}
	return chushu;
}
int main()
{
	int T, n;
	LL a, b;
	LL c=1;
	scanf("%d", &T);
	while (T--)
	{
		scanf("%d", &n);
		for (int i = 0; i < n; i++)
		{
			scanf("%lld", &a);
			if (i)
			{
				c = c*a/gcd(c,a);
				b = gcd(a, b);
			}
			else
			{
				b = a;
				c = a;
			}
		}
		printf("%lld %lld\n", b, c);
	}
	return 0;
}
