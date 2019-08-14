//题目描述
//璟哥哥从小想成为天文学家，这是个伟大的梦想。
//为了实现这个梦想，璟哥哥天天都要观测星星。璟哥哥家里很有钱，所以买了一个精密的天文望远镜来专门观测各种星星。
//这个天文望远镜可以算出被观测星星的准确坐标(x，y，z)，星星所处的位置当然是三维的。
//但是这个天文望远镜非常耗电，所以一天只能观测4颗星星。
//璟哥哥查阅资料发现，如果4颗星星处于一个平面上，他们就是同一个星系里的恒星。
//但是璟哥哥很笨，你能告诉他每天观测的4颗星星是否处在同一个星系吗？
//输入
//测试数据的第一行输入为T（0 <= T <= 100），表示测试样例的数量。
//对于每一个测试样例，都有4行。
//每一行包含3个整数 x，y，z，表示一个星星的坐标(-1000 <= x，y，z <= 1000)。
//输出
//输出的格式为"Day #x: "(不包含引号)，x为相应的样例编号。
//如果4颗星星处于同一个星系，输出"Yes"，否则输出"No"。
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
