/*��Ŀ����
��1�ˡ�2�ˡ�...��n�˵������һö���ܳƳ��ļ����������ܹ��м��ֿ��ܷ�����
����
�ж������룬ÿ�����һ������n��0 < n < 1000��
���
��ÿ��������������� ��������n���ܷ�����m*/
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
