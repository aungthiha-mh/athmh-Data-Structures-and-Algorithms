// Pointer with array as function arguments

#include <iostream>
using namespace std;

void doubleNum(int no[] ,int size){
    
    int result = 0;
    for(int i= 0 ; i <size ; i++){
        no[i] = no[i] * 2;
    }
}

int main(){
    int num[] = {10,20,30,40,50,60,80};
    int size = sizeof(num)/sizeof(num[0]);
    doubleNum(num , size);                                  // Array as function arguments are always passed as reference parameters

    for(int i=0; i <size ; i++){
        printf("Value at address - %d is %d \n" , &num[i] , num[i]);
    }
}