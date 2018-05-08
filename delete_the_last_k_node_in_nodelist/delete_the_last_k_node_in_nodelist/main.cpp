#include <iostream>
using namespace std;

struct ListNode 
{
	int value;
	struct ListNode* next;
};
//返回要删除的节点
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
			return NULL;//在这里需要使用全局变量之类的返回，输入的k值过大吗？
		}
	}
	while (temp->next != NULL) 
	{
		tempBegin = tempBegin->next;
		temp = temp->next;
	}
	return tempBegin;
}