/*
题目描述
有一座大城堡，里面有N个房间(N<=10000)和M条通道(M<=100000)，每个通道都是单向的，
就是说若称某通道连通了A房间和B房间，只说明可以通过这个通道由A房间到达B房间，但
并不说明通过它可以由B房间到达A房间。需要请你写个程序确认一下是否任意两个房间都
是相互连通的，即：对于任意的i和j，至少存在一条路径可以从房间i到房间j，也存在一
条路径可以从房间j到房间i。 
输入
输入包含多组数据，输入的第一行有两个数：N和M，接下来的M行每行有两个数a和b，表示
了一条通道可以从A房间来到B房间。文件最后以两个0结束。 
输出
对于输入的每组数据，如果任意两个房间都是相互连接的，输出"Yes"，否则输出"No"。 
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
			low[u] = min(low[u], low[v]);//回溯
		}
		else {
			low[u] = min(low[u], dfn[v]);//更新，记录v可以不通过u而到达u的祖先节点
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
