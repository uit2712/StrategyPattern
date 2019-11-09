#pragma once

template<class T>
class BTreeNode
{
public:
	T				data;
	BTreeNode<T>*	leftNode;
	BTreeNode<T>*	rightNode;
public:
	BTreeNode(T data);
	~BTreeNode();
};