#include  <iostream>
using namespace std;
const double pi = 3.1415926;
class  Circle
{
public:
	virtual double area() = 0;
	virtual double volume() = 0;
	Circle(int r)
	{
		rad = r;
	}
protected:
	int rad;
};
class Sphere : public Circle
{
public:
	Sphere(int h, int r) :Circle(r)
	{
		height = h;
	}
	double  area()
	{       
		return  2.0 * rad * rad * pi + 2.0 * rad * height * pi;
	} 
	double volume()
	{
		return rad * rad * pi * height;
	}
private:
	int height;
};
class Column : public Circle
{
public:
	Column(int r) :Circle(r) {}
	double  area()
	{
		return 4.0 * rad * rad * pi;
	}
	double volume()
	{
		return 4.0 * rad * rad * rad * pi / 3.0;
	}
};

int main()
{
	Sphere s(2, 3);
	Column c(2);
	cout << "圆柱体表面积" << s.area() << "  圆柱体体积" << s.volume() << endl;
	cout << "球体表面积" << c.area() << "  球体体积" << c.volume() << endl;
	return 0;
}
