//����һ��������, �ҵ�����������ָ���ڵ������������ȡ�
//�ٶȰٿ�������������ȵĶ���Ϊ���������и��� T ��������� p��q������������ȱ�ʾΪһ����� x��
//���� x �� p��q �������� x ����Ⱦ����ܴ�һ���ڵ�Ҳ���������Լ������ȣ���

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 /*
 int FindNode(struct TreeNode* root, struct TreeNode* node)
 {
    if(root == NULL)
        return 0;
    if(root == node)
        return 1;
    return FindNode(root->left, node) || FindNode(root->right, node);
 }
struct TreeNode* lowestCommonAncestor(struct TreeNode* root, struct TreeNode* p, struct TreeNode* q) {
    if(root == NULL)
    return NULL;
    if(root == p || root == q)
        return root;
    //����
    int pL, pR, qL, qR;
    if (FindNode(root->left, p))
    {
        pL = 1;
        pR = 0;
    }
    else
    {
        pL = 0;
        pR = 1;
    }
    if (FindNode(root->left, q))
    {
        qL = 1;
        qR = 0;
    }
    else
    {
        qL = 0;
        qR = 1;
    }
    if(pL == 1 && pR == 0 && qL == 1 && qR == 0)
    {
        return lowestCommonAncestor(root->left, p, q);
    }
    else if(pL == 0 && pR == 1 && qL == 0 && qR == 1)
    {
        return lowestCommonAncestor(root->right, p, q);
    }
    else
        return root;
}
*/
