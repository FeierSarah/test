//编一个程序，读入用户输入的一串先序遍历字符串，根据此字符串建立一个二叉树（以指针方式存储）。 
//例如如下的先序遍历字符串： ABC##DE#G##F### 其中“#”表示的是空格，空格字符代表空树。建立起此二
//叉树以后，再对二叉树进行中序遍历，输出遍历结果。

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
