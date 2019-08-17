//题目描述
//给定两个正整数 n， m。
//输出 nm 的所有质因数。
//输入
//第一个数字 T。
//接下来 T 行，每一行都是两个正整数 n 和 m。
//(0 < n < 100，1 < n < 100000， 0 < m < 10000)
//输出
//输出参见样例。
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
