#include <iostream>
#include <string>
using namespace std;
class Building
{
public:
	Building(int bno, string baddress)
	{
		no = bno;
		address = baddress;
	}
	Building(){}
	void print()
	{
		cout << "建筑楼号：" << no << "  地址：" << address << endl;
	}
protected:
	int no;
	string address;
};
class House :public Building
{
public:
	House(int rrno, double rarea,int bno, string baddress)
		:Building(bno, baddress)
	{
		rno = rrno;
		area = rarea;
	}
	void print()
	{
		cout << "住房楼号：" << no << "  地址：" << address << "房号：" << rno << "  面积：" << area << endl;
	}
private:
	int rno;
	double area;
};
class Office :public Building
{
public:
	Office(string oname, int ophone, int bno, string baddress)
		:Building(bno, baddress)
	{
		rno = oname;
		phone = ophone;
	}
	void print()
	{
		cout << "办公室楼号：" << no << "  地址：" << address << "名字：" << rno << "  电话：" << phone << endl;
	}
private:
	string rno;
	int phone;
};
int main()
{
	House h(7, 120.5, 1, "中心花园");
	h.print();
	Office o("bat", 10000, 3, "街心花园");
	o.print();
	return 0;
}
