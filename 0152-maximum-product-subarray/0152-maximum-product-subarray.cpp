class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();

        // Base case
        int currMax = nums[0];
        int currMin = nums[0];
        int ans = nums[0];

        for(int i = 1; i < n; i++) {
            int temp = currMax;  // store old currMax

            currMax = max(nums[i],
                           max(nums[i] * currMax, nums[i] * currMin));

            currMin = min(nums[i],
                           min(nums[i] * temp, nums[i] * currMin));

            ans = max(ans, currMax);
        }

        return ans;
    }
};