// Pointer with Arithmetic

#include <iostream>

using namespace std;

int main(){

    int a = 1025;
    int *pointer_a;
    pointer_a = &a;
    cout << "Main Address of 'pointer a'                       = " << &pointer_a << endl;
    cout << "Pointing Address to integer 'a'  (Address of a)   = " << &pointer_a+1 << endl;
    cout << "Value of 'pointer a'                              = " << *pointer_a+1 << endl;

    char *pointer_b;
    pointer_b = (char*)pointer_a;                                                       // Changed to char pointer
    cout << "Size of character          = " << sizeof(char) << endl;

    printf("Value of character c   = %d \n" , *pointer_b+1);
    printf("Address of character c = %d \n" , pointer_b+1);
}