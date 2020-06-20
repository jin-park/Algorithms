#include <iostream>
using namespace std;

template <class T>
class Stack
{
    typedef struct Node
    {
        Node *next;
        T data;
    } *Nptr;

    Nptr head;

    void _makeNode(T);
    void _push(Nptr&, Nptr&);
    void _print();
    T _pop(Nptr&);
public:
    Stack();
    int size;
    T last;
    void push(T);
    void print();
    T pop();
};