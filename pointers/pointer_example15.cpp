// Function Pointers
// Function Pointers are mostly used as function arguments

#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

void printing(){
  printf("Hello Aung Thiha !");
}

void func_pointer(void (*ptr)()){
    ptr();
}

int main(){
    // void (*ptr)() = &printing;
    // func_pointer(ptr);

    // Or simply write above two lines in one line below
    func_pointer(printing);            // Because printing function returns pointer and it is call-back function
}