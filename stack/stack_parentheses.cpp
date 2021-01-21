#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool Pair(char opening , char closing){
    if(opening == '(' && closing == ')') return true;
    else if(opening == '{' && closing == '}') return true;
    else if(opening == '[' && closing == ']') return true;
    
    return false;
}

bool balancing_checking(string exp){

    // Last unclosed , first closed

    stack<char> st;

    for(int i = 0 ; i < exp.length() ; i++){
        if(exp[i] == '(' || exp[i] == '[' || exp[i] == '{'){
            st.push(exp[i]);
        }
        else if(exp[i] == ')' || exp[i] == ']' || exp[i] == '}'){
            if(st.empty() || Pair(st.top(),exp[i]) == false)
                return false;
            else{
                st.pop();
            }
        }
    }
    return st.empty() ? true:false;
}

int main(){
    string expression;
    cin >> expression;
    bool check = balancing_checking(expression);
    if(check == true){
        printf("Yes , it is balanced !");
    }
    else{
        printf("No , it is not balanced !");
    }
}  