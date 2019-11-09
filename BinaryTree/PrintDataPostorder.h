#pragma once
#include "IPrintDataStrategy.h"

template<class T>
class PrintDataPostorder : public IPrintDataStrategy<T>
{
public:
	PrintDataPostorder();
	void PrintData(BTreeNode<T>* node);
};