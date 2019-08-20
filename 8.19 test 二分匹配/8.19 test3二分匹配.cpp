/*��Ŀ����
 һ����N��ѧ����P�ſγ�һ��ѧ����������ѡһ �Ż���ſΣ�����дһ�������жϸ����������Ƿ������������������
1.ÿ��ѧ��ѡ�Ķ��ǲ�ͬ�Ŀ�(������������ѧ��ѡͬһ�ſ�)
2.��P�ſζ����ɹ�ѡ��
ע�⣺�ǿγ�ƥ���ѧ����ѧ��û����û�¡�
����
��һ��һ��T����T(T �� 10)������
����ÿ�������������������������P�� N(P�γ��� Nѧ����)��
����p�У���i�д����i�ſγ̣�����һ������k����Կγ�i����Ȥ��ѧ���ĸ�������������k�������ſθ���Ȥ��ͬѧ�ı�š�0 < P �� 500 0 < n  �� 500��������������1000.
���
������������Ҫ�����YES�������NO��*/
#include<iostream>
#include<cstring>
using namespace std;
const int maxn = 5000 + 5;
const int maxm = 50000 + 5;
struct Edge {
    int to, next;
} edge[maxm];
int head[maxn], tot;
int linker[maxn];
bool used[maxn];
int P;

void init() {
    tot = 0;
    memset(head, -1, sizeof head);
}

void addedge(int u, int v) {
    edge[tot].to = v; edge[tot].next = head[u];
    head[u] = tot ++;
}

bool dfs(int u) {
    for(int i = head[u]; ~i; i = edge[i].next) {
        int v = edge[i].to;
        if(!used[v]) {
            used[v] = true;
            if(linker[v] == -1 || dfs(linker[v])) {
                linker[v] = u;
                return true;
            }
        }
    }
    return false;
}

int hungary() {
    int res = 0;
    memset(linker, -1, sizeof linker);
    for(int u = 1; u <= P; u ++) {
        memset(used, false, sizeof used);
        if(dfs(u)) res ++;
    }
    return res;
}
int main()
{
	int T;
	cin>>T;
	while(T--) 
	{
		init();
		int N;
		cin>>P>>N;
		for(int i=1;i<=P;i++)
		{
			int k;
			cin>>k;
			while(k--)
			{	
			    int j;
				cin>>j;
				addedge(i,j);	
			}
		}
		if(hungary()==P)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
	return 0;
 } 
