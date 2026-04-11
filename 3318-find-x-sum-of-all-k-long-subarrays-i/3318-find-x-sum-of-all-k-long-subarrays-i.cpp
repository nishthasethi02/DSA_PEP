class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        int n = nums.size();
        vector<int> result;

        for (int i = 0; i <= n - k; i++) {
            unordered_map<int, int> freq;

            // Step 1: count frequency in window
            for (int j = i; j < i + k; j++) {
                freq[nums[j]]++;
            }

            // Step 2: move to vector for sorting
            vector<pair<int, int>> vec;
            for (auto it : freq) {
                vec.push_back({it.second, it.first}); // {freq, value}
            }

            // Step 3: sort
            sort(vec.begin(), vec.end(), [](auto &a, auto &b) {
                if (a.first == b.first)
                    return a.second > b.second; // larger value first
                return a.first > b.first;       // higher freq first
            });

            // Step 4: take top x
            int sum = 0;
            for (int j = 0; j < min(x, (int)vec.size()); j++) {
                sum += vec[j].first * vec[j].second;
            }

            result.push_back(sum);
        }

        return result;
    }
};