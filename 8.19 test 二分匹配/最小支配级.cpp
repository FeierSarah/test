#include<iostream>
#include <cstdio>
#include <cstring>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;
const int maxn = 1000 + 5;
int pre[maxn];
bool visit[maxn];
int newpos[maxn];
int now;
int n, m;
int head[maxn];
struct Edge
{
	int to;
	int next;
}edge[maxn];
int cnt;
void addedge(int u,int v)
{
	edge[cnt].to=v;
	edge[cnt].next=head[u]; 
	head[u]=cnt++;
}
void init()
{
	memset(head,-1,sizeof head);
	memset(visit,false,sizeof visit);
	now=0;
	cnt=0;
	visit[0]=true;
	pre[0]=0;
}
void DFS(int x) {
    newpos[now ++] = x;
    for(int k = head[x]; k != -1; k = edge[k].next) {
        if(!visit[ edge[k].to ]) {
            visit[ edge[k].to ] = true;
            pre[edge[k].to] = x;
            DFS(edge[k].to);
        }
    }
}
int MVC() 
{
    bool s[maxn] = {0};
    bool set[maxn] = {0};
    int ans = 0;
    for(int i = n - 1; i >= 1; i--) {
        int t = newpos[i];
        if(!s[t] && !s[ pre[t] ]) {
            set[ pre[t] ] = true;
            ans ++; 
            s[t] = true;
            s[ pre[t] ] = true;
        }        
    }
    return ans;
}
void solve() 
{
    memset(visit, false, sizeof(visit));
    now = 0;
    visit[1] = true;
    pre[1] = 1;
    DFS(1);
    MVC();
}
int main()
{
	int T; 
	while(cin>>T&&T>0);
	{
		int u,v,M;
		while(T--)
		{
			cin>>u>>M;
			while(M>0)
			{
				cin>>v;
				M--;
			}
		}
		cout<<MVC()<<endl;
	}
	return 0;
 } 
