class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int left = 0;
        int sum = 0;
        int minlen = n + 1;
        for(int right = 0; right < n; right++){
            sum += nums[right];
            while(sum >= target){
                minlen = min(minlen, right - left + 1);
                sum -= nums[left];
                left++;
            }
        }
        return (minlen == n+1)?0:minlen;
    }
};