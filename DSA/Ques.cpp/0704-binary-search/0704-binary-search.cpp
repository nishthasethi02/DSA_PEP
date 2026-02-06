class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;

        while(start <= end){
            int mid = (start + end) / 2;
            if (nums[mid] == target){
                return mid;
            }else if(nums[mid] < target){
                start = mid + 1;
            }else{
                end = mid - 1;
            }
        }
        return -1;
    }
};









// #include <iostream>
// using namespace std;
// int binarySearch(int arr[], int n, int target) {
//     int low = 0, high = n - 1;
//     while (low <= high) {
//         int mid = low + (high - low) / 2;
//         if (arr[mid] == target) {
//             return mid;
//         }
//         else if (arr[mid] < target) {
//             low = mid + 1;
//         }
//         else {
//             high = mid - 1;
//         }
//     }
//     return -1;
// }
// int main(){
//     int nums[] = {-1,0,3,5,9,12};
//     int target;
//     cin>>target;
//     int n = sizeof(nums)/sizeof(nums[0]);
//     int result = binarySearch(nums, n, target);
//     if (result != -1) {
//         cout << "Target found at index " << result << endl;
//     } else {
//         cout << "Target not found" << endl;
//     }
// }

// class Solution {
// public:
//     int search(int nums[], int n, int target) {
//         int low = 0, high = n - 1;
//         while (low <= high) {
//             int mid = low + (high - low) / 2;
//             if (nums[mid] == target) return mid;
//             else if (nums[mid] < target) low = mid + 1;
//             else high = mid - 1;
//         }
//         return -1;
//     }
// };

// int main() {
//     int nums[] = {-1, 0, 3, 5, 9, 12};
//     int n = sizeof(nums) / sizeof(nums[0]);
//     int target;
//     cout << "Enter target: ";
//     cin >> target;

//     Solution sol;
//     int result = sol.search(nums, n, target);

//     if (result != -1)
//         cout << "Target found at index " << result << endl;
//     else
//         cout << "Target not found" << endl;

//     return 0;
// }