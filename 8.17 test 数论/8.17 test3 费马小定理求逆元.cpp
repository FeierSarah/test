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
typedef long long LL;
int p = 19260817;
int main()
{
	int n;
	scanf("%d", &n);
	while(n--)
	{
		LL x;
		int X;
		scanf("%lld", &x);
		X=(x%p);
		for (int i = 1; i < p - 2; i++)
		{
			x *=X;
			x = (x%p);
		}
		printf("%lld\n", x);
	}
	return 0;
}
