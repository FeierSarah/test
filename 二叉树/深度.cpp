//给定一个二叉树，找出其最大深度。
//二叉树的深度为根节点到最远叶子节点的最长路径上的节点数。 

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

/* 
int maxDepth(struct TreeNode* root){
    return root ? 1 + fmax(maxDepth(root->left), maxDepth(root->right)) : 0;
}
*/ 

