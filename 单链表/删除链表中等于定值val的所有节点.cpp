//ɾ�������е��ڸ���ֵ val �����нڵ�����

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */ 
 
/*struct ListNode* removeElements(struct ListNode* head, int val)
{
	struct ListNode * newpoint, *lastpoint, *p;
	//����Ϊ��
	if (head == NULL)
		return head;
	//ɾ��ͷ�ڵ�		
	while (head->val == val)
	{
		if (head->next != NULL)
			head = head->next;
		else 
			return NULL;
	}
	p = head;
	//�м�λ��ɾ��
	if (head->next != NULL)
	{
		lastpoint = p;
		p = p->next;
	}
	while (p->next != NULL)
	{
		if (p->val == val)
		{
			p = p->next;
			lastpoint->next = p;
		}
		else
		{
			p = p->next;
			lastpoint = lastpoint->next;
		}
	}
	//β�ڵ�ɾ��
	if (p->val == val)
	{
		lastpoint->next = NULL;
	}
	return head;
}
*/ 

/* 
struct ListNode* removeElements(struct ListNode* head, int val)
{
	struct ListNode* cur, *res;
	cur = head = res;
	if (head == NULL)
		return head;
	else
	{
		while (cur != NULL)
		{
			if (cur->val != val)
			{
			    res->val = cur->val;
			    res = res->next;
			}
		    cur = cur->next;
		}
		res = NULL;
		return res;
	}
}
*/ 
