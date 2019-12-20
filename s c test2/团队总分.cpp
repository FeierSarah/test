#include <iostream>
using namespace std;
static int tgrade;
class Stu
{
public:
	Stu(int sgrade, const int sno, char* sname)
	{
		grade = sgrade;
		no = sno;
		name = sname;
	}
	int GetTgrade()
	{
		tgrade += grade;
		return tgrade;
	}
	void Print()
	{
		cout << name << " 准考证号为：" << no << "  成绩为：" << grade << endl;
	}
private:
	int grade;
	int no;
	char* name;
};
int main()
{
	Stu u1(90, 1, "aa"), u2(95, 2, "bb"), u3(92, 3, "cc");
	u1.Print();
	u2.Print();
	u3.Print();
	u1.GetTgrade();
	u2.GetTgrade();
	u3.GetTgrade();
	cout << tgrade << endl;
	return 0;
}
