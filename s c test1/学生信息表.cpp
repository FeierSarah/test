#include <iostream>
#include <cstring>
using namespace std;
struct student//����ṹ�� 
{
	int num;
	char name[5];
	int score[3];
	double ave;
}stu[5];
int main() 
{
	int i, j, sum;
	struct student temp;
	for (i = 0; i < 5; i++)
	{
		cout<<"�����"<< i + 1 <<"��ѧ��ѧ�ż�������  ";
		cin >> stu[i].num;
		cin >> stu[i].name;
	    cout<<"�������ſγɼ��� ";
		cin >> stu[i].score[0] >> stu[i].score[1] >> stu[i].score[2];
		sum = 0;
		sum = stu[i].score[0] + stu[i].score[1] + stu[i].score[2];
		stu[i].ave = sum / 3.0;
	}
	for (i = 0; i < 5; i++)
	{
		cout << stu[i].num << "  " << stu[i].name << "  " << stu[i].score[0] << "  "
			<< stu[i].score[1] << "  " << stu[i].score[2] << "  " << stu[i].ave << endl;
	}
	cout << endl;
	for (i = 5; i > 0; i--)
	{
		for (j = 0; j < i - 1; j++)
		{
			if (stu[j].ave>stu[j + 1].ave)
			{
				temp = stu[j];
				stu[j] = stu[j + 1];
				stu[j + 1] = temp;
			}
		}
	}
	for (i = 0; i < 5; i++)
	{
		cout << stu[i].num << "  " << stu[i].name << "  " << stu[i].score[0] << "  "
			<< stu[i].score[1] << "  " << stu[i].score[2] << "  " << stu[i].ave;
		cout << endl;
	}
	cout << endl;
	int flag;
	cout << "����Ҫ���ҵ�ѧ�ţ� ";
	cin >> flag;
	for (i = 0; i < 5; i++)
	{
		if (stu[i].num == flag)
		{
			cout << stu[i].num << "  " << stu[i].name << "  " << stu[i].score[0] << "  "
				 << stu[i].score[1] << "  " << stu[i].score[2] << "  " << stu[i].ave;
		}
	}
	return 0;
}

