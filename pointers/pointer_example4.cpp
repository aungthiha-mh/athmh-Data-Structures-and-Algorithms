// Void Pointer

#include <iostream>

using namespace std;

int main(){

    int a = 1025;
    int *pointer_a;
    pointer_a = &a;
    cout << "Address of integer ' a'                           = " << &a << endl;
    cout << "Main Address of 'pointer a'                       = " << &pointer_a << endl;
    cout << "Pointing Address to integer 'a'  (Address of a)   = " << pointer_a << endl;
    cout << "Value of 'pointer a'                              = " << *pointer_a << endl;

    void *pointer_b;
    pointer_b = pointer_a;                                                       // Changed to char pointer
    cout << "Size of character          = " << sizeof(char) << endl;
    printf("Address of character c = %d \n" , pointer_b);
}