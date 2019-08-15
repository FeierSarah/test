/*
题目描述
Arbitrage is the use of discrepancies in currency exchange rates to transform one unit of a currency into more than one unit of the same currency. For example suppose that 1 US Dollar buys 0.5 British pound 1 British pound buys 10.0 French francs and 1 French franc buys 0.21 US dollar. Then by converting currencies a clever trader can start with 1 US dollar and buy 0.5 * 10.0 * 0.21 = 1.05 US dollars making a profit of 5 percent. 
Your job is to write a program that takes a list of currency exchange rates as input and then determines whether arbitrage is possible or not.
输入
The input will contain one or more test cases. Om the first line of each test case there is an integer n (1<=n<=30) representing the number of different currencies. The next n lines each contain the name of one currency. Within a name no spaces will appear. The next line contains one integer m representing the length of the table to follow. The last m lines each contain the name ci of a source currency a real number rij which represents the exchange rate from ci to cj and a name cj of the destination currency. Exchanges which do not appear in the table are impossible. 
Test cases are separated from each other by a blank line. Input is terminated by a value of zero (0) for n.
输出
For each test case print one line telling whether arbitrage is possible or not in the format "Case case: Yes" respectively "Case case: No".
*/
#include<iostream>
#include<cstring>
#include<string>
#include<queue>
#include<map>
using namespace std;
const int maxn=1010;
map<string,int> mp;
int n;
struct Money
{
	int to,next;
	double cost;
}edge[maxn];
int head[maxn];
int cnt;
void init()
{
	memset(head,-1,sizeof head);
	cnt=0;
}
void addedge(int u,double cost,int v)
{
	edge[cnt].to=v;
	edge[cnt].cost=cost;
	edge[cnt].next=head[u]; 
	head[u]=cnt++;
}
bool vis[maxn];
int num[maxn];
//int pre[maxn];
double dist[maxn];
bool spfa(int b)
{
	memset(vis,false,sizeof vis);
	memset(num,0,sizeof num);
//	memset(pre,-1,sizeof pre);
	memset(dist,0,sizeof dist);
	int flag=0;
	vis[b]=true;
	dist[b]=1;
	num[b]=1;
	queue<int> que;
	while(!que.empty()) que.pop();
	que.push(b);
	while(!que.empty())
	{
		int u=que.front();
		que.pop();
		vis[u]=false;
		int i;
		for(i=head[u];~i;i=edge[i].next)
		{
			int v=edge[i].to;
			if(dist[v]<dist[u]*edge[i].cost)//改为*和<,表示算乘法，求最大值 
			{
				flag=1;
				dist[v]=dist[u]*edge[i].cost;
//				pre[v]=u;
				if(!vis[v])
				{
					vis[v]=true;
					que.push(v);
					if(++num[v]>n&&dist[v]>1) return true;
				}
			}
		}
	}
	return false;
}
int main()
{
	int m;
	int ans=1;
	while(cin>>n&&n)
	{
		init();
		for(int i=1;i<=n;i++)
		{
			string s;
			cin>>s;
			mp[s]=i;
		}
		cin>>m;
		while(m--)
		{
			string u,v;
			double cost;
			cin>>u>>cost>>v;
			addedge(mp[u],cost,mp[v]);
		}
		int flag=0;
		for(int i=1;i<=n;i++)
		{
			if(spfa(i))
			{
				flag=1;
			}
		}
		if(flag)
		{
			cout<<"Case "<<ans++<<": Yes"<<endl;
		}
		else cout<<"Case "<<ans++<<": No"<<endl;
	}
	return 0;
}
