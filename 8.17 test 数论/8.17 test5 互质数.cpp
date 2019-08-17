//欧拉函数
//题目描述
//"我找朋友不在乎他有没有钱，反正都没我有钱"。
//所以我找朋友，从来不以钱的多少作为标准。
//我更看重的是幸运数字，你要知道我的幸运数字是 n
//假设你的幸运数字是 a。
//如果 gcd(n a) = 1，那么我们就是兄弟。
//但是如果 gcd(n a) ≠ 1，那对不起，请一边去。
//现在有幸运数字从 1 ~n - 1 的人想和我交朋友。
//请问我能有多少个朋友呢。
//输入
//给定一个正整数 T。
//接下来 T 行，每行一个数字 n。
//(0 < T < 1000，1 < n < 108)
//输出
//每行输出一个数字，表示能和我做朋友的人数。
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
typedef long long LL;
int main() 
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		LL x;
		scanf("%lld",&x);
		LL phi=x;
		for(int pi=2;pi<=x;pi++)
		{
		    if(x%pi==0)
		    {
		    	phi=phi/pi*(pi-1);
		    	while(x%pi==0)
		    	{
		    		x/=pi;
				}
		    }
		}
		printf("%lld\n",phi);
	 }
	 return 0; 
}
 
