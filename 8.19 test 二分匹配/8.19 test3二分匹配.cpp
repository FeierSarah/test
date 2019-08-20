/*题目描述
 一共有N个学生跟P门课程一个学生可以任意选一 门或多门课，你需写一个程序，判断给定的输入是否可以满足以下条件。
1.每个学生选的都是不同的课(即不能有两个学生选同一门课)
2.即P门课都被成功选过
注意：是课程匹配的学生，学生没课上没事。
输入
第一行一个T代表T(T ≤ 10)组数据
对于每组测试样例，先输入两个整数P， N(P课程数 N学生数)。
接着p行：第i行代表第i门课程，首先一个数字k代表对课程i感兴趣的学生的个数，接下来是k个对这门课感兴趣的同学的编号。0 < P ≤ 500 0 < n  ≤ 500。最大边数不超过1000.
输出
若能满足上述要求输出YES否则输出NO。*/
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
