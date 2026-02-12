class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        stack<int> st;
        vector<int> result;
        unordered_map<int, int> np;
        for(int i = n2 - 1; i >= 0; i--){
            while(!st.empty() && st.top() <= nums2[i]){
                st.pop();
            }
            if(st.empty()){
                np[nums2[i]] = -1;
            }
            else{
                np[nums2[i]] = st.top();
            }
            st.push(nums2[i]);
        }
        for(int i = 0; i < nums1.size(); i++){
            result.push_back(np[nums1[i]]);
        }
        return result;
    }
};