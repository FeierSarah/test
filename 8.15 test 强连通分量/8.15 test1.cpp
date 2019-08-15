/*
��Ŀ����
��һ����Ǳ���������N������(N<=10000)��M��ͨ��(M<=100000)��ÿ��ͨ�����ǵ���ģ�
����˵����ĳͨ����ͨ��A�����B���䣬ֻ˵������ͨ�����ͨ����A���䵽��B���䣬��
����˵��ͨ����������B���䵽��A���䡣��Ҫ����д������ȷ��һ���Ƿ������������䶼
���໥��ͨ�ģ��������������i��j�����ٴ���һ��·�����Դӷ���i������j��Ҳ����һ
��·�����Դӷ���j������i�� 
����
��������������ݣ�����ĵ�һ������������N��M����������M��ÿ����������a��b����ʾ
��һ��ͨ�����Դ�A��������B���䡣�ļ����������0������ 
���
���������ÿ�����ݣ���������������䶼���໥���ӵģ����"Yes"���������"No"�� 
*/
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<stack>
using namespace std;
#define maxn 100010
struct node{
	int u, v;
	int next;
}edge[maxn];
int dfn[maxn], low[maxn];
int head[maxn];
int cnt, total;
stack<int> st;
void init(){
	while (!st.empty()) st.pop();
	memset(head, -1, sizeof head);
	cnt = 0;
	total = 0;
}
void add(int u, int v){
	edge[cnt].u = u;
	edge[cnt].v = v;
	edge[cnt].next = head[u];
	head[u] = cnt++;
}
int tarjan(int u){
	int s = 0;
	dfn[u] = low[u] = ++total;
	st.push(u);
	for (int i = head[u]; ~i; i = edge[i].next){
		int v = edge[i].v;
		if (!dfn[v]){
			tarjan(v);
			low[u] = min(low[u], low[v]);//����
		}
		else {
			low[u] = min(low[u], dfn[v]);//���£���¼v���Բ�ͨ��u������u�����Ƚڵ�
		}
	}
	if (low[u] == dfn[u]){
		while (1){
			int t = st.top();
			st.pop();
//			cout << t << " ";
			s++;
			if (t == u) break;
		}
//		cout << endl;
	}
	return s;
}
int n, m;
int p[maxn];
int main(){
	int u, v;
	int S = 0;
	scanf("%d %d", &n, &m);
	while ((cin >> n >> m) && (n != 0) && (m != 0))
	{
		init();
		for (int i = 0; i < m; i++){
			scanf("%d %d", &u, &v);
			p[i] = u;
			add(u, v);
		}
		S = tarjan(p[0]);
		if (S == n)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	return 0;
}
