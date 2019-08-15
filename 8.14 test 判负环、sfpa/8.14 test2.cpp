/* 
��Ŀ����
����¥���кܶ���ң���Щ������˫���������ӡ����⣬������һЩ���������ͨ����ͨ�����ǿ��Իص���ȥ�������� N (1 �� N �� 500) �����ң���� 1..N M (1 �� M �� 2500) �����ȣ��� W (1 �� W �� 200) ������ͨ����
DY����è֮�࣬����һ��ʱ�����а����ߡ���ϣ����һ����ҳ���������һЩ���Ⱥ�����ͨ�����ص�������֮ǰ��ĳ��ʱ�䡣
����F (1 �� F �� 5) �����ݡ���ÿ�����ݣ��ж�DY�Ƿ��лص���ȥ�Ŀ����ԡ������ں�ʱ����10000������ȣ��Ҳ������ܴ�DY�ص�10000��֮ǰ������ͨ����
����
������һ������F����ʾ����������F�����ݡ�
ÿ�����ݵ�1�У��ֱ��������ո������������N��M��W
��2�е�M+1�У������ո�ֿ������֣�S��E��T������˫�����ȣ���S��E��Ҫ�ķ�T�롣�������ҿ�����һ�����ϵ�·�������ӡ�
��M +2��M+ W+1�У������ո�ֿ������֣�S��E��T����������ͨ������S��E����ʹʱ�䵹��T�롣
���
F�У�ÿ�ж�Ӧһ�����ݡ� ÿ���������������һ�У��� YES����ʾ������Ҫ�󣬡�NO����ʾ��������Ҫ��
*/ 
#include<iostream>
#include<cstring>
#include<queue>
using namespace std;
const int maxn=505;
const int maxm=2525;
const int inf=0x3f3f3f3f;
struct Edge
{
	int to,next,cost;
}edge[maxm];
int head[maxn];
int cnt;
void init()
{
	memset(head,-1,sizeof head);
	cnt=0;
}
void addedge(int u,int v,int cost)
{
	edge[cnt].to=v;
	edge[cnt].cost=cost;
	edge[cnt].next=head[u]; 
	head[u]=cnt++;
}
bool vis[maxn];//�ж��Ƿ��ڶ��� 
//int num[maxn];
//int pre[maxn];
double dist[maxn];//��¼����ʼ�����̳��� 
bool spfa(int b)
{
	memset(vis,false,sizeof vis);//�ڶ��б�־ 
//	memset(num,0,sizeof num);//ÿ�������ӵĴ��� 
//	memset(pre,-1,sizeof pre);//ÿ����������·�����еĸ��׽�� 
	fill(dist,dist+maxn,inf);
	int flag=0;
	vis[b]=true;
	dist[b]=1;
//	num[b]=1;
	queue<int> que;
	while(!que.empty()) 
	que.pop();
	que.push(b);
	while(!que.empty())
	{
		int u=que.front();
		que.pop();
		vis[u]=false;
		int i;
		for(i=head[u];~i;i=edge[i].next)
		{
			int v=edge[i].to;
			if(dist[v]>dist[u]+edge[i].cost)
			{
				flag=1;
				dist[v]=dist[u]+edge[i].cost;
//				pre[v]=u;
				if(!vis[v])
				{
					vis[v]=true;
					que.push(v);
					if(v==b&&dist[v]<0) return true;//���ڸ��� 
				}
			}
		}
	}
	return false;
}
int main()
{
	int f;
	cin>>f;
	while(f--)
	{
		init();
		int n,v,w;
		cin>>n>>v>>w;
		while(v--)
		{
			int s,e,cost;
			cin>>s>>e>>cost;
			addedge(s,e,cost);
			addedge(e,s,cost);
		}
		while(w--)
		{
			int s,e,cost;
			cin>>s>>e>>cost;
			addedge(s,e,-cost);
		}
		int flag=0;
		for(int i=1;i<=n;i++)
		{
			if(spfa(i))
			{
				flag=1;
			}
		}
		if(flag)
		{
			cout<<"YES"<<endl;
		}
		else cout<<"NO"<<endl;
	}
	return 0;
}
