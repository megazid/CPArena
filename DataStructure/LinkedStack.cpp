#include<iostream>
// #include<stdafx.h>
using namespace std;

class Node
{
    public:
        int data;
        Node *next;
        Node(){
            data = 0;
            next = NULL;
        }

};

Node* top = NULL;

void push(int item){
   Node* newnode = new Node;
   newnode->data = item;
    if(top==NULL){
        top = newnode;
        newnode->next = NULL;
    }
    else{
        Node* temp = newnode;
        newnode->next = top;
        top = temp;
    }
}

void pop(){
    if(top==NULL){
        cout<<"stack is empty\n";
    }
    else{
        Node* del = top;
        top = top->next;
        delete del;
    }
}
int main(){
    push(50);
    push(70);
    pop(); 
    return 0;
}