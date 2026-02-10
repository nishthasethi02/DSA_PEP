#include <iostream>
#include <stack>
#include <bits/stdtr1c++.h>
using namespace std;

void reverseString(string str){
    stack<string> st;

    for(int i = 0;i < str.length(); i++){
        string word = "";
        while(str[i] != ' ' && i < str.length()){
            word += str[i];
            i++;
        }
        reverse(word.begin(), word.end());
        st.push(word);
    }
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    } cout << endl;
}

int main(){
    reverseString("Hello how are you?");
}