class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> temp(n, 0);
        stack<int> st;
        for(int i = temperatures.size() - 1; i >= 0; i--){
            while(!st.empty() && temperatures[st.top()] <= temperatures[i]){
                st.pop();
            }
            if(!st.empty()){
            temp[i] = st.top() - i;
            }
            st.push(i);
        }
        return temp;
    }
};