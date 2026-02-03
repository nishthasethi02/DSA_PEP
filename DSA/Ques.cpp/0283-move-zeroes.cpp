// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         int n = nums.size();
//         int j = 0;
//         for(int i = 0;i <n ; i++){
//             if(nums[i]!=0){
//                 swap(nums[i], nums[j]);
//                 j++;
//             }
//         }
//     }
// };

// // class Solution {
// // public:
// //     void moveZeroes(vector<int>& nums) {
// //         int n = nums.size();
// //         int temp;
// //         for(int i =0;i<n;i++){
// //             for(int j =1;j<n;j++){
// //                 if (nums[j-1]==0 && nums[j]!=0){
// //                     temp = nums[j-1];
// //                     nums[j-1] = nums[j];
// //                     nums[j] = temp;
// //                 }
// //             }
// //         }
// //     }
// // };