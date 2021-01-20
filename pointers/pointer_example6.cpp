// Function call by reference with Pointer

#include <iostream>

using namespace std;

void add(int *number){
    *number = *number + 5;
}

int main(){

    int a = 5;
    add(&a);
    printf("Result : %d \n" , a);
    
}