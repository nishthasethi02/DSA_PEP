class Solution {
public:
    int countSoldiers(vector<int>& row) {
        int left = 0, right = row.size() - 1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            if (row[mid] == 1)
                left = mid + 1;
            else
                right = mid - 1;
        }
        return left; // number of 1s
    }
    
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int, int>> strength; // {soldiers, index}
        
        for (int i = 0; i < mat.size(); i++) {
            int soldiers = countSoldiers(mat[i]);
            strength.push_back({soldiers, i});
        }
        
        sort(strength.begin(), strength.end());
        
        vector<int> result;
        for (int i = 0; i < k; i++) {
            result.push_back(strength[i].second);
        }
        
        return result;
    }
};