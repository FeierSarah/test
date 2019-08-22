/*��Ŀ����
������һ���ı�����ϵͳ�������ϵͳ��ÿ���ı����кܳ������ݣ����û�����һЩ�ؼ����������ı�ʱ��ϵͳ�Ὣ�ؼ������ı����ݽ���ƥ�䣬����ʾ��ƥ��ؼ��ֵ��ı���
Ϊ�˼����⣬Ϊ���ṩ�ı����ݺ�һЩ�ؼ��֣���Ҫ����ı���ƥ����ٸ��ؼ��֡�
����
��һ�н�����һ��������ʾ��������������
Ȼ����һ������ N ��ʾ�ؼ��ֵ������������� N ���ؼ��֡� ��N <= 10000��
ÿ���ؼ���ֻ�����ַ� 'a' - 'z'���ҳ��Ȳ��ᳬ��50��
���һ�������������Ȳ�����1000000��
���
��ӡ�ı��а����Ĺؼ��ֵ�������*/ 
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
void insert(Trie *root, char *s) //���ֵ����� �����ַ���s
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
void build_ac_automation(Trie *root) //����BFS����AC�Զ���
{
    int head = 0, tail = 0;  //������βָ��
    q[tail++] = root;
    while (head != tail){
        Trie *temp = q[head++];
        for (int i = 0; i < 26; i++){  //������ͷԪ�ص��ӽ��
            if (temp->next[i] != NULL){
                Trie *p = temp->fail;
                while (p != NULL){  //ֻ�и�����ʧ��ָ��Ϊ NULL
                    if (p->next[i] != NULL){  //˳��ʧ��ָ�������ߣ�ֱ��ĳ���ڵ㣬
                        temp->next[i]->fail = p->next[i];  //��ӵ��һ����ĸΪ'a'+i���ӽ��
                        break;
                    }
                    p = p->fail;  //����ʧ��ָ��һֱ��
                }
                if (p == NULL)
                    temp->next[i]->fail = root; //p==NULL ˵��˳��ʧ��ָ�������ߵĹ�����û���ҵ����ʵĽ��
                q[tail++] = temp->next[i];  //ÿ����һ����㣬���øý��������ӽڵ��������
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
        while (p->next[c] == NULL && p != root) //����ǰ����û��һ���ַ�Ϊ T[i] �Ķ����ҵ�ǰ���Ǹ��ڵ�
            p = p->fail;                        //˳��ʧ��ָ�������ߣ�ֱ���ҵ����ʵĽڵ������Ϊֹ
        if (p->next[c] != NULL)
            p = p->next[c];
        Trie *temp = p;
        while (temp != root && temp->num != -1){ //˳��ʧ��ָ�������ߣ�һֱ�������
            ans += temp->num; //����ǰ�ڵ��num��Ϊ 0����˵���Ե�ǰ�ڵ���ĸ��β�ĵ��ʳ��ֹ�
                              //�˵���������һ��ѭ���Ľ����ĸΪ��β�ĵ��ʵ��Ӽ�
            temp->num = -1;   //��� num Ϊ-1�������ظ�����
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
