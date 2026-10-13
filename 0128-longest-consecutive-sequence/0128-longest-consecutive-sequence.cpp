class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        int longest = 0;
        for(int x : st){
            if(st.find(x - 1) == st.end()){
                int count = 1;
                int num = x;
                while(st.find(num + 1) != st.end()){
                    num++;
                    count++;
                }
                longest = max(longest, count);
            }
        }
        return longest;
    }
};