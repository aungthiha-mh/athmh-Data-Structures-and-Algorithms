#include <iostream>

using namespace std;

struct Node{
    int data;
    Node *next;
};

Node *front = NULL;
Node *rear =  NULL;

class QueueLinkedList{

    public:
        QueueLinkedList(){
            printf("\nQueue is started !\n");
        }

        bool isEmpty(){
            if(front==NULL && rear == NULL) return true;
            else return false;
        }

        int peek(){
            Node *temp = front;
            return temp->data;
        }

        void enqueue(int data){
            Node *temp = new Node;
            temp->data = data;
            temp->next = NULL;
            if(isEmpty()){
                front = rear = temp;
            }
            else{
                rear->next = temp;
                rear = temp;
            }
        }

        void dequeue(){
            Node *temp = front;
            if(isEmpty()) return;
            else if(temp == rear){
                front=rear=NULL;
            }
            else{
                front = front->next;
            }
            delete temp;
        }

        void transverse(){
            printf("\n");
            Node *temp = front;
            while(temp != NULL){
                printf("%d , " , temp->data);
                temp = temp->next;
            }
            printf("\n");
        }
};

int main(){
    QueueLinkedList queue;
    queue.enqueue(82);
    queue.enqueue(100);
    queue.enqueue(15);
    queue.enqueue(79);
    queue.transverse();
    queue.dequeue();
    queue.transverse();
    queue.dequeue();
    queue.transverse();
}