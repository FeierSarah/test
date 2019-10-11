//题目描述
//输入一棵二叉搜索树，将该二叉搜索树转换成一个排序的双向链表。要求不能创建任何新的结点，只能调整树中结点指针的指向。

/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/

/* 
class Solution {
public:
    void _Convert(TreeNode* root, TreeNode** prev)
    {
        if(root == NULL)
            return;
        //中序，左根右
        _Convert(root->left, prev);
        root->left = *prev;
        if(*prev)
           (*prev)->right = root;
        *prev = root;
        _Convert(root->right, prev);
    }
    TreeNode* Convert(TreeNode* pRootOfTree)
    {
        if(pRootOfTree == NULL)
            return NULL;
        TreeNode* prev = NULL;
        _Convert(pRootOfTree, &prev);
        TreeNode* head = pRootOfTree;
        while(head && head->left)
            head = head->left;
        return head;
    }
};
*/ 
