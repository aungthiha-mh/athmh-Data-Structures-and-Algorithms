// Pointer with character array
// Pointer is always passed as call by reference 

#include <iostream>
#include <string.h>

using namespace std;

void printing(char *ptr){
    /*ptr[0] = 'X';
    To not to able to change to character of array like above line , we should use const char *ptr in function arguments */

    while(*ptr != '\0'){
        printf("%c" , *ptr);                 // Value of pointing address
        ptr++;                               // increment of address which pointer is pointing
    }
    printf("\n");
}

int main(){
    char name[] = "Aung Thiha";
    printing(name);
}