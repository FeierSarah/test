//����С����
//��Ŀ����
//���� n ���� n ��ģ 19260817 �����µĳ˷���Ԫ��
//����
//��һ������������ T��
//������ T �У�ÿ��һ�������� n
//(0 < T < 100��1 < n < 2 ^ 32)
//��֤ n �� 19260817 ���ʡ�
//���
//���һ�����֣���ʾ n ��ģ 19260817 �����µĳ˷���Ԫ��
//(PS: Ϊ�˱�֤�𰸵�Ψһ�ԣ���ʹ��"����С����"��˷���Ԫ��)
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
