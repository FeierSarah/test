/* 
题目描述
耳机楼里有很多教室，这些教室由双向走廊连接。另外，还存在一些单向的秘密通道，通过它们可以回到过去。现在有 N (1 ≤ N ≤ 500) 个教室，编号 1..N M (1 ≤ M ≤ 2500) 条走廊，和 W (1 ≤ W ≤ 200) 条秘密通道。
DY在养猫之余，还是一个时间旅行爱好者。她希望从一间教室出发，经过一些走廊和秘密通道，回到她出发之前的某个时间。
共有F (1 ≤ F ≤ 5) 组数据。对每组数据，判断DY是否有回到过去的可能性。不存在耗时超过10000秒的走廊，且不存在能带DY回到10000秒之前的秘密通道。
输入
首先是一个整数F，表示接下来会有F组数据。
每组数据第1行：分别是三个空格隔开的整数：N，M和W
第2行到M+1行：三个空格分开的数字（S，E，T）描述双向走廊：从S到E需要耗费T秒。两个教室可能由一个以上的路径来连接。
第M +2到M+ W+1行：三个空格分开的数字（S，E，T）描述秘密通道：从S到E可以使时间倒流T秒。
输出
F行，每行对应一组数据。 每组数据输出单独的一行，” YES”表示能满足要求，”NO”表示不能满足要求。
*/ 
#include<iostream>
#include<cstring>
#include<queue>
using namespace std;
const int maxn=505;
const int maxm=2525;
const int inf=0x3f3f3f3f;
struct Edge
{
	int to,next,cost;
}edge[maxm];
int head[maxn];
int cnt;
void init()
{
	memset(head,-1,sizeof head);
	cnt=0;
}
void addedge(int u,int v,int cost)
{
	edge[cnt].to=v;
	edge[cnt].cost=cost;
	edge[cnt].next=head[u]; 
	head[u]=cnt++;
}
bool vis[maxn];//判断是否在队列 
//int num[maxn];
//int pre[maxn];
double dist[maxn];//记录到起始点的最短长度 
bool spfa(int b)
{
	memset(vis,false,sizeof vis);//在队列标志 
//	memset(num,0,sizeof num);//每个结点入队的次数 
//	memset(pre,-1,sizeof pre);//每个结点在最短路径树中的父亲结点 
	fill(dist,dist+maxn,inf);
	int flag=0;
	vis[b]=true;
	dist[b]=1;
//	num[b]=1;
	queue<int> que;
	while(!que.empty()) 
	que.pop();
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
			if(dist[v]>dist[u]+edge[i].cost)
			{
				flag=1;
				dist[v]=dist[u]+edge[i].cost;
//				pre[v]=u;
				if(!vis[v])
				{
					vis[v]=true;
					que.push(v);
					if(v==b&&dist[v]<0) return true;//存在负环 
				}
			}
		}
	}
	return false;
}
int main()
{
	int f;
	cin>>f;
	while(f--)
	{
		init();
		int n,v,w;
		cin>>n>>v>>w;
		while(v--)
		{
			int s,e,cost;
			cin>>s>>e>>cost;
			addedge(s,e,cost);
			addedge(e,s,cost);
		}
		while(w--)
		{
			int s,e,cost;
			cin>>s>>e>>cost;
			addedge(s,e,-cost);
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
			cout<<"YES"<<endl;
		}
		else cout<<"NO"<<endl;
	}
	return 0;
}
