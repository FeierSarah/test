#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<queue>
#include<vector>
using namespace std;
int dep[105], gap[105];
int n, m, s, t;
#define maxn 105
int dfn[maxn], low[maxn];
int head[maxn];
int cnt, total,maxflow,inf;
struct Dinic
{
	int n,m,s,t;
	vector<Edge>edges;
	vector<int> G[maxn];
	bool vis[maxn];
	int d[maxn];
	int cur[maxn];
	void addedge(int from,int to,int cap)
	{
		edges.push_back((Edge){from,to,cap,0});
		edges.push_back((Edge){to,from,0,0});
		m=edges.size();
		G[from].push_back(m-2);
		G[to].push_back(m-1);
	}
	bool bfs()
	{
		memset(vis,false,sizeof vis);
		queue<int> que;
		que.push(s);
		d[s]=0;
		vis[s]=true;
		while(!que.empty())
		{
			int x=que.front();
			que.pop();
			for(int i=0;i<G[x].size();i++)
			{
				Edge &e=edges[G[x][i]];
				if(!vis[e.to]&&e.cap>e.flow)
				{
					vis[e.to]=true;
					d[e.to]=d[x]+1;
					que.push(e.to);
				}
			}
		}
		return vis[t];
	 }
	 int dfs(int x,int a)
	 {
	 	if(x==t||a==0)
	 	return a;
	 	int flow=0,f;
	 	for(int &i=cur[x];i<G[x].size();i++)
	 	{
	 		Edge &e=edges[G[x][i]];
	 		if(d[x]+1==d[e.to]&&(f=dfs(e.to,min(a,e.cap-e.flow)))>0)
	 		{
	 			e.flow+=f;
	 			edges[G[x][i]^1].flow-=f;
	 			flow+=f;
	 			a-=f;
	 			if(a==0)
	 			break;
			 }
		 }
	 	return flow;
	  } 
	void init(int s,int t,int n)
	{
		this->s=s;
		this->t=t;
		this->n=n;
		for(int i=1;i<=n;i++)
		G[i].clear();
		edges.clear();
	}
	int maxflow()
	{
		int flow=0;
		while(bfs())
		{
			memset(cur,0,sieof cur);
			flow+=dfs(s,inf);
		}
		return flow;
	}
}Dinic;
int main()
{
	int u,v,w,b,e;
	cin >> n >> m;
	for (int k = 1; k <= m; k++)
	{
		cin >> u>>v>>w;
		Dinic(u,v,w);
	}
	cin>>b>>e;
	cout <<Dinic().dfs(b,e)<<endl;
	return 0;
}
