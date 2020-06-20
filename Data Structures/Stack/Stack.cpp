#include "Stack.h"

template <class T>
Stack<T>::Stack()
{
    head = NULL;
    size = 0;
}

template <class T>
void Stack<T>::print()
{
    _print();
}

template <class T>
void Stack<T>::_print()
{
    Nptr Ptr = head;
    while (Ptr->next != NULL)
    {
        cout << Ptr->data << endl;
        Ptr = Ptr->next;
    }
    cout << Ptr->data << endl;
}

template <class T>
void Stack<T>::push(T data)
{
    _makeNode(data);
    ++size;
}

template <class T>
void Stack<T>::_makeNode(T data)
{
    Nptr node = new Node();
    node->next = NULL;
    node->data = data;
    _push(head, node);
}

template <class T>
void Stack<T>::_push(Nptr& Ptr, Nptr& node)
{
    node->next = Ptr;
    Ptr = node;
    last = head->data;
}

template <class T>
T Stack<T>::pop()
{
    --size;
    last = head->data;
    return _pop(head);
}

template <class T>
T Stack<T>::_pop(Nptr& Ptr)
{
    T data = head->data;
    Nptr temp = Ptr;
    Ptr = Ptr->next;
    delete temp;
    return data;
}