//���������� a / b���� a / b % 19260817��
//����
//��һ��Ϊ���� T��
//������ T �У�ÿ������������ a �� b��
//(0 < T < 100��0 <= a b <= 2 ^ 32 b != 0)
//��֤ a ���� b ������
//���
//��������
//����޽⣬���"I love shulun!"(������˫����)
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
