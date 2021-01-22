#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

#define MAX_NUM 10

class QueueArray{
    protected:
        int num[MAX_NUM];
        int front;
        int rear;

    public:
        QueueArray(){
            printf("Here's the Queue");
            front = -1;
            rear = -1;
        }

        bool isEmpty(){
            if(front == -1 && rear == -1){
                return true;
            }
            else{
                return false;
            }
        }

        bool isFull(){
            if(front == 0 && rear == MAX_NUM-1){
                return true;
            }
            else{
                return false;
            }
        }

        int peek(){
            return num[front];
        }

        void enqueue(int data){
            if(isEmpty()){
                printf("\n");
                printf("Queue is empty !\n");
                front = 0;
                rear = 0;
            }

            else if(isFull()){
                printf("Queue is full");
                return;
            }
            num[rear] = data;
            rear++;
        }

        void dequeue(){
            if(isEmpty()){
                printf("Queue is empty");
                return;
            }

            else if(rear == front){
                front = -1;
                rear = -1;
                return;
            }

            else{
                (front++) % MAX_NUM;
            }
        }

        void printing_queue(){
            printf("\n");
            for(int i = front ; i < rear ; i++){
                printf("%d , " , num[i]);
            }
            printf("\n");
            
        }
};  

int main(){
    QueueArray queue;
    queue.enqueue(2);
    queue.enqueue(5);
    queue.enqueue(7);
    queue.enqueue(4);
    queue.printing_queue();
    queue.dequeue();
    queue.printing_queue();
    queue.dequeue();
    queue.printing_queue();
    queue.dequeue();
    queue.printing_queue();
    queue.dequeue();
    queue.printing_queue();
}