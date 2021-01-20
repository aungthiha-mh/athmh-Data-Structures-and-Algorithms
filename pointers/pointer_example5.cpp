// Pointer to Pointer

#include <iostream>

using namespace std;

int main(){

    int a = 5;
    int *pointer_a;
    pointer_a = &a;
    printf("Address of interger 'a'                            = %d \n" , &a );
    printf("Pointing Address to integer 'a'  (Address of a)    = %d \n" , pointer_a ) ;
    printf("Value of 'pointer a'                               = %d \n" , *pointer_a ) ;

    int **pointer_b;
    pointer_b = &pointer_a;
    printf("Pointing Address to pointer 'a' (Address of 'a')   = %d \n" , *pointer_b);
    printf("Value of 'pointer b'                               = %d \n" , **pointer_b ) ;

    int ***pointer_c;
    pointer_c = &pointer_b;
    printf("Pointing Address to pointer 'a' (Address of 'a')   = %d \n" , **pointer_c);
    printf("Value of 'pointer b'                               = %d \n" , ***pointer_c ) ;

    **pointer_b = 25;
    ***pointer_c = 23;
    printf("Value of integer 'a'                               = %d \n" , a ) ;
}