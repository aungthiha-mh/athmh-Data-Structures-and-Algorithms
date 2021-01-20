// Pointer as function returns

#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int* add(int *x , int *y){
    int *result = new int;
    *result = (*x)+(*y);
    return result;
}

int main(){
    int a = 10 , b = 5;
    int *ptr = add(&a,&b);
    printf("%d \n" , *ptr);
}