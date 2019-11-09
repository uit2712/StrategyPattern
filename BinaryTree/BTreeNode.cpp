#include "pch.h"
#include "BTreeNode.h"

template<class T>
BTreeNode<T>::BTreeNode(T data)
{
	this->data = data;
	leftNode = rightNode = nullptr;
}

template<class T>
BTreeNode<T>::~BTreeNode()
{
	if (leftNode)
	{
		delete leftNode;
		leftNode = nullptr;
	}

	if (rightNode)
	{
		delete rightNode;
		rightNode = nullptr;
	}
}

template class BTreeNode<int>;
template class BTreeNode<float>;