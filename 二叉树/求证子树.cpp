// ���������ǿն����� s �� t������ s ���Ƿ������ t ������ͬ�ṹ
//�ͽڵ�ֵ��������s ��һ���������� s ��һ���ڵ������ڵ���������
//s Ҳ���Կ����������һ��������

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 
 /* 
bool isSameTree(struct TreeNode* p, struct TreeNode* q){
    if( p == NULL && q == NULL )
    {
	    return true;
    }
    else if( (p == NULL && q != NULL) || (p != NULL && q == NULL))
	{
    	return false;
    }
    bool left_tree	= isSameTree(p->left,q->left);
    bool right_tree	= isSameTree(p->right,q->right);
    if( left_tree && right_tree && ( p->val == q->val ))
    {
       	return true;
    }
    else
	{
	    return false;
    }
}

bool isSubtree(struct TreeNode* s, struct TreeNode* t){
    if(s==NULL)
    return false;
    if(s->val==t->val&&isSameTree(s,t))
        return true;
    return isSubtree(s->left,t)||isSubtree(s->right,t);
}
*/ 


