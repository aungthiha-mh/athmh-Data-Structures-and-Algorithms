// Pointer with changing pointer variable types

#include <iostream>

using namespace std;

int main(){

    int a = 1025;
    int *pointer_a;
    pointer_a = &a;
    cout << "Main Address of integer 'a'                       = " << &a << endl;
    cout << "Main Address of 'pointer a'                       = " << &pointer_a << endl;
    cout << "Pointing Address to integer 'a'  (Address of a)   = " << pointer_a << endl;
    cout << "Value of 'pointer a'                              = " << *pointer_a << endl;

    char *pointer_b;
    pointer_b = (char*)pointer_a;                                                       // Changed to char pointer
    cout << "Size of character          = " << sizeof(char) << endl;

    printf("Value of character c   = %d \n" , *pointer_b);
    // Above line is because 1025 = 00000000 00000000 00000100 00000001 = 4byte(32bits) and char can store 1byte(8bits) and so result is 2 .
    printf("Address of character c = %d \n" , pointer_b);
}