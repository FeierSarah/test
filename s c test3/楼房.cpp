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
		cout << "����¥�ţ�" << no << "  ��ַ��" << address << endl;
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
		cout << "ס��¥�ţ�" << no << "  ��ַ��" << address << "���ţ�" << rno << "  �����" << area << endl;
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
		cout << "�칫��¥�ţ�" << no << "  ��ַ��" << address << "���֣�" << rno << "  �绰��" << phone << endl;
	}
private:
	string rno;
	int phone;
};
int main()
{
	House h(7, 120.5, 1, "���Ļ�԰");
	h.print();
	Office o("bat", 10000, 3, "���Ļ�԰");
	o.print();
	return 0;
}
