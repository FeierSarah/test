//��Ŀ����
//��������������Ĳ�ˡ�
//����
//��������ʵ�� X1Y1Z1X2Y23Z2�ֱ��������������
//���
//������Ĳ�˽����������ʽ������λС����
#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
const double eps = 1e-8;
int sgn(double x){   //�ж�һ��ֵ �Ƿ����޽ӽ���0
	if (fabs(x)<eps)return 0;   //Լ����0����0��
	if (x<0)return -1;
	else return 1;
}
struct Point{
	double x, y, z;
	Point(){}
	Point(double _x, double _y, double _z){
		x = _x; y = _y; z = _z;
	}
	void input(){
		scanf("%lf %lf %lf", &x, &y, &z);
	}
	Point operator - (const Point &b)const{
		return Point(x - b.x, y - b.y,z-b.z);
	}
	//��� ����Ҫ������֮�䣩
	Point operator ^ (const Point &b)const{
		return Point(y*b.z - z*b.y,z*b.x - x*b.z,x*b.y - y*b.x);//����ģ�� ������
	}
};
int main()
{
	Point a[3];
	Point b, c;
	a[0] = Point(0, 0, 0);
	for (int i = 1; i<3; i++)
		a[i].input();
	b = a[2] - a[0];
	c = a[1] - a[0];
	printf("%.2lf %.2lf %.2lf", (c^b).x, (c^b).y, (c^b).z);
	return 0;
}
