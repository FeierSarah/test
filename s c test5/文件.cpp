#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class fileoperate
{
public:
	fileoperate();
};
fileoperate::fileoperate()
{
	char letter[20];
	fstream outfile;
	outfile.open("myfile", ios::out);
	cout << "д���ļ�" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << "�����" << i + 1 << "�У�";
		cin.getline(letter, 100);
		outfile << letter << endl;	
	}
	cout << "�������ݣ�";
	cin >> letter;
	outfile << letter << endl;
	outfile.close();	
	outfile.open("myfile", ios::app);
	cout << "������Ҫ׷�����ݣ�";
	cin >> letter;
	outfile << letter << endl;	
	cin.ignore();
	outfile << letter << endl; 
	outfile.close();
	ifstream infile;
	infile.open("myfile", ios::in);
	cout << "��ȡ�ļ���" << endl;
	for (int i = 0; i < 5; i++)
	{
		infile >> letter;
		cout << letter << endl;
	}
	infile.close();
}

int main()
{
	fileoperate fiop;
	system("pause");
	return 0;
}
