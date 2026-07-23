class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        for(int &i : nums){
            i = i*i;
        }
        sort(nums.begin(),nums.end());
        return nums;
    }
};