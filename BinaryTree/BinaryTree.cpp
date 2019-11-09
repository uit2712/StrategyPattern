#include "pch.h"
#include "BTree.h"
#include "PrintDataInorder.h"
#include "PrintDataPostorder.h"
#include "PrintDataPreorder.h"

int main()
{
	int randomIntArr[] = { 15, -4, 9, 7, 8, 3, 3, 25, 7, 39, 69, 88, -35, -77 };
	int size = sizeof(randomIntArr) / sizeof(int);
	if (size == 0)
		return 0;

	BTree<int>* binaryTree = new BTree<int>(randomIntArr[0]);
	for (unsigned int i = 1; i < size; i++)
	{
		binaryTree->Insert(randomIntArr[i]);
	}

	binaryTree->PrintData(new PrintDataInorder<int>());
	cout << endl;
	binaryTree->PrintData(new PrintDataPostorder<int>());
	cout << endl;
	binaryTree->PrintData(new PrintDataPreorder<int>());
	cout << endl;
}