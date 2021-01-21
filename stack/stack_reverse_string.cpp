#include <iostream>
#include <stack>
#include <string>
#include <stdio.h>
#include <cstring>

using namespace std;

void reverse(char name[] , int length){
    stack<char> st;
    for(int i = 0 ; i < length ; i++ ){
        st.push(name[i]);
    }
    for(int i = 0 ; i < length ; i++){
        name[i] = st.top();
        st.pop();
    }
}

int main(){
    char name[50];
    
    printf("Normal name - ");
    cin.get(name , 50);
    reverse(name,strlen(name));
    printf("Reverse name - %s" , name);
}