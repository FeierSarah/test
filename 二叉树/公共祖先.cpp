//给定一个二叉树, 找到该树中两个指定节点的最近公共祖先。
//百度百科中最近公共祖先的定义为：“对于有根树 T 的两个结点 p、q，最近公共祖先表示为一个结点 x，
//满足 x 是 p、q 的祖先且 x 的深度尽可能大（一个节点也可以是它自己的祖先）。

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
    //搜索
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
