// Pointer and dynamic memory ( Stack vs Heap )

#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main(){
    int a;
    int *ptr;
    ptr = new int;
    *ptr = 10;
    printf("%d" , *ptr);
    delete ptr;

    ptr = new int[10];
    delete[] ptr;
}