//题目描述
//给你一个有n个节点的树，有q次询问，每次询问u和v的最近公共祖先
//输入
//连续输入
//第一行 分别是 n q （ 1≤ q  n ≤106 ）
//下面n - 1行是从u->v 表示v的父亲节点是u
//下面q次询问
//输出
//每次询问的最近公共祖先
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<vector>
using namespace std;
#define MAXN 1000010 
vector<int> tree[MAXN];
int fa[MAXN];
int deep[MAXN];
bool find_root[MAXN];
int anc[MAXN][25];
int n, q, root;
void dfs(int x)
{
	anc[x][0] = fa[x];
	for (int i = 1; i <= 22; i++)
	{
		anc[x][i] = anc[anc[x][i - 1]][i - 1];//体现倍增
	}
	for (int i = 0; i<tree[x].size(); i++)
	{
		int y = tree[x][i];
		deep[y] = deep[x] + 1;
		fa[y] = x;
		dfs(y);
	}
}
void init()
{
	//找根节点 
	for (int i = 1; i <= n; i++)
	{
		if (!find_root[i])
		{
			root = i;
		}
	}
	fa[root] = root;
	deep[root] = 1;
	//递归剩下的节点，构建树 
	dfs(root);
}
//找公共祖先 
int lca(int x, int y)
{
	if (deep[x]<deep[y]) swap(x, y);
	for (int i = 22; i >= 0; i--) 
	{
		if (deep[y] <= deep[anc[x][i]]) 
		{
			x = anc[x][i];
		}
	}
	if (x == y) return x;
	for (int i = 22; i >= 0; i--)
	{
		if (anc[x][i] != anc[y][i])
		{
			x = anc[x][i];
			y = anc[y][i];
		}
	}
	return anc[x][0];
}
int main()
{
	int u, v;
	scanf("%d %d", &n, &q);
	memset(find_root, false, sizeof find_root);
	for (int i = 1; i<n; i++)
	{
		scanf("%d %d", &u, &v);
		tree[u].push_back(v);
		find_root[v] = true;
	}
	init();
	for (int i = 1; i <= q; i++)
	{
		scanf("%d %d", &u, &v);
		printf("%d\n", lca(u, v));
	}
	return 0;
}
//比较于暴力求解LCA，用倍增法求解，预处理复杂度是 O(nlog n), 每次询问的复杂度是 O(log n)。
/*暴力求解LCA*/
//DFS建树 + 普通搜索
//思路：
//建树：找到根节点，
//然后记录每个节点的父亲节点
//和该节点的的深度，
//搜索：从两个节点开始向上找，
//一直找的两个节点重合为止

/*倍增法求解*/
//DFS+倍增优化
//与暴力求解对比:
//不必一步一步的向上寻找父亲节点，可以跳着寻找
//思路：
//倍增思想：任何数字都可以转换为二进制，
//那么我存每一个节点的二的幂次位祖先，
//是不是想要那个节点的第多少祖先可以很快查询出来

