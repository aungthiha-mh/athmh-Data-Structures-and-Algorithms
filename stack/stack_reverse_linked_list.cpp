#include <iostream>
#include <stdlib.h>
#include <stack>

using namespace std;

struct Node{
    int data;
    Node *next;
};

Node *head;

void reverse();
void printer();

int main(){
    //Create 3 Nodes
    Node *node_one = new Node;
    Node *node_two = new Node;
    Node *node_three = new Node;
    node_one->data = 24;
    node_two->data = 42;
    node_three->data = 100;
    node_one->next = node_two;
    node_two->next = node_three;
    node_three->next = NULL;
    head = node_one;

    reverse();
    printer();
}

void reverse(){
    if(head==NULL) return;
    stack<Node*> st;
    Node *temp = head;
    while(temp != NULL){
        st.push(temp);
        temp = temp->next;
    }
    temp = st.top();
    head = temp;
    st.pop();
    while(!st.empty()){
        temp->next = st.top();
        st.pop();
        temp = temp->next;
    }
    temp->next = NULL;
}

void printer(){
    Node *temp = head;
    while(temp != NULL){
        printf("%d " , temp->data);
        temp = temp->next;
    }
    printf("\n");
}