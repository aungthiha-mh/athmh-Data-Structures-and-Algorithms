// Pointer with character array
// Pointer with 2-D

#include <iostream>
#include <string.h>

using namespace std;

int main(){
    int a[5] = {12,34,53,62,100};
    int b[2][3] = {{10,20,30},{50,70,80}};
    int c[3][2][2] = {{{1,3},{2,4}},{{5,7},{6,8}},{{9,13},{11,15}}};
    int *pa = a;
    int (*pb)[3] = b;
    int (*pc)[2][2] = c;

    printf("Address of array 'a' =    %d           %d           %d           %d           %d \n" , &a[0],&a[1],&a[2],&a[3],&a[4]);

    printf("Address of array 'b[0]' = %d           %d           %d \n" , &b[0][0],&b[0][1],&b[0][2]);
    printf("Address of array 'b[1]' = %d           %d           %d \n" , &b[1][0],&b[1][1],&b[1][2]);

    printf("Address of array 'c[0]' = %d           %d           %d           %d \n" , &c[0][0][0],&c[0][0][1],&c[0][1][0],&c[0][1][1]);
    printf("Address of array 'c[1]' = %d           %d           %d           %d \n" , &c[1][0][0],&c[1][0][1],&c[1][1][0],&c[1][1][1]);
    printf("Address of array 'c[0]' = %d           %d           %d           %d \n \n" , &c[2][0][0],&c[2][0][1],&c[2][1][0],&c[2][1][1]);

    printf("%d %d %d \n" , a , *a);
    printf("%d %d %d \n" , b , *b , **b);
    printf("%d %d %d \n \n" , c , *c , ***c);

    printf("%d %d \n" , a+1 , *a+1);
    printf("%d %d %d \n" , b+1 , *b+1 , **b+1);
    printf("%d %d %d \n" , c+1 , *c+1 , ***c+1);
}