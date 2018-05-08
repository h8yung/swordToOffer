//binary search tree
#include <iostream>
using namespace std;
bool VerifySequenceOfBST(int sequence[], int length) 
{
	if (sequence == NULL || length < 1) return false;
	int root_value = sequence[length - 1];
	int iLeft = 0;
	while (sequence[iLeft] < root_value&&iLeft < length) iLeft++;
	//这里应该设置true，可以从退出条件判断，需要重点关注，自己刚开始默认设置为了false
	bool left = true, right = true;
	if (iLeft < length) 
	{
		int iRight = iLeft;
		while (sequence[iRight] > root_value&&iRight < length) iRight++;
		if (iRight < length-1) return false;
	}
	if (iLeft>0) 
	{
		left = VerifySequenceOfBST(sequence, iLeft);//判断左子树是不是二叉搜索树
	}
	if (iLeft < length-1) 
	{
		right = VerifySequenceOfBST(sequence + iLeft, length - iLeft-1);//判断右子树是不是二叉搜索树
	}
	return left&&right;
}
int main() 
{
	int a[] = { 5,7,6,9,11,10,8 };
	cout << VerifySequenceOfBST(a, 7) << endl;
	int b[] = { 7,4,6,5 };
	cout << VerifySequenceOfBST(b, 4) << endl;
	system("pasue");
	return 0;
}
