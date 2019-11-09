#include "pch.h"
#include "PrintDataInorder.h"

template<class T>
PrintDataInorder<T>::PrintDataInorder()
{
	cout << "---------Print Data Inorder---------" << endl;
}

template<class T>
void PrintDataInorder<T>::PrintData(BTreeNode<T>* node)
{
	if (!node)
		return;

	PrintData(node->leftNode);
	cout << node->data << " ";
	PrintData(node->rightNode);
}

template class PrintDataInorder<int>;
template class PrintDataInorder<float>;