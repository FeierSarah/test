//��Ŀ����
//����һ����n���ڵ��������q��ѯ�ʣ�ÿ��ѯ��u��v�������������
//����
//��������
//��һ�� �ֱ��� n q �� 1�� q  n ��106 ��
//����n - 1���Ǵ�u->v ��ʾv�ĸ��׽ڵ���u
//����q��ѯ��
//���
//ÿ��ѯ�ʵ������������
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
		anc[x][i] = anc[anc[x][i - 1]][i - 1];//���ֱ���
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
	//�Ҹ��ڵ� 
	for (int i = 1; i <= n; i++)
	{
		if (!find_root[i])
		{
			root = i;
		}
	}
	fa[root] = root;
	deep[root] = 1;
	//�ݹ�ʣ�µĽڵ㣬������ 
	dfs(root);
}
//�ҹ������� 
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
//�Ƚ��ڱ������LCA���ñ�������⣬Ԥ�����Ӷ��� O(nlog n), ÿ��ѯ�ʵĸ��Ӷ��� O(log n)��
/*�������LCA*/
//DFS���� + ��ͨ����
//˼·��
//�������ҵ����ڵ㣬
//Ȼ���¼ÿ���ڵ�ĸ��׽ڵ�
//�͸ýڵ�ĵ���ȣ�
//�������������ڵ㿪ʼ�����ң�
//һֱ�ҵ������ڵ��غ�Ϊֹ

/*���������*/
//DFS+�����Ż�
//�뱩�����Ա�:
//����һ��һ��������Ѱ�Ҹ��׽ڵ㣬��������Ѱ��
//˼·��
//����˼�룺�κ����ֶ�����ת��Ϊ�����ƣ�
//��ô�Ҵ�ÿһ���ڵ�Ķ����ݴ�λ���ȣ�
//�ǲ�����Ҫ�Ǹ��ڵ�ĵڶ������ȿ��Ժܿ��ѯ����

