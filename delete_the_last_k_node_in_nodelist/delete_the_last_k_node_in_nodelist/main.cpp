#include <iostream>
using namespace std;

struct ListNode 
{
	int value;
	struct ListNode* next;
};
//����Ҫɾ���Ľڵ�
ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) 
{
	if (pListHead == NULL) 
	{
		return NULL;
	}
	if (k < 1) 
	{
		return NULL;
	}
	ListNode* temp = pListHead;
	ListNode* tempBegin = pListHead;
	for (int i = 1; i < k; i++) 
	{
		if (temp->next != NULL) 
		{
			temp = temp->next;
		}
		else 
		{
			return NULL;//��������Ҫʹ��ȫ�ֱ���֮��ķ��أ������kֵ������
		}
	}
	while (temp->next != NULL) 
	{
		tempBegin = tempBegin->next;
		temp = temp->next;
	}
	return tempBegin;
}