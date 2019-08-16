/*Circle of Students
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
There are nn students standing in a circle in some order.The index of the ii - th student is pipi.It is guaranteed that all indices of students are distinct integers from 11 to nn(i.e.they form a permutation).
Students want to start a round dance.A clockwise round dance can be started if the student 22 comes right after the student 11 in clockwise order(there are no students between them), the student 33 comes right after the student 22 in clockwise order, and so on, and the student nn comes right after the student n?1n?1 in clockwise order.A counterclockwise round dance is almost the same thing ¡ª the only difference is that the student ii should be right after the student i?1i?1 in counterclockwise order(this condition should be met for every ii from 22 to nn).
For example, if the indices of students listed in clockwise order are[2, 3, 4, 5, 1][2, 3, 4, 5, 1], then they can start a clockwise round dance.If the students have indices[3, 2, 1, 4][3, 2, 1, 4] in clockwise order, then they can start a counterclockwise round dance.
Your task is to determine whether it is possible to start a round dance.Note that the students cannot change their positions before starting the dance; they cannot swap or leave the circle, and no other student can enter the circle.
You have to answer qq independent queries.
Input
The first line of the input contains one integer qq(1¡Üq¡Ü2001¡Üq¡Ü200) ¡ª the number of queries.Then qq queries follow.
The first line of the query contains one integer nn(1¡Ün¡Ü2001¡Ün¡Ü200) ¡ª the number of students.
The second line of the query contains a permutation of indices p1, p2, ¡­, pnp1, p2, ¡­, pn(1¡Üpi¡Ün1¡Üpi¡Ün), where pipi is the index of the ii - th student(in clockwise order).It is guaranteed that all pipi are distinct integers from 11 to nn(i.e.they form a permutation).
Output
For each query, print the answer on it.If a round dance can be started with the given order of students, print "YES".Otherwise print "NO".*/
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
int q, n, a[600], c[200], d[200], e[200];
int main()
{
	cin >> q;
	for (int i = 1; i <=q; i++)
	{
		cin>>n;
		for (int m = 0; m < n; m++)
		{
			scanf("%d", &a[m]);
			a[m + 2*n] = a[m + n] = a[m];
		}
		for (int m = 0; m < n; m++)
		{
			if (a[m] == 1)
			{
				if (a[m + n] == a[m + n + 1] - 1)
				{
					for (int b = 0; b < n - 1; b++)
					{
						if (a[m + b + n] == a[m + b + n + 1 ] - 1)
							c[i] = c[i] + 1;
					}
					break;
				}
				else if (a[m + n] == a[m + n - 1] - 1)
				{
					for (int b = 0; b < n - 1; b++)
					{
						if (a[m - b + n ] == a[m - b + n - 1] - 1)
							d[i] = d[i] + 1;
					}
					break;
				}
			}
		}
		if ((c[i] == n - 1) || (d[i] == n - 1)||((n==1)&&(a[0]==1)))
			e[i] = 1;
	}
	for (int i = 1; i <= q; i++)
	{
		if (e[i]==1)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
