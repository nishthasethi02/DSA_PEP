// https://www.geeksforgeeks.org/problems/reverse-an-array/1

// class Solution {
//   public:
//     void reverseArray(vector<int> &arr) {
//         // code here
//         int i = 0;
//         int j = arr.size() - 1;
        
//         while(i < j){
//             swap(arr[i++], arr[j--]);
//         }
//     }
// };


// https://www.geeksforgeeks.org/problems/check-if-an-array-is-sorted0701/1

// class Solution {
//   public:
//     bool isSorted(vector<int>& arr) {
//         // code here
//         int n = arr.size() - 1;
//         for(int i = 0; i < n; i++){
//             if ( arr[i] > arr[i+1]){
//                 return false;
//             }
//         }
//         return true;
//     }
// };


// https://www.geeksforgeeks.org/problems/sum-of-array2326/1

// // User function template for C++
// class Solution {
//   public:
//     // Function to return sum of elements
//     int arraySum(vector<int>& arr) {
//         // code here
//         int sum = 0;
//         for (int i = 0; i <= arr.size() - 1; i++){
//             sum+=arr[i];
//         }    
//         return sum;
//     }
// };


// https://www.geeksforgeeks.org/problems/largest-element-in-array4009/1

// class Solution {
//   public:
//     int largest(vector<int> &arr) {
//         // code here
//         int max = arr[0];
//         for (int i = 1; i <= arr.size() - 1; i++){
//             if (arr[i]>max){
//                 max = arr[i];
//             }
//         }
//         return max;
//     }
// };


// https://www.geeksforgeeks.org/problems/second-largest3735/1

// class Solution {
//   public:
//     int getSecondLargest(vector<int> &arr) {
//         // code here
//         int n = arr.size() - 1;
//         int max1 = INT_MIN;
//         int max2 = INT_MIN;
//         for(int i : arr){
//             if (i > max1){
//                 max2 = max1; 
//                 max1 = i;
//             } else if (i > max2 && i < max1){
//                 max2 = i;
//             }
//         }
//         return max2 == INT_MIN ? -1 : max2;
//     }
// };


// https://www.geeksforgeeks.org/problems/third-largest-element/1


// https://leetcode.com/problems/max-consecutive-ones/submissions/1894188808/

// class Solution {
// public:
//     int findMaxConsecutiveOnes(vector<int>& nums) {
//         int currCount = 0;
//         int maxCount = 0;
//         for ( int i : nums){
//             if (i == 1){
//                 currCount++;
//                 maxCount = max(maxCount, currCount);
//             }
//             else{
//                 currCount = 0;
//             }
//         }
//         return maxCount;
//     }
// };