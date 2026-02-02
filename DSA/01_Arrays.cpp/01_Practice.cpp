// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
// 2 pointers approach

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& numbers, int target) {
//         int i = 0;
//         int j = numbers.size() - 1;

//         while(i < j){
//             int sum = numbers[i]+numbers[j];

//             if(sum == target){
//                 return {i+1, j+1};
//             }
//             else if(sum < target){
//                 i++;
//             }
//             else{
//                 j--;
//             }
//         }
//         return {};
//     }
// };

// https://www.geeksforgeeks.org/problems/triplet-sum-in-array-1587115621/1

// 3 Pointers Approach
// class Solution {
//   public:
//     bool hasTripletSum(vector<int> &arr, int target) {
//         // Code Here
//         sort(arr.begin(), arr.end());
//         int i = 0;
//         for(int i = 0; i < arr.size(); i++){
//             int j = i + 1;
//             int k = arr.size() - 1;
//             while(j < k){
//                 int sum = arr[i] + arr[j] + arr[k];
//                 if ( sum == target){
//                     return true;
//                 }
//                 else if ( sum < target){
//                     j++;
//                 }
//                 else{
//                     k--;
//                 }
//             }
//         }    
//         return false;
//     }
// };

// https://www.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1
// class Solution {
//   public:
//     void sort012(vector<int>& arr) {
//         // code here
//         int low = 0;
//         int mid = 0;
//         int high = arr.size() - 1;
//         while(mid <= high){
//             if(arr[mid]==0){
//                 swap(arr[low++], arr[mid++]);
//             }
//             else if(arr[mid]==1){
//                 mid++;
//             }
//             else{
//                 swap(arr[high], arr[mid]);
//                 high--;
//             }
//         }
//     }
// };