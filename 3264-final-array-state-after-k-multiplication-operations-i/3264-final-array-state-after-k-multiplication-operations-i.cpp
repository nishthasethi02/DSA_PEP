class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        
        // Min heap (value, index)
        priority_queue<pair<long long,int>, vector<pair<long long,int>>, greater<>> pq;
        
        int n = nums.size();
        
        // Step 1: push all elements
        for (int i = 0; i < n; i++) {
            pq.push({nums[i], i});
        }

        // Step 2: perform k operations
        while (k--) {
            auto [val, idx] = pq.top();
            pq.pop();

            val = val * multiplier;
            nums[idx] = val;

            pq.push({val, idx});
        }

        return nums;
    }
};