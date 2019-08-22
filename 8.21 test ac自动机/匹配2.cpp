/*��Ŀ����
��̫���Ĺ���𽥱������ڱΣ�����ʧȥ�˹��������ӭ����ڰ���ʱ�̡���������������ʱ�̣�����ȴ�쳣
�˷ܡ���������������֮�꿴��500��һ����������ۣ����Ƕ�ô�Ҹ����¶���~����·��������ôЩ��վ����
ʼ�������ڵĺ����ģ����Ž�����ʳ����ţ���������������Сt���ҳ�Ϊ�ܺ���֮һ��Сt���������������
Ҫ�����������д���������վ���ҳ�������Ȼ��˭��֪�����ǲ����ܵġ�Сtȴִ��Ҫ����ⲻ�ܵ�������˵
������������������Ҳ�������޹���������ˣ������¿�ͷ�ѣ�Сt�ռ��˺öಡ���������룬���ռ���һ����
����վ��Դ�룬����֪����Щ��վ����Щ���в����ģ����Ǵ��������Ĳ����أ�˳�㻹��֪���������ռ��˶�
�ٴ���������վ����ʱ����ȴ��֪���δ������ˡ����������Ұ��æ��Сt���Ǹ�������Ŷ�����Խ������Խ
��Խ��Ŷ~
����
��һ�У�һ������N��1<=N<=500������ʾ����������ĸ�����
������N�У�ÿ�б�ʾһ�����������룬�������ַ���������20��200֮�䡣
ÿ����������һ����ţ�����Ϊ1��N��
��֤����������ͬ
����֮��һ�У���һ������M��1<=M<=1000������ʾ��վ����
������M�У�ÿ�б�ʾһ����վԴ�룬Դ���ַ���������7000��10000֮�䡣
ÿ����վ����һ����ţ�����Ϊ1��M��
�����ַ������ַ�����ASCII��ɼ��ַ����������س�����
���
���ΰ����¸�ʽ�������վ��Ŵ�С�������������������վ��źͰ���������ţ�ÿ��һ��������վ��Ϣ��
web ��վ���: ������� ������� ��
ð�ź���һ���ո񣬲�����Ű���С�������У������������֮����һ���ո������
���һ�����ͳ����Ϣ�����¸�ʽ
total: ��������վ��
ð�ź���һ���ո�*/  
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
        for (int i = 0; i < 95; i++)//�������п���ʾ��������������ĸ��33-126 
            next[i] = NULL;
        fail = NULL;
        pos=0;
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
        char c = s[i] - 33;
        if (p->next[c] == NULL){
            p->next[c] = new Trie;
        }
        p = p->next[c];
    }
    p->num++;
    p->pos=++dex;
}
void build_ac_automation(Trie *root) //����BFS����AC�Զ���
{
    int head = 0, tail = 0;  //������βָ��
    q[tail++] = root;
    while (head != tail){
        Trie *temp = q[head++];
        for (int i = 0; i < 95; i++){  //������ͷԪ�ص��ӽ��
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
    int flag=0;
    for (int i = 0, len = strlen(T); i < len; i++){
        char c = T[i] - 33;
        while (p->next[c] == NULL && p != root) //����ǰ����û��һ���ַ�Ϊ T[i] �Ķ����ҵ�ǰ���Ǹ��ڵ�
            p = p->fail;                        //˳��ʧ��ָ�������ߣ�ֱ���ҵ����ʵĽڵ������Ϊֹ
        if (p->next[c] != NULL)
            p = p->next[c];
        Trie *temp = p;
        while (temp != root){ //˳��ʧ��ָ�������ߣ�һֱ�������
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
