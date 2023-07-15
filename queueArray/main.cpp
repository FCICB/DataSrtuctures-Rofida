#include <iostream>

using namespace std;

template <class T>
class Queue {
private:
    int last;
    int _front;
    int length;
    T items[100];

public:
    Queue() {
        last = 100 - 1;
        _front = 0;
        length = 0;
    }

    bool isEmpty() {
        return (length == 0);
    }

    bool isFull() {
        return (length == 100);
    }

    void enqueue(T element) {
        if (isFull()) {
            cout << "Queue is full, can't enqueue\n";
        } else {
            last = (last + 1) % 100;
            items[last] = element;
            length++;
        }
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty, can't dequeue\n";
        } else {
            _front = (_front + 1) % 100;
            length--;
        }
    }

    T getFront() {
        if (isEmpty()) {
            cout << "Queue is empty, can't get front\n";
            return T();
        } else {
            return items[_front];
        }
    }

    T getLast() {
        if (isEmpty()) {
            cout << "Queue is empty, can't get last\n";
            return T();
        } else {
            return items[last];
        }
    }

    void printQueue() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
        } else {
            cout << "[ ";
            for (int i = _front; i != last; i = (i + 1) % 100) {
                cout << items[i] << " ";
            }
            cout << items[last] << " ";
            cout << "]" << endl;
        }
    }
};

int main() {
    Queue<int> q;
    q.enqueue(5);
    q.enqueue(10);
    q.enqueue(77);
    q.printQueue();

    return 0;
}
