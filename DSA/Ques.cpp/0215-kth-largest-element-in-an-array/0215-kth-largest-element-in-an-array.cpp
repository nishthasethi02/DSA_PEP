class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> minHeap;

        for(int i : nums){
            minHeap.push(i);

            if(minHeap.size() > k){
                minHeap.pop();
            }
        }

        return minHeap.top();
    }
};

// class Solution {
// public:
//     int findKthLargest(vector<int>& nums, int k) {
//         sort(nums.begin(), nums.end());
//         reverse(nums.begin(), nums.end());
//         return nums[k-1];
//     }
// };