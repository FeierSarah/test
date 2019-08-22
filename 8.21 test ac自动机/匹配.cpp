/*题目描述
我们有一个文本检索系统，在这个系统里每个文本都有很长的内容，当用户键入一些关键字来查找文本时，系统会将关键字与文本内容进行匹配，并显示最匹配关键字的文本。
为了简化问题，为你提供文本内容和一些关键字，需要求出文本将匹配多少个关键字。
输入
第一行将包含一个整数表示测试样例个数。
然后是一个整数 N 表示关键字的数量，后面有 N 个关键字。 （N <= 10000）
每个关键字只包含字符 'a' - 'z'，且长度不会超过50。
最后一行是描述，长度不超过1000000。
输出
打印文本中包含的关键字的数量。*/ 
#include <cstdio>
#include <cstring>
using namespace std;
const int maxp = 50 + 7;
const int maxt = 1000000 + 7;
const int maxq = 10000 * maxp;
struct Trie
{
    Trie *next[26];
    Trie *fail;
    int num;
    Trie(){
        for (int i = 0; i < 26; i++)
            next[i] = NULL;
        fail = NULL;
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
        int c = s[i] - 'a';
        if (p->next[c] == NULL){
            p->next[c] = new Trie;
        }
        p = p->next[c];
    }
    p->num++;
}
void build_ac_automation(Trie *root) //利用BFS创建AC自动机
{
    int head = 0, tail = 0;  //队列首尾指针
    q[tail++] = root;
    while (head != tail){
        Trie *temp = q[head++];
        for (int i = 0; i < 26; i++){  //遍历队头元素的子结点
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
    for (int i = 0, len = strlen(T); i < len; i++){
        int c = T[i] - 'a';
        while (p->next[c] == NULL && p != root) //若当前结点的没有一个字符为 T[i] 的儿子且当前不是根节点
            p = p->fail;                        //顺着失配指针往回走，直至找到合适的节点或根结点为止
        if (p->next[c] != NULL)
            p = p->next[c];
        Trie *temp = p;
        while (temp != root && temp->num != -1){ //顺着失配指针往回走，一直到根结点
            ans += temp->num; //若当前节点的num不为 0，则说明以当前节点字母结尾的单词出现过
                              //此单词是以上一次循环的结点字母为结尾的单词的子集
            temp->num = -1;   //标记 num 为-1，避免重复计算
            temp = temp->fail;
        }
    }
    return ans;
}
int main()
{
    int t, n;
    scanf("%d", &t);
    while (t--){
        Trie *root = new Trie;
        scanf("%d", &n);
        getchar();
        for (int i = 0; i < n; i++){
            gets(P);
            insert(root, P);
        }
        build_ac_automation(root);
        gets(T);
        printf("%d\n", query(root, T));
    }
    return 0;
}
