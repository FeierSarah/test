//��Ŀ����
//�Z����С���Ϊ����ѧ�ң����Ǹ�ΰ������롣
//Ϊ��ʵ��������룬�Z������춼Ҫ�۲����ǡ��Z���������Ǯ����������һ�����ܵ�������Զ����ר�Ź۲�������ǡ�
//���������Զ������������۲����ǵ�׼ȷ����(x��y��z)������������λ�õ�Ȼ����ά�ġ�
//�������������Զ���ǳ��ĵ磬����һ��ֻ�ܹ۲�4�����ǡ�
//�Z���������Ϸ��֣����4�����Ǵ���һ��ƽ���ϣ����Ǿ���ͬһ����ϵ��ĺ��ǡ�
//���ǭZ���ܱ������ܸ�����ÿ��۲��4�������Ƿ���ͬһ����ϵ��
//����
//�������ݵĵ�һ������ΪT��0 <= T <= 100������ʾ����������������
//����ÿһ����������������4�С�
//ÿһ�а���3������ x��y��z����ʾһ�����ǵ�����(-1000 <= x��y��z <= 1000)��
//���
//����ĸ�ʽΪ"Day #x: "(����������)��xΪ��Ӧ��������š�
//���4�����Ǵ���ͬһ����ϵ�����"Yes"���������"No"��
#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
struct Point{
	int x, y, z;
	Point(){}
	Point(int _x, int _y, int _z){
		x = _x; y = _y; z = _z;
	}
	void input(){
		scanf("%d %d %d", &x, &y, &z);
	}
	Point operator - (const Point &b)const{
		return Point(x - b.x, y - b.y,z-b.z);
	}
	Point operator ^ (const Point &b)const{
		return Point(y*b.z - z*b.y,z*b.x - x*b.z,x*b.y - y*b.x);
	}
	int operator * (const Point &b)const{
		return (x*b.x + y*b.y+ z*b.z);
	}
};

int main()
{
	int T, t;
	cin >> T;
	Point a[100], b[100], c[100], d[100], p[100], q[100];
	for (t = 0; t < T; t++)
	{
		a[t].input();
		b[t].input();
		c[t].input();
		d[t].input();
		p[t] = a[t] - b[t];
		q[t] = a[t] - c[t];
	}
	for (t = 0; t < T; t++)
	{
		if ((p[t] ^ q[t])*(a[t] - d[t]))
			printf("Day #%d: No\n", T);
		else
			printf("Day #%d: Yes\n", T);
	}
	return 0;
}
