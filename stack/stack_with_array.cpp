#include <iostream>
#include <stdlib.h>

using namespace std;

#define MAX_NUM 100

class StackArray{

    protected:
        int top;
        int num[MAX_NUM];
    
    public:
        StackArray(){
            top = -1;
        }

        void push(int data){
            if(top == MAX_NUM-1) return;
            top++;
            num[top] = data;
        }

        void pop(){
            if(top == -1) return;
            top--;
        }

        int peek(){
            return num[top];
        }

        bool isEmpty(){
            if(top==-1){
                return true;
            }
            else{
                return false;
            }
        }

        void printer(){
            for(int i = 0 ; i <= top ; i++){
                printf("%d , " , num[i]);
            }
            printf("\n");
        }
};

int main(){
    StackArray stack;
    stack.push(2);stack.printer();
    stack.push(8);stack.printer();
    stack.push(5);stack.printer();
    stack.push(14);stack.printer();
    stack.pop();stack.printer();
}