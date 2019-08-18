//费马小定理
//题目描述
//给定 n ，求 n 在模 19260817 意义下的乘法逆元。
//输入
//第一行输入正整数 T。
//接下来 T 行，每行一个正整数 n
//(0 < T < 100，1 < n < 2 ^ 32)
//保证 n 与 19260817 互质。
//输出
//输出一个数字，表示 n 在模 19260817 意义下的乘法逆元。
//(PS: 为了保证答案的唯一性，请使用"费马小定理"求乘法逆元。)
#include<iostream>
#include<cstdio>
using namespace std;
typedef long long ll;
ll Pow(ll a,ll b,ll mod)
{
  ll res=1;
  while(b)
  {
    if(b&1) res=(res*a)%mod;
    a=(a*a)%mod;
    b>>=1;
  }
  return res;
}
int p = 19260817;
int main()
{
	int n;
	scanf("%d", &n);
	while(n--)
	{
		ll x;
		scanf("%lld", &x);
		printf("%lld\n", Pow(x,p-2,p));
	}
	return 0;
}
