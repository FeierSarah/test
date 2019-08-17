//题目描述
//给定一个数字 n，输出它的所有质因数。
//输入
//第一个数字 T。
//接下来 T 行，每一行都是一个正整数 n。
//(0 < T < 100，1 < n < 108)
//输出
//输出参见样例
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
