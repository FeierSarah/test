//��Ŀ����
//����һ�ö��������������ö���������ת����һ�������˫������Ҫ���ܴ����κ��µĽ�㣬ֻ�ܵ������н��ָ���ָ��

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
        //���������
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
