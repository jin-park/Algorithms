#include "bst.h"

template <class T>
void BST<T>::insert(T data) { _makeNode(data); }

template <class T>
void BST<T>::_makeNode(T data)
{
    Nptr node = new Node();
    node->data = data;
    node->left = node->right = NULL;

    _append(head, node);
}

template <class T>
void BST<T>::_append(Nptr& Ptr, Nptr node)
{
    if (!Ptr)
    {
        Ptr = node;
    }
    else if (Ptr->data < node->data) { _append(Ptr->right, node); }
    else { _append(Ptr->left, node); }
}

template <class T>
void BST<T>::print() { _inorder(head); }

template <class T>
void BST<T>::_inorder(Nptr Ptr)
{
    if (Ptr)
    {
        _inorder(Ptr->left);
        cout << Ptr->data << " ";
        _inorder(Ptr->right);
    }
}

template <class T>
T BST<T>::search(T data) { return _search(head, data);}

template <class T>
T BST<T>::_search(Nptr Ptr, T data)
{
    if (Ptr)
    {
        if (Ptr->data == data) { return data; }
        else if (Ptr->data > data) { return _search(Ptr->left, data); }
        else { return _search(Ptr->right, data); }
    }
    return T();
}