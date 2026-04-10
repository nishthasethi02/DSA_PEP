class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        
        // Step 1: Sort each row
        for(int i = 0; i < m; i++) {
            sort(grid[i].begin(), grid[i].end());
        }
        
        int sum = 0;
        
        // Step 2: Traverse column-wise from last
        for(int col = n - 1; col >= 0; col--) {
            int maxi = 0;
            
            for(int row = 0; row < m; row++) {
                maxi = max(maxi, grid[row][col]);
            }
            
            sum += maxi;
        }
        
        return sum;
    }
};