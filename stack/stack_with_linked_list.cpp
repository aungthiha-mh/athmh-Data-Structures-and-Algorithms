#include <iostream>
#include <stdlib.h>

using namespace std;

#define MAX_NUM 100

struct Node{
    int data;
    Node *next;
};

Node *top = NULL;

class StackLinkedList{
    
    public:
        StackLinkedList(){
            printf(" Stack with Linked List ! \n\n");
        }

        void push(int data){
            Node *temp = new Node;
            temp->data = data;
            temp->next = top;
            top = temp;
            return;
        }

        void pop(){
            Node *temp = top;
            if(top == NULL) return;
            top = temp->next;
            delete temp;
            return;
        }

        bool isEmpty(){
            if(top == NULL){
                return true;
            }
            else{
                return false;
            }
        }

        void printer(){
            Node *temp = top;
            while(temp != NULL){
                printf("%d , " , temp->data);
                temp = temp->next;
            }
            printf("\n");
        }
};

int main(){
    StackLinkedList stack;
    stack.push(2);stack.printer();
    stack.push(8);stack.printer();
    stack.push(5);stack.printer();
    stack.push(14);stack.printer();
    stack.pop();stack.printer();
}