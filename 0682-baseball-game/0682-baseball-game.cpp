class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;

        for(string s : operations){
            if(s == "C"){
                st.pop();
            }
            else if(s == "D"){
                st.push(2*st.top());
            }
            else if(s == "+"){
                int n1 = st.top(); 
                st.pop();
                int n2 = st.top();
                st.push(n1);
                st.push(n1 + n2);
            }
            else{
                st.push(stoi(s));
            }
        }

        int sum = 0;
        while(!st.empty()){
            sum+=st.top();
            st.pop();
        }
        return sum;
    }
};