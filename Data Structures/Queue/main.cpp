#include "queue.cpp"

int main()
{
    Queue<int> myQueue = Queue<int>();
    for (int i = 0;i < 5;++i)
    {
        myQueue.enque(i);
    }
    myQueue.print();
    cout << "\n" << myQueue.deque() << endl;
    cout << "\n";
    myQueue.print();
}
