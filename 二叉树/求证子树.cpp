// 给定两个非空二叉树 s 和 t，检验 s 中是否包含和 t 具有相同结构
//和节点值的子树。s 的一个子树包括 s 的一个节点和这个节点的所有子孙。
//s 也可以看做它自身的一棵子树。

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


