class Solution {
public:
    bool isValid(string s) {
        // create a stack

        // iterate on string s and check for opening type of bracket
        // if found then push in the stack

        // else compare the top element with the s[i]
        // if same then pop the top

        stack<char> st;
        for(char ch : s){
            if(ch == '(' || ch == '{' || ch == '['){
                st.push(ch);
            }
            else{
                if(st.empty()) return false;

                char top = st.top();
                if((ch == ')' && top == '(') ||
                (ch == '}' && top == '{') ||
                (ch == ']' && top == '[')){
                    st.pop();
                }
                else{
                    return false;
                }
            }
        }
        return st.empty();
    }
};