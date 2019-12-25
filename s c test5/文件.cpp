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
	cout << "写入文件" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << "输入第" << i + 1 << "行：";
		cin.getline(letter, 100);
		outfile << letter << endl;	
	}
	cout << "输入内容：";
	cin >> letter;
	outfile << letter << endl;
	outfile.close();	
	outfile.open("myfile", ios::app);
	cout << "输入需要追加内容：";
	cin >> letter;
	outfile << letter << endl;	
	cin.ignore();
	outfile << letter << endl; 
	outfile.close();
	ifstream infile;
	infile.open("myfile", ios::in);
	cout << "读取文件：" << endl;
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
