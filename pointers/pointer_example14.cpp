// Function Pointers

#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int add(int x , int y){
    int result = (x)+(y);
    return result;
}

int main(){
    int (*ptr)(int,int);
    ptr = &add;
    int c = (*ptr)(4,7);
    printf("%d \n" , c);

    //Alternative way of above code
    // ptr = add;
    // c = ptr(4,7);
    // printf("%d \n" , c);
}