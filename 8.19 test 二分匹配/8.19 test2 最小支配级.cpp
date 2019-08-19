/*题目描述
边边喜欢玩电脑游戏，特别是战略游戏，但有时他无法找到解决方案，速度不够快，
那么他很伤心。现在，他有以下的问题。他必须捍卫一个中世纪的城市，城市间的所
有道路刚好形成了一颗以城市为结点以城市间的路为边的树。为了节省士兵的个数且
使他们可以观察到所有的路(如果两个城镇间有路则士兵可以观测到)，他打算为尽可
能少的城镇中派遣观察士兵(每个城镇一位士兵)，使得这些士兵可以观测到所有路的
情况，问你最少需要多少名士兵。你能帮助他吗？
输入
输入包含多组测试样例。
对于每组测试样例，输入第一行包含一个数字n(n ≤ 1000)表示结点的个数。
接下来n行，对于每行，第一个数字表示结点u，第二个数字表示结点u的领边条数m，
接下来m个数字表示与结点u相连结点的编号。保证边数小于10000。
输出
输出一个数字表示最小士兵数目。*/ 
#include<iostream>
#include<cstring>
using namespace std;
const int maxn=1010;
int pre[maxn];
bool visit[maxn];
int newpos[maxn];
int head[maxn];
struct Edge
{
	int to;
	int next;
}edge[maxn];
int cnt;
void addedge(int u,int v)
{
	edge[cnt].to=v;
	edge[cnt].next=head[u]; 
	head[u]=cnt++;
}
int now;
void dfs(int x)
{
	newpos[now++]=x;
	for(int k=head[x];k!=-1;k=edge[k].next)
	{
		if(!visit[edge[k].to])
		{
			visit[edge[k].to]=true;
			pre[edge[k].to]=x;
			dfs(edge[k].to);
		}
	}
}
int n;
int mvc()
{
	bool s[maxn]={0};
	bool set[maxn]={0};
	int ans=0;
	for(int i=n-1;i>=1;i--)
	{
		int t=newpos[i];
		if(!s[t]&&!s[pre[t]])
		{
			set[pre[t]]=true;
			ans++;
			s[t]=true;
			s[pre[t]]=true;
		}
	}
	return ans;
}
void init()
{
	memset(head,-1,sizeof head);
	memset(visit,false,sizeof visit);
	now=0;
	cnt=0;
	visit[0]=true;
	pre[0]=0;
}
int main()
{
	while(cin>>n)
	{
		init();
		for(int i=0;i<n;i++)
		{
			int u,m;
			cin>>u>>m;
			while(m--)
			{
				int v;
				cin>>v;
				addedge(u,v);
			}
		}
		dfs(0);
		cout<<mvc()<<endl;
	}
	return 0;
}
