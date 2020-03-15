//题目描述
//求给定两个向量的叉乘。
//输入
//输入六个实数 X1Y1Z1X2Y23Z2分别代表两个向量。
//输出
//输出它的叉乘结果以坐标形式。（两位小数）
#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
const double eps = 1e-8;
int sgn(double x){   //判断一个值 是否无限接近于0
	if (fabs(x)<eps)return 0;   //约等于0返回0；
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
	//叉乘 （主要是向量之间）
	Point operator ^ (const Point &b)const{
		return Point(y*b.z - z*b.y,z*b.x - x*b.z,x*b.y - y*b.x);//返回模长 带正负
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
