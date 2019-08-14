//题目描述
//给你三个点，abc 求出三个点所形成三角形的面积，如果三点不构成三角形输出“You're so funny”，否则输出面积保留两位小数。
//输入
//三个点   XaYaXbYbXcYc;
//输出
//面积或者不成立。 
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
using namespace std;

const double eps=1e-8;
const int maxp=1010;
int sgn(double x){
	if(fabs(x)<eps)return 0;
	if(x<0)return -1;
	else return 1;
	} 
struct Point{
	double x,y;
    Point(){};
    Point(double _x,double _y){
        x=_x,y=_y;
    }
    void input(){
        scanf("%lf%lf",&x,&y);
    }
	Point operator - (const Point &b)const {
        return   Point (x-b.x,y-b.y);
    }
    double  operator ^ (const Point &b)const {
        return x*b.y-y*b.x;
    }
};
int main(){
	Point p[3];
	double area;
	for (int i = 0; i<3; i++){
		cin >> p[i].x >> p[i].y;
	}
	Point a,b;
	a=Point(p[0]-p[1]);
	b=Point(p[2]-p[1]);
	area=fabs(a^b)/2;
	if(sgn(a^b)==0)
		printf("You're so funny");
	else
		printf("%.2lf", area);
	return 0;
}
//注意
//1.叉乘有正负，须带绝对值
//2.需要考虑叉乘时的精度问题 
