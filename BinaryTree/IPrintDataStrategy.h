#pragma once
#include "BTreeNode.h"
#include <iostream>

using namespace std;

template<class T>
class IPrintDataStrategy
{
public:
	virtual void PrintData(BTreeNode<T>* node) = 0;
};

template class IPrintDataStrategy<int>;
template class IPrintDataStrategy<float>;