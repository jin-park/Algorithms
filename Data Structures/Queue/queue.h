#include <iostream>
using namespace std;

template <class T>
class Queue
{
    typedef struct Node
    {
        Node *next;
        T data;
    } *Nptr;

    Nptr head;

    void _makeNode(T);
    void _enque(Nptr&, Nptr);
    T _deque(Nptr&);
    void _print(Nptr);
public:
    Queue(): head(NULL), length(0) {}
    void enque(T);
    T deque(); 
    // void insert(int, T);
    void print();
    int length;
};
