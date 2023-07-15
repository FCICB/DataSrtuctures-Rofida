#include <iostream>

using namespace std;

int MxSize = 100;

template <class T>
class Stack {
    int top;
    T items[100];

public:
    Stack() {
        top = -1;
    }

    void push(T element) {
        if (top >= MxSize - 1) {
            cout << "The stack is full, can't push a new element\n";
        } else {
            top++;
            items[top] = element;
        }
    }

    bool isEmpty() {
        if (top == -1)
            return true;
        else
            return false;
    }

    void pop() {
        if (isEmpty()) {
            cout << "The stack is empty, can't pop\n";
        } else {
            top--;
        }
    }

    T getTop() {
        if (isEmpty()) {
            cout << "Stack is empty\n";
            // Return a default value for T
            return T();
        } else {
            return items[top];
        }
    }

    void printStack() {
        if (isEmpty()) {
            cout << "Stack is empty, can't print anything\n";
        } else {
            cout << "[";
            for (int i = top; i >= 0; i--) {
                cout << items[i] << " ";
            }
            cout << "]" << endl;
        }
    }
};

int main() {
    Stack<int> s;
    s.push(5);
    s.push(7);
    s.push(10);
    s.push(11);
    s.printStack();
    cout << "==============================\n";
    s.pop();
    s.printStack();
    cout << "==============================\n";
    cout << "top = " << s.getTop() << endl;

    return 0;
}
