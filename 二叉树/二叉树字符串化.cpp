//你需要采用前序遍历的方式，将一个二叉树转换成一个由括号和整数组成的字符串。
//空节点则用一对空括号 "()" 表示。而且你需要省略所有不影响字符串与原始二叉树之间的一对一映射关系的空括号对。
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/* 
void _tree2str(struct TreeNode* root,char* str)
{
    if(root == NULL)
        return;
    //节点数据--->字符串
    char valuestr[15];
    //itoa(root->val, valuestr, 10);
    sprintf(valuestr, "%d", root->val);
    strcat(str, valuestr);

    //左子树
    if(root->left == NULL)
    {
        if(root->right)
        {
            strcat(str, "()");
            strcat(str, "(");
            _tree2str(root->right, str);
            strcat(str, ")");
        }
        else
        {
            return;
        }
    }
    else
    {
        strcat(str, "(");
        _tree2str(root->left, str);
        strcat(str, ")");
        if(root->right)
        {
            strcat(str, "(");
            _tree2str(root->right, str);
            strcat(str, ")");
        }
        else
            return;
    }
}
char * tree2str(struct TreeNode* t){
    char* str = (char*)malloc(sizeof(char) * 1000 * 100);
    //初始化
    str[0] = '\0';
    _tree2str(t, str);
    return str;
}
*/ 
