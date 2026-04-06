class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector<pair<int, int>> arr;
        
        // Store score with index
        for(int i = 0; i < n; i++) {
            arr.push_back({score[i], i});
        }
        
        // Sort in descending order
        sort(arr.rbegin(), arr.rend());
        
        vector<string> result(n);
        
        for(int i = 0; i < n; i++) {
            if(i == 0)
                result[arr[i].second] = "Gold Medal";
            else if(i == 1)
                result[arr[i].second] = "Silver Medal";
            else if(i == 2)
                result[arr[i].second] = "Bronze Medal";
            else
                result[arr[i].second] = to_string(i + 1);
        }
        
        return result;
    }
};