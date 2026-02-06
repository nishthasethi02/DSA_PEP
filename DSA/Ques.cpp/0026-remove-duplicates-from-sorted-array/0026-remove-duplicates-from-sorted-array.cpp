class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int j = 0;
        for(int i = 1; i < n; i++){
            if(nums[i] != nums[j]){
                j++;
                nums[j] = nums[i];
            }
        }
        return j + 1;
    }
};

// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//         int n = nums.size();
//         int i = 0;
//         for(int j = 1; j < n; j++){
//             if(nums[j] != nums[i]){
//                 i++;
//                 nums[i] = nums[j];
//             }
//         }
//         return i + 1;
//     }
// };