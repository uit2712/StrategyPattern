#include "pch.h"
#include "BTree.h"

template<class T>
BTree<T>::BTree(T rootValue)
{
	root = new BTreeNode<T>(rootValue);
}

template<class T>
BTree<T>::~BTree()
{
	if (root)
	{
		delete root;
		root = nullptr;
	}
}

template<class T>
void BTree<T>::Insert(T data)
{
	Insert(data, root);
}

template<class T>
void BTree<T>::PrintData(IPrintDataStrategy<T>* printDataStrategy)
{
	if (printDataStrategy)
		printDataStrategy->PrintData(root);
}

template<class T>
void BTree<T>::Insert(int data, BTreeNode<T>* node)
{
	if (!node)
	{
		node = new BTreeNode<T>(data);
		return;
	}

	if (data == node->data)
		return;

	if (data < node->data)
	{
		if (!node->leftNode)
		{
			node->leftNode = new BTreeNode<T>(data);
			return;
		}

		Insert(data, node->leftNode);
	}

	if (data > node->data)
	{
		if (!node->rightNode)
		{
			node->rightNode = new BTreeNode<T>(data);
			return;
		}

		Insert(data, node->rightNode);
	}
}

template class BTree<int>;
template class BTree<float>;