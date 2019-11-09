#include "pch.h"
#include "PrintDataPostorder.h"

template<class T>
PrintDataPostorder<T>::PrintDataPostorder()
{
	cout << "---------Print Data Postorder---------" << endl;
}

template<class T>
void PrintDataPostorder<T>::PrintData(BTreeNode<T>* node)
{
	if (!node)
		return;

	PrintData(node->leftNode);
	PrintData(node->rightNode);
	cout << node->data << " ";
}

template class PrintDataPostorder<int>;
template class PrintDataPostorder<float>;