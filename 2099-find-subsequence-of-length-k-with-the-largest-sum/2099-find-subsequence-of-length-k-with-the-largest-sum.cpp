class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<pair<int,int>> arr;
        
        for (int i = 0; i < nums.size(); i++) {
            arr.push_back({nums[i], i});
        }
        
        // Sort by value descending
        sort(arr.begin(), arr.end(), [](auto &a, auto &b) {
            return a.first > b.first;
        });
        
        // Take top k
        vector<pair<int,int>> topK(arr.begin(), arr.begin() + k);
        
        // Sort by original index
        sort(topK.begin(), topK.end(), [](auto &a, auto &b) {
            return a.second < b.second;
        });
        
        vector<int> result;
        for (auto &p : topK) {
            result.push_back(p.first);
        }
        
        return result;
    }
};