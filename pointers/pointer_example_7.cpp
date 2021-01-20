// Pointer with array

#include <iostream>

using namespace std;

int main(){
    int num[5] = {10,20,30,40,50};

    for(int i = 0 ; i <= 4 ; i++){
        int *p;
        p = &num[i] ;
        printf("Value of num[%d] at address - %d is %d \n" , i , &num[i] , *p);
    }
    
}