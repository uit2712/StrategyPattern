#include "pch.h"
#include "PrintDataPreorder.h"

template<class T>
PrintDataPreorder<T>::PrintDataPreorder()
{
	cout << "---------Print Data Preorder---------" << endl;
}

template<class T>
void PrintDataPreorder<T>::PrintData(BTreeNode<T>* node)
{
	if (!node)
		return;

	cout << node->data << " ";
	PrintData(node->leftNode);
	PrintData(node->rightNode);
}

template class PrintDataPreorder<int>;
template class PrintDataPreorder<float>;