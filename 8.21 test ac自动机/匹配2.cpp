/*题目描述
当太阳的光辉逐渐被月亮遮蔽，世界失去了光明，大地迎来最黑暗的时刻。。。。在这样的时刻，人们却异常
兴奋——我们能在有生之年看到500年一遇的世界奇观，那是多么幸福的事儿啊~但网路上总有那么些网站，开
始借着民众的好奇心，打着介绍日食的旗号，大肆传播病毒。小t不幸成为受害者之一。小t如此生气，他决定
要把世界上所有带病毒的网站都找出来。当然，谁都知道这是不可能的。小t却执意要完成这不能的任务，他说
：“子子孙孙无穷匮也！”（愚公后继有人了）。万事开头难，小t收集了好多病毒的特征码，又收集了一批诡
异网站的源码，他想知道这些网站中哪些是有病毒的，又是带了怎样的病毒呢？顺便还想知道他到底收集了多
少带病毒的网站。这时候他却不知道何从下手了。所以想请大家帮帮忙。小t又是个急性子哦，所以解决问题越
快越好哦~
输入
第一行，一个整数N（1<=N<=500），表示病毒特征码的个数。
接下来N行，每行表示一个病毒特征码，特征码字符串长度在20—200之间。
每个病毒都有一个编号，依此为1—N。
保证病毒两两不同
在这之后一行，有一个整数M（1<=M<=1000），表示网站数。
接下来M行，每行表示一个网站源码，源码字符串长度在7000—10000之间。
每个网站都有一个编号，依此为1—M。
以上字符串中字符都是ASCII码可见字符（不包括回车）。
输出
依次按如下格式输出按网站编号从小到大输出，带病毒的网站编号和包含病毒编号，每行一个含毒网站信息。
web 网站编号: 病毒编号 病毒编号 …
冒号后有一个空格，病毒编号按从小到大排列，两个病毒编号之间用一个空格隔开。
最后一行输出统计信息，如下格式
total: 带病毒网站数
冒号后有一个空格。*/  
#include <iostream> 
#include <cstdio>
#include <cstring>
using namespace std;
const int maxp = 50 + 7;
const int maxt = 1000000 + 7;
const int maxq = 10000 * maxp;
int c[500];
int rec[507];
int dex=0;
struct Trie
{
    Trie *next[95];
    Trie *fail;
    int pos; 
    int num;
    Trie(){
        for (int i = 0; i < 95; i++)//考虑所有可显示的数，不光是字母，33-126 
            next[i] = NULL;
        fail = NULL;
        pos=0;
        num = 0;
    }
};
char P[maxp];
char T[maxt];
Trie *q[maxq];
void insert(Trie *root, char *s) //在字典树上 插入字符串s
{
    Trie *p = root;
    for (int i = 0; s[i] != '\0'; i++){
        char c = s[i] - 33;
        if (p->next[c] == NULL){
            p->next[c] = new Trie;
        }
        p = p->next[c];
    }
    p->num++;
    p->pos=++dex;
}
void build_ac_automation(Trie *root) //利用BFS创建AC自动机
{
    int head = 0, tail = 0;  //队列首尾指针
    q[tail++] = root;
    while (head != tail){
        Trie *temp = q[head++];
        for (int i = 0; i < 95; i++){  //遍历队头元素的子结点
            if (temp->next[i] != NULL){
                Trie *p = temp->fail;
                while (p != NULL){  //只有根结点的失配指针为 NULL
                    if (p->next[i] != NULL){  //顺着失配指针往回走，直至某个节点，
                        temp->next[i]->fail = p->next[i];  //其拥有一个字母为'a'+i的子结点
                        break;
                    }
                    p = p->fail;  //沿着失配指针一直找
                }
                if (p == NULL)
                    temp->next[i]->fail = root; //p==NULL 说明顺着失配指针往回走的过程中没有找到合适的结点
                q[tail++] = temp->next[i];  //每处理一个结点，都让该结点的所有子节点依次入队
            }
        }
    }
}
int query(Trie *root, char *T)
{
    int ans = 0;
    Trie *p = root;
    int flag=0;
    for (int i = 0, len = strlen(T); i < len; i++){
        char c = T[i] - 33;
        while (p->next[c] == NULL && p != root) //若当前结点的没有一个字符为 T[i] 的儿子且当前不是根节点
            p = p->fail;                        //顺着失配指针往回走，直至找到合适的节点或根结点为止
        if (p->next[c] != NULL)
            p = p->next[c];
        Trie *temp = p;
        while (temp != root){ //顺着失配指针往回走，一直到根结点
            if(temp->pos)
            {
            	rec[temp->pos]=1;
            	flag=1;
			}
			temp=temp->fail;
        }
    }
    return flag;
}
int a[100][500];
int main()
{
    int t, n,b,s=0;
    scanf("%d", &n);
    Trie *root = new Trie;
    getchar();
    build_ac_automation(root);
    for (int i = 0; i < n; i++){
        gets(P);
        insert(root, P);
    }
    scanf("%d", &t);    
    for (int i = 1; i <= t; i++){
        gets(T);
        for (int j = 1; j <= n; i++){
        	a[i][j]=query(root, T);
        	memset(rec,0,sizeof(rec));
        }
    }
    for(int i=1;i<=t;i++){
    	cout<<"web"<<i<<": ";
    	for(int i=1;i<=n;i++){
    	if(a[t][i]!=0)
    	{
    		cout<<a[t][i]<<" "<<endl;
		}
		else
		   b=0;
		   b++;	
        }
        if(b!=n)
        s++;
    }
    cout<<"total: "<<s<<endl;
    return 0;
}
