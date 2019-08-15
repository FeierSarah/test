/*
��Ŀ����
����һ������ͼ���밴��С������и��
����
��һ����������  n  m  �ֱ��ʾn���� m����
����m���������� u  v  ��ʾ ��  u  v  ֮�����һ����
���
�밴��С������и��
*/
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<stack>
using namespace std;
#define maxn 100010
struct node
{
	int u, v;
	int next;
}edge[maxn];
int dfn[maxn], low[maxn];
int head[maxn];
int cnt, total;
int s = 0;
stack<int> st;
void init()
{
	while (!st.empty()) st.pop();
	memset(head, -1, sizeof head);
	cnt = 0;
	total = 0;
}
void add(int u, int v)
{
	edge[cnt].u = u;
	edge[cnt].v = v;
	edge[cnt].next = head[u];
	head[u] = cnt++;
}
void tarjan(int u)
{
	dfn[u] = low[u] = ++total;
	st.push(u);
	for (int i = head[u]; ~i; i = edge[i].next)
	{
		int v = edge[i].v;
		if (!dfn[v])
		{
			tarjan(v);
			low[u] = min(low[u], low[v]);//����
		}
		else
		{
			low[u] = min(low[u], dfn[v]);//���£���¼v���Բ�ͨ��u������u�����Ƚڵ�
		}
	}
	if (low[u] == dfn[u])
	{
		while (1)
		{
			int t = st.top();
			st.pop();
			//			cout << t << " ";
			if (t == u) break;
		}
		//		cout << endl;
		s++;
	}
	return ;
}
int n, m;
int main()
{
	int u, v;
	scanf("%d %d", &n, &m);
	init();
	for (int i = 0; i < m; i++)
	{
		scanf("%d %d", &u, &v);
		add(u, v);
	}
	for (int i = 1; i <= n; i++)
	if (!dfn[i])
		tarjan(i);
		cout << s << endl;
return 0;
}
