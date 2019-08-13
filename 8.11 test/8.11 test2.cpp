//题目描述
//一个储物柜被多隔板给隔开，现在告诉你玩具的坐标，请确定每个隔断内有几个玩具。隔断从左到右依次编号为0~n；

//输入
//第一行输入n，m，x1，y1，x2，y2   n代表的是隔断板的数目，m代表的是玩具的数目，x1y1代表的是储物柜横切面的左上角，x2y2代表的是右下角。
//接下来  n 行输入  每个隔板的底边的横坐标以及顶部的横坐标。
//接下来  m 行输入  每个玩具的位置。
//数据保证不会有玩具在隔断板上。

//输出
//按顺序打印出每个隔断内部的玩具数目。
#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
using namespace std;
const double eps = 1e-8;
const double pi = acos(-1.0);
const double inf = 1e20;
const int maxn = 5e3+10;
int sgn(double x){   
	if (fabs(x)<eps)return 0;   
	if (x<0)return -1;
	else return 1;
}
struct Point{
	int x, y;
	Point(){}
	Point(int _x, int _y){
		x = _x; y = _y;
	}
	void input(){
		scanf("%d%d", &x, &y);
	}
	double operator ^ (const Point &b)const{
		return x*b.y - y*b.x;
	}
	Point operator - (const Point &b)const{
		return Point(x - b.x, y - b.y);
	}
};
struct Line{
		Point s, e;
		Line(){}
		Line(Point _s, Point _e){
			s = _s; e = _e;
		}
		int relation(Point p){
			int c = sgn((p - s) ^ ( p- e));
			if (c<0)return 1;
			else if (c>0) return 2;
			else return 3;
		}
	};
Line l[maxn];
Point p[maxn];
int sum[maxn];
int main()
{
    int n,m;
    double x1,y1,x2,y2;
    int cnt=0;
    memset(sum,0,sizeof(sum));
    scanf("%d%d%lf%lf%lf%lf",&n,&m,&x1,&y1,&x2,&y2);
    for(int i=0;i<n;i++){
        double u,v;
        scanf("%lf%lf",&u,&v);
        l[i].s=Point(u,y1);
        l[i].e=Point(v,y2);
    }
    for(int i=0;i<m;i++){
        double x,y;
        scanf("%lf%lf",&x,&y);
        p[i]=Point(x,y);
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(l[j].relation(p[i])==1){
                sum[j]++;
                continue;
            }
        }
    }
    cnt=sum[0];
    for(int i=1;i<n;i++){
        cnt+=(sum[i]-sum[i-1]);       //cout<<cnt<<endl;
    }  //cout<<m<<" "<<cnt<<endl;
    sum[n]=m-cnt;
    for(int i=0;i<=n;i++){
        if(i>0&&i<n)
        printf("%d: %d\n",i,sum[i]-sum[i-1]);
        else printf("%d: %d\n",i,sum[i]);
    }
    return 0;
}
