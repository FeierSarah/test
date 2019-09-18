#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<cmath>
#include<queue>
using namespace std;
int dep[105], gap[105];
int n, m, s, t;
#define maxn 105
int dfn[maxn], low[maxn];
int head[maxn];
int cnt, total,maxflow,inf;
queue<int>q;
struct Node
{
	int v;
	int next;
	int val;
}node[2500];
void init()
{
	while (!q.empty()) q.pop();
	memset(head, -1, sizeof head);
	cnt = 0;
	total = 0;
}
inline void addedge(int u, int v, int val)
{
	node[++cnt].v = v;
	node[cnt].val = val;
	node[cnt].next = head[u];
	head[u] = cnt;
}
void bfs()
{
	memset(dep, -1, sizeof(dep));
	memset(gap, 0, sizeof(gap));
	dep[t] = 0;
	gap[0] = 1;
	q.push(t);
	while (!q.empty())
	{
		int u = q.front();
		q.pop();
		for (int i = head[u]; i; i = node[i].next)
		{
			int v = node[i].v;
			if (dep[v] != -1)continue;
			q.push(v);
			dep[v] = dep[u] + 1;
			gap[dep[v]]++;
		}
	}
	return;
}
int dfs(int u, int flow)
{
	if (u == t)
	{
		maxflow += flow;
		return flow;
	}
	int used = 0;
	for (int i = head[u]; i; i = node[i].next)
	{
		int d = node[i].v;
		if (node[i].val&&dep[d] + 1 == dep[u])
		{
			int mi = dfs(d, min(node[i].val, flow - used));
			if (mi)
			{
				node[i].val -= mi;
				node[i ^ 1].val += mi;
				used += mi;
			}
			if (used == flow)
				return used;
		}
	}
	--gap[dep[u]];
	if (gap[dep[u]] == 0)
		dep[s] = n + 1;
	dep[u]++;
	gap[dep[u]++];
	return used;
}
int ISAP()
{
	int maxflow = 0;
	bfs();
	while (dep[s<n])
		dfs(s, inf);
	return maxflow;
}
int Fi[101], Di[201];
int main()
{
	int u,v,w,b,e;
	cin >> n >> m;
	init();
	for (int k = 1; k <= m; k++)
	{
		cin >> u>>v>>w;
		addedge(u,v,w);
	}
	cin>>b>>e;
	cout <<ISAP()<<endl;
	return 0;
}
