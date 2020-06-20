#include "bst.cpp"
#include <ctime>

int main()
{
    BST<int> tree = BST<int>();
    srand(time(0));
    int test;
    for (int i = 0;i < 10;i++)
    {
        int j = rand()%100;
        test = j;
        cout << j << " ";
        tree.insert(j);
    }
    cout << "\n";
    tree.print();
    cout << endl;
    cout << tree.search(test) << endl;
    cout << tree.search(3000) << endl;
    return 0;
}