// 给定两个二叉树，编写一个函数来检验它们是否相同。

//如果两个树在结构上相同，并且节点具有相同的值，则认为它们是相同的。

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

/* 
bool isSameTree(struct TreeNode* p, struct TreeNode* q)
{
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
*/ 


