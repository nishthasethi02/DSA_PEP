class Solution {
public:
    int dfs(vector<vector<int>>& grid, vector<vector<bool>>& vis, int r, int c){
        int n = grid.size();
        int m = grid[0].size();

        if(r < 0 || c < 0 || r >= n || c >= m){
            return 0;
        }

        if(grid[r][c] == 0){
            return 0;
        }

        if(vis[r][c]){
            return 0;
        }

        vis[r][c] = true;

        int area = 1;

        area += dfs(grid, vis, r+1, c);
        area += dfs(grid, vis, r-1, c);
        area += dfs(grid, vis, r, c+1);
        area += dfs(grid, vis, r, c-1);

        return area;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<bool>> vis(n, vector<bool>(m, false));

        int ans = 0;

        for(int i = 0 ; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == 1 && !vis[i][j]){
                    int area = dfs(grid, vis, i, j);
                    ans = max(ans, area);
                }
            }
        }
        return ans;
    }
};