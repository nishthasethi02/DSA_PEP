class Solution {
public:
    void dfs(vector<vector<int>>& grid, int r, int c){
        int n = grid.size();
        int m = grid[0].size();

        if(r < 0 || c < 0 || r >= n || c >= m){
            return;
        }

        if(grid[r][c] == 0){
            return;
        }

        grid[r][c] = 0;

        dfs(grid, r+1, c);
        dfs(grid, r-1, c);
        dfs(grid, r, c+1);
        dfs(grid, r, c-1);
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        for(int i = 0; i < n; i++){
            if(grid[i][0] == 1){
                dfs(grid, i, 0);
            }

            if(grid[i][m-1]){
                dfs(grid, i, m-1);
            }
        }

        for(int j = 0; j < m; j++){
            if(grid[0][j]){
                dfs(grid, 0, j);
            }

            if(grid[n-1][j]){
                dfs(grid, n-1, j);
            }
        }

        int ans = 0;

        for(int i = 0; i< n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == 1){
                    ans++;
                }
            }
        }
        return ans;
    }
};