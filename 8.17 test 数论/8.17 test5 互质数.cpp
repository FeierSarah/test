//ŷ������
//��Ŀ����
//"�������Ѳ��ں�����û��Ǯ��������û����Ǯ"��
//�����������ѣ���������Ǯ�Ķ�����Ϊ��׼��
//�Ҹ����ص����������֣���Ҫ֪���ҵ����������� n
//����������������� a��
//��� gcd(n a) = 1����ô���Ǿ����ֵܡ�
//������� gcd(n a) �� 1���ǶԲ�����һ��ȥ��
//�������������ִ� 1 ~n - 1 ��������ҽ����ѡ�
//���������ж��ٸ������ء�
//����
//����һ�������� T��
//������ T �У�ÿ��һ������ n��
//(0 < T < 1000��1 < n < 108)
//���
//ÿ�����һ�����֣���ʾ�ܺ��������ѵ�������
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
 
