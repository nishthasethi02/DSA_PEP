class Solution {
public:
    int atmost(vector<int>& nums, int k) {
        int n = nums.size();
        int l = 0;
        int oddcount = 0;
        int subcount = 0;

        for(int r = 0; r < n; r++){
            if(nums[r] %  2 != 0){
                oddcount++;
            }

            while(oddcount > k){
                if(nums[l] % 2 != 0){
                    oddcount--;
                }
                l++;
            }
            subcount += (r - l + 1);
        }
        return subcount;
    }

    int numberOfSubarrays(vector<int>& nums, int k) {
        return atmost(nums, k) - atmost(nums, k - 1);
    }
};