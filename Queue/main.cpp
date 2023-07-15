#include <iostream>

using namespace std;

struct node{
    int info;
    node* link;
};

class Queue{
private:
    node* Front;
    node* rear;
    int length;

public:
    Queue(){
        Front = rear=NULL;
        length=0;

    }
    bool isEmpty(){
        return Front == NULL;

    }

    void enQueue (int item){
        node* newNode = new node;
        if (isEmpty()){
            Front = newNode;
            Front->info = item;
            Front->link = NULL;
            rear = Front;

        }
        else{
            newNode->info = item;
            newNode->link = NULL;
            rear->link = newNode;
            rear = newNode;
        }
        length++;

    }

    void deQueue(){
        if(isEmpty()){
            cout<<"Queue is Empty!"<<endl;
        }
        else
        {
            if (Front == rear){
                Front = rear = NULL;
            }
            else{
                node* temp = Front;
                Front = Front->link;
                temp->link = NULL;
                delete temp;

            }
            length--;

        }

    }

    int getFront(){
        if(isEmpty()){
            cout<<"Queue is empty!"<<endl;
        }
        else {
            return Front->info;
        }
    }

    int getBack(){
        if(isEmpty()){
            cout<<"Queue is empty!"<<endl;
        }
        else {
            return rear->info;
        }
    }

    void clearQueue(){
        node* curr;
        while(curr != NULL){
            curr = Front;
            Front = Front->link;
            delete curr;

        }
        rear = NULL;
        length =0;
    }

    void display(){
        if (isEmpty()){
            cout<<"Error, Queue is Empty!"<<endl;
        }
        else{
            node* curr = Front;
            while (curr!= NULL){
                cout<<curr->info<<" ";
                curr = curr->link;
        }
        }


    }

    int getSize(){
        return length;
    }



};
int main()
{
    Queue q;
    q.enQueue(155);
     q.enQueue(10);
      q.enQueue(10);
      q.display();
      q.deQueue();
      cout<<endl;
      q.display();
    return 0;
}
