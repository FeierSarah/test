#include <iostream>
using namespace std;
void BubbleSort(int* a, int n) 
{
	for(int i = n; i > 0; i--)
	{
		for(int j = 0; j < i - 1; j++)
		{
			if(a[j] > a[j + 1])
			{
				int tmp =a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
	}
}
int main()
{
	int a[10];
	for(int i = 0; i < 10; i++)
	    cin>>a[i];
	BubbleSort(a, sizeof(a) / sizeof(int));
	for(int i = 0; i < 10; i++)
	    cout<<a[i]<<" ";
	return 0;
}
