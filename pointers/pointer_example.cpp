#include <iostream>

using namespace std;

int main(){
    int a ;
    cout << "Address of interger 'a'   = " << &a << endl;

    a = 5;
    cout << "Address of interger 'a'   = " << &a << endl;

    int *pointer;
    pointer = &a;
    cout << "Address of interger 'a'   = " << &a << endl;
    cout << "Main Address of 'pointer'      = " << &pointer << endl;
    cout << "Value of interger 'a'     = " << a << endl;
    cout << "Value of 'pointer'        = " << *pointer << endl;

    *pointer = 10;
    cout << "Value of interger 'a'     = " << a << endl;
    cout << "Value of 'pointer'        = " << *pointer << endl;
    cout << "Here address of pointer is equal to address of interger 'a' - " << pointer << endl;
}