//题目描述
//给定两个正整数 a 和 b， 求 gcd(a b) 和 lcm(a b)。
//输入
//第一行输入 T。
//接下来 T 行，每行两个正整数 a 和 b。
//(0 < T < 100，0 < a b ≤ 10 ^ 7)
//输出
//输出两个数字以空格分开，分别表示 gcd(a，b) 和 lcm(a，b)。
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
