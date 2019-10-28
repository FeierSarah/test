#include <iostream>
#include <string>
using namespace std;
int sno = 0;
class Student{
    public:
        const static int students = 10;
        const static int classes = 8;
        void SetName(int sno, string** sname)
	    {
	    	string name;
	    	cin>>name;
	  	    for(int i = 0; i < name.length(); i++)
	  	    {
	  	    	sname[sno][i] = name.at(i);
			} 
	    }
	    void SetGrade(int cno, int sno, int** sgrade)
	    {
	    	int grade;
	    	cin>>grade;
	    	sgrade[sno][cno] = grade;
		}
	    void GetName(string** sname, int sno)
	    {
	    	cout<<"第"<<sno<<"位同学名字：";
	    	for(int i = 0; i < sizeof(sname[sno]); i++)
	  	    {
	  	    	cout<<sname[sno][i];
			} 
			cout<<" ";
	    }
	    void GetGrade(int cno, int sno, int** sgrade)
	    {
	    	cout<<"科目"<<cno<<"成绩："<<sgrade[sno][cno]<<" "; 
		}
	private:
	    int cno, sno, grade;
	    string name;
	    char **sname;
	    int **sgrade;
};
void test()
{
	int choose;
	int grade, cno;
	    string name;
	    char **sname;
	    int **sgrade;
	if(choose == 0)
	{
		Student::SetName(sno, sname);
	    sno++;
		for(int i = 0; i < 8; i++)
		{
			Student::SetGrade(i, sno, *sgrade);
		}		
	}
	if(choose == 1)
	{
		for(int i = 0; i < sno; i++)
		{
			Student::GetName(*sname, sno);
			for(int cno = 0; cno < 8; i++)
		    {
		    	Student::GetGrade(cno, sno, *sgrade);
	    	}
		}
	}
	if(choose == 2)
	{
		int sno1, cno1;
		cin>>sno1>>cno1;
	    if((sno1 < sno) && (cno1 < 8))
		  	Student::GetGrade(cno, sno, *sgrade);
    }
}
int main()
{
	return 0;
}
