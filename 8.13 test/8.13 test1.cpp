//��Ŀ����
//����һ����n���ڵ��������q��ѯ�ʣ�ÿ��ѯ��u��v�������������
//����
//��������
//��һ�� �ֱ��� n q �� 1�� q  n ��10000 ��
//����n-1���Ǵ�u -> v ��ʾv�ĸ��׽ڵ���u
//����q��ѯ��
//���
//ÿ��ѯ�ʵ������������
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
	//�Ҹ��ڵ� 
	for(int i=1;i<=n;i++)
	{
		if(!find_root[i])
		{
			root=i;
		}
	}
	fa[root]=root;
	deep[root]=1;
	//�ݹ�ʣ�µĽڵ㣬������ 
	dfs(root);
}
//�ҹ������� 
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
