class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        int n = asteroids.size();
        for(int i = 0; i < n; i++){
            bool destroyed = false;
            while(!st.empty() && st.top() > 0 && asteroids[i] < 0){
                int topVal = st.top();

                if(abs(topVal) < abs(asteroids[i])){
                    st.pop();
                    continue;
                }
                // if top is greater, i explode
                else if(abs(topVal) > abs(asteroids[i])){
                    destroyed = true;
                }
                else{
                    st.pop();
                    destroyed = true;
                }
                break;
            }
            if(!destroyed) {
                st.push(asteroids[i]);
            }
        }
        vector<int> result(st.size());
        for(int i = st.size()-1; i>=0; i--){
            result[i] = st.top();
            st.pop();
        }
        return result;
    }
};