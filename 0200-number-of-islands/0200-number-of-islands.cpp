class Solution {
public:
    void dfs(vector<vector<char>>& grid, vector<vector<bool>>& vis, int r, int c){
        int n = grid.size();
        int m = grid[0].size();

        if(r < 0 || c < 0 || r >= n || c >= m){
            return;
        }

        if(grid[r][c] == '0'){
            return;
        }

        if(vis[r][c]){
            return;
        }

        vis[r][c] = true;

        dfs(grid, vis, r-1, c);
        dfs(grid, vis, r+1, c);
        dfs(grid, vis, r, c-1);
        dfs(grid, vis, r, c+1);
    }
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<bool>> vis(n, vector<bool>(m, false));
        int count = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == '1' && !vis[i][j]){
                    dfs(grid, vis, i, j);
                    count++;
                }
            }
        }
        return count;
    }
};