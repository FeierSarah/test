#include <iostream>
#include <math.h>
using namespace std;
double const pi = 3.1415926;
class Pool
{
public:
	Pool(int r)
	{
		rad = r;
	}
	double GetLoadPrice()
	{
		return ((rad + 3) *(rad + 3) - rad * rad) * pi * 20;
	}
	double GetSidePrice()
	{
		return  2* rad * pi * 35;
	}
private:
	int rad;
};
int main()
{
	
	int r;
	cout << "输入半径为：";
	cin >> r;
	Pool p1(r);
	cout << "过道造价为：" << p1.GetLoadPrice() << "  栅栏造价为：" << p1.GetSidePrice()
	     << "  总造价为：" << p1.GetLoadPrice() + p1.GetSidePrice() << endl;
	return 0;
}
