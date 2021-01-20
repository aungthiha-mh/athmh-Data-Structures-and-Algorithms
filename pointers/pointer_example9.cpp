// Pointer with character array
// Pointer and Array are different types but similar manners

#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char name[] = "Aung Thiha";
    int len = strlen(name);
    printf("%d \n" , len);
    printf("%d \n \n" , sizeof(name));

    char *p;
    p = name;
    printf("%c \n" , *name);
}