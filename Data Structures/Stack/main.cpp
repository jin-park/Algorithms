#include "Stack.cpp"

int main()
{
    Stack<int> myStack = Stack<int>();
    myStack.push(0);
    myStack.push(1);
    myStack.push(2);
    // myStack.print();
    cout << myStack.pop() << endl; 
    cout << "\n";
    myStack.print();
}