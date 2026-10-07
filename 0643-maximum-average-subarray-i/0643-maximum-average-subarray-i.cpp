class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int winsum = 0;
        for(int i = 0; i < k; i++){
            winsum += nums[i];
        }
        int maxsum = winsum;
        int left = 0;
        for(int right = k; right < n; right++){
            winsum += nums[right];
            winsum -= nums[left];
            left++;
            maxsum = max(maxsum, winsum);
        }
        return (double)maxsum/k;
    }
};