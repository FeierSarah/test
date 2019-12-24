#include <iostream>
#include <string>
using namespace std;
class MyString
{
public:
	void setString(string b) 
	{
		str = b;
	}
	string getString() 
	{
		return str;
	}
	MyString operator+(const MyString& b) 
	{
		MyString l;
		l.str = this->str + b.str;
		return l;
	}
private:
	string str;
};
int main() 
{
	MyString s1;
	MyString s2;
	MyString s3;
	s1.setString("abc");
	s2.setString("a");
	s3 = s1 + s2;
	cout << s3.getString()<<endl;
	return 0;
}
