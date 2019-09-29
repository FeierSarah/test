//给定一个二叉树，判断它是否是高度平衡的二叉树
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 
/*bool _isBalanced(struct TreeNode* root,int* curDepth){
    if(root==NULL)
    {
        *curDepth = 0;
        return true;
    }
    int leftDepth = 0,rightDepth = 0;
    if(_isBalanced(root->left, &leftDepth) && _isBalanced(root->right, &rightDepth) && abs(leftDepth - rightDepth) < 2)
    {
        *curDepth = leftDepth>rightDepth?leftDepth+1:rightDepth+1;
        return true;
    }
    else
    return false;
}
bool isBalanced(struct TreeNode* root){
   int depth = 0;
    return _isBalanced(root,&depth);
}
*/ 
