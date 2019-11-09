#pragma once
#include "IPrintDataStrategy.h"

template<class T>
class PrintDataInorder : public IPrintDataStrategy<T>
{
public:
	PrintDataInorder();
	void PrintData(BTreeNode<T>* node);
};