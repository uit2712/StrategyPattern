#pragma once
#include "BTreeNode.h"
#include "IPrintDataStrategy.h"

template<class T>
class BTree
{
public:
	BTreeNode<T>*		root;
public:
	BTree(T rootValue);
	~BTree();

	void Insert(T data);
	void PrintData(IPrintDataStrategy<T>* printDataStrategy);
private:
	void Insert(int data, BTreeNode<T>* node);
};