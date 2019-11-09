#pragma once
#include "IPrintDataStrategy.h"

template<class T>
class PrintDataPreorder : public IPrintDataStrategy<T>
{
public:
	PrintDataPreorder();
	void PrintData(BTreeNode<T>* node);
};