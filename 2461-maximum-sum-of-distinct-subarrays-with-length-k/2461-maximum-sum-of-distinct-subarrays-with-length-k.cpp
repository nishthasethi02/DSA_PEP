class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        long long windowsum = 0;
        long long maxsum = 0;
        int left = 0;
        for(int right = 0; right < nums.size(); right++){
            windowsum += nums[right];
            mp[nums[right]]++;
            if(right - left + 1 == k){
                if(mp.size() == k){
                    maxsum = max(maxsum, windowsum);
                }
                mp[nums[left]]--;
                windowsum -= nums[left];
                if(mp[nums[left]] == 0){
                    mp.erase(nums[left]);
                }
                left++;
            }
        }
        return maxsum;
    }
};