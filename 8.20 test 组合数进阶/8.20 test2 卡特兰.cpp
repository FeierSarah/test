#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int n,ca[100],N;
	while(cin>>n)
	{ 
	int v=1;
	for(int i=1;i<=n;i++)
	{
		ca[0]=1;
		ca[i]=ca[i-1]*(4*i-2)/(i+1);
	}
	for(int i=1;i<=n;i++)
	{
		v*=i;
	}
	N=v*v*ca[n];
	cout<<N<<endl;
}
	return 0;
 }  
