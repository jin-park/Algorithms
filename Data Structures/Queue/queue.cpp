#include "queue.h"

template <class T>
void Queue<T>::print()
{
    _print(head);
}

template <class T>
void Queue<T>::_print(Nptr Ptr)
{
    while (Ptr->next != NULL)
    {
        cout << Ptr->data << endl;
        Ptr = Ptr->next;
    }
    cout << Ptr->data << endl;
}

template <class T>
void Queue<T>::enque(T data)
{
    _makeNode(data);
    ++length;
}

template <class T>
void Queue<T>::_makeNode(T data)
{
    Nptr node = new Node();
    node->next = NULL;
    node->data = data;
    _enque(head,node);
}

template <class T>
void Queue<T>::_enque(Nptr& Ptr, Nptr node)
{
    if (Ptr == NULL)
    {
        Ptr = node;
        return;
    }
    else if (Ptr->next == NULL)
    {
        Ptr->next = node;
        return;
    }
    _enque(Ptr->next, node);
}

template <class T>
T Queue<T>::deque()
{
    --length;
    return _deque(head);
}

template <class T>
T Queue<T>::_deque(Nptr& Ptr)
{
    T data = Ptr->data;
    Nptr temp = Ptr;
    Ptr = Ptr->next;
    delete temp;
    return data;
}
