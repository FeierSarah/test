//��һ�����򣬶����û������һ����������ַ��������ݴ��ַ�������һ������������ָ�뷽ʽ�洢���� 
//�������µ���������ַ����� ABC##DE#G##F### ���С�#����ʾ���ǿո񣬿ո��ַ����������������˶�
//�����Ժ��ٶԶ������������������������������

/* 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct BTNode
{
    char _data;
    struct BTNode* _left;
    struct BTNode* _right;
}BTNode;
void Inorder(BTNode* root)
{
    if(root)
    {
        Inorder(root->_left);
        printf("%c ",root->_data);
        Inorder(root->_right);
    }
}
BTNode* CreatBTree(char* str, int* pi)
{
    if(str[*pi] != '#')
    {
        BTNode* root = (BTNode*) malloc(sizeof(BTNode));
        root->_data = str[*pi];
        ++(*pi);
        root->_left = CreatBTree(str, pi);
        ++(*pi);
        root->_right = CreatBTree(str, pi);
        return root;
    }
    else
        return NULL;
}
int main()
{
    int *i=0;
    char str[101];
    scanf("%s", str);
    BTNode* root = CreatBTree(str, i);
    Inorder(root);
    printf("\n");
}
*/ 
