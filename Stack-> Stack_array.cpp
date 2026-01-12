#include <iostream>
using namespace std;

int q[5], front = 0, rear = -1;

void enqueue(int x) {
    if(rear == 4)
        cout << "Queue Full\n";
    else
        q[++rear] = x;
}

void dequeue() {
    if(front > rear)
        cout << "Queue Empty\n";
    else
        front++;
}

int main() {
    enqueue(10);
    enqueue(20);
    dequeue();
    cout << "Queue operations performed";
    return 0;
}
