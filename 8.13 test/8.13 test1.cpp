//题目描述
//给你一个有n个节点的树，有q次询问，每次询问u和v的最近公共祖先
//输入
//连续输入
//第一行 分别是 n q （ 1≤ q  n ≤10000 ）
//下面n-1行是从u -> v 表示v的父亲节点是u
//下面q次询问
//输出
//每次询问的最近公共祖先
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<vector>
using namespace std;
#define MAXN 10010
vector<int> tree[MAXN];
int fa[MAXN];
int deep[MAXN];
bool find_root[MAXN];
int n,q,root;
void dfs(int x)
{
	for(int i=0;i<tree[x].size();i++)
	{
		int y=tree[x][i];
		deep[y]=deep[x]+1;
		fa[y]=x;
		dfs(y);
	}
}
void init()
{
	//找根节点 
	for(int i=1;i<=n;i++)
	{
		if(!find_root[i])
		{
			root=i;
		}
	}
	fa[root]=root;
	deep[root]=1;
	//递归剩下的节点，构建树 
	dfs(root);
}
//找公共祖先 
int lca(int x,int y)
{
	while(deep[x]!=deep[y])
	{
	if(deep[x]>deep[y])
	{
		x=fa[x];
	}
	else if(deep[x]<deep[y])
	{
		y=fa[y];
	}
    }
    while(x!=y)
    {
    	x=fa[x];
    	y=fa[y];
	}
	return x;
}
int main() 
{
	int u,v;
	scanf("%d %d",&n,&q);
	memset(find_root,false,sizeof find_root);
	for(int i=1;i<n;i++)
	{
		scanf("%d %d",&u,&v);
		tree[u].push_back(v);
		find_root[v]=true;
	}
	init();
	for(int i=1;i<=q;i++)
	{
		scanf("%d %d",&u,&v);
		printf("%d\n",lca(u,v));
	}
	return 0;
 } 
