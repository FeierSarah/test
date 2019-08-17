//给定有理数 a / b，求 a / b % 19260817。
//输入
//第一行为整数 T。
//接下来 T 行，每行两个正整数 a 和 b。
//(0 < T < 100，0 <= a b <= 2 ^ 32 b != 0)
//保证 a 不被 b 整除。
//输出
//输出结果。
//如果无解，输出"I love shulun!"(不包含双引号)
#include<iostream>
using namespace std;
typedef long long ll;
const int p=19260817;
ll gcd(ll a,ll b)
{
	return b==0?a:gcd(b,a%b);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll a,b;
		cin>>a>>b;
		if(gcd(b,p)!=1)
		{
			cout<<"I love shulun!"<<endl;
		}
		else
		{
			ll result=1;
			int x=p-2;
			while(x--)
			{
				result=((b%p)*(result%p))%p;
			}
			cout<<(a*result)%p<<endl;
		}
	}
	return 0;
}
