#include <iostream>
using namespace std;
int main()
{
	int num = 100;
	cout<<"2 ";
	for(int i = 3; i <= 100; i++)
	{
		int count = 0;
		for(int j = 2; j < i; j++)
		{
			if(i % j != 0)
			{	
			    count++;
			    if(count == i - 2)
			        cout<<i<<" ";
			}    
		}
	}
	return 0;
}
