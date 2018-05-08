#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct BinaryTreeNode 
{
	int value;
	BinaryTreeNode *pLeft, *pRight;
	BinaryTreeNode(int x) :value(x), pLeft(NULL), pRight(NULL) {}
};
void shownum(int num) 
{
	cout << num << " ";
}
void BstSumPathCore(BinaryTreeNode *pRoot, int curSum, int sum, vector<int> &path) 
{
	curSum += pRoot->value;
	path.push_back(pRoot->value);
	bool isLeaf = (pRoot->pLeft == NULL) && (pRoot->pRight == NULL);
	if (isLeaf) 
	{
		cout << curSum << ":";
		for_each(path.begin(), path.end(), shownum);
		cout << endl;
	}
	if (pRoot->pLeft) 
	{
		BstSumPathCore(pRoot->pLeft, curSum, sum, path);
	}
	if (pRoot->pRight) 
	{
		BstSumPathCore(pRoot->pRight, curSum, sum, path);
	}
	path.pop_back();
}
void BstSumPath(BinaryTreeNode *pRoot,int sum)
{
	if (pRoot == NULL) 
	{
		return;
	}
	vector<int> path;
	BstSumPathCore(pRoot, 0, sum, path);
}
void test() 
{
	BinaryTreeNode *p1 = new BinaryTreeNode(10);
	BinaryTreeNode *p2 = new BinaryTreeNode(5);
	BinaryTreeNode *p3 = new BinaryTreeNode(12);
	BinaryTreeNode *p4 = new BinaryTreeNode(4);
	BinaryTreeNode *p5 = new BinaryTreeNode(7);
	p1->pLeft = p2;
	p1->pRight = p3;
	p2->pLeft = p4;
	p2->pRight = p5;
	BstSumPath(p1, 22);
	return;
}
int main() 
{
	test();
	system("pause");
	return 0;
}