//����Ҫ����ǰ������ķ�ʽ����һ��������ת����һ�������ź�������ɵ��ַ�����
//�սڵ�����һ�Կ����� "()" ��ʾ����������Ҫʡ�����в�Ӱ���ַ�����ԭʼ������֮���һ��һӳ���ϵ�Ŀ����Ŷԡ�
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
    //�ڵ�����--->�ַ���
    char valuestr[15];
    //itoa(root->val, valuestr, 10);
    sprintf(valuestr, "%d", root->val);
    strcat(str, valuestr);

    //������
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
    //��ʼ��
    str[0] = '\0';
    _tree2str(t, str);
    return str;
}
*/ 
