#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

template <class T>
class BST 
{
    typedef struct Node
    {
        T data;
        Node* left;
        Node* right;
    } *Nptr;

    Nptr head;

    void _makeNode(T);
    void _append(Nptr&, Nptr);
    void _inorder(Nptr);
    T _search(Nptr, T);
 
public:
    BST(): head(NULL) {}
    void print();
    void insert(T);
    T search(T);
};