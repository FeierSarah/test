//��Ŀ����
//�������������� a �� b�� �� gcd(a b) �� lcm(a b)��
//����
//��һ������ T��
//������ T �У�ÿ������������ a �� b��
//(0 < T < 100��0 < a b �� 10 ^ 7)
//���
//������������Կո�ֿ����ֱ��ʾ gcd(a��b) �� lcm(a��b)��
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
	int n;
	scanf("%d", &n);
	while (n--)
	{
		LL a, b;
		scanf("%lld%lld", &a, &b);
		printf("%lld %lld\n", gcd(a, b), a*b / gcd(a, b));
	}
}
