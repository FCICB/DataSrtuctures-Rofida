#include <iostream>

using namespace std;
struct node{
    int info;
    node* link;
};
class Stack{
private:
    node* top;

public:

    Stack (){
        top = NULL;
    }

    void push(int newItem){

        node* newNode = new node;
        if(newNode == NULL){
            cout<<"Error can't allocate new node in memory \n";
        }
        else{
            newNode->info= newItem;
            newNode->link= top;
            top = newNode;

        }

    }

    bool isEmpty(){
        return top==NULL;
    }

    void pop(){
        if(isEmpty()){
            cout<<"Stack is Empty \n";
        }
        else{
            node* temp = top;
            top = top->link;
            temp = temp->link = NULL;
            delete temp;

        }
    }

    int getTop(){
        if(isEmpty()){
            cout<<"Stack is Empty \n";
            return 0;
        }
        else{
            int tempItem = top->info;
            node* temp = top;
            top = top->link;
            temp = temp->link = NULL;
            delete temp;
            return tempItem;

        }
    }

    void display (){
        node* curr = top;
        cout<<"[ ";
        while(curr !=NULL){
            cout<<curr->info<<" ";
            curr = curr->link;

        }
        cout<<" ]";


    }


};
int main()
{
    Stack s ;
    s.push(10);
    s.push(20);
    s.push(300);
    s.display();
    s.pop();
    s.display();

    return 0;
}
