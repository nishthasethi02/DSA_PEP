class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        vector<int> ans;
        
        for(int i = 0; i < nums.size(); i += 2) {
            ans.push_back(nums[i+1]); // second smallest
            ans.push_back(nums[i]);   // smallest
        }
        
        return ans;
    }
};