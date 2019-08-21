/*题目描述
有1克、2克、...、n克的砝码各一枚，能称出哪几种重量？总共有几种可能方案？
输入
有多组输入，每组读入一个数字n（0 < n < 1000）
输出
对每组输入输出两个数 称重种数n，总方案数m*/
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int t,s=0,v=1;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		s+=i;
	}
	for(int i=1;i<=t;i++)
	{
		v*=2;
	}
	v=v-1;
	cout<<s<<" "<<v<<endl;
	return 0;
 } 
