class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        queue<pair<int, int>> q;
        int freshcount = 0;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(grid[i][j] == 2){
                    q.push({i, j});
                }else if(grid[i][j] == 1){
                    freshcount++;
                }
            }
        }

        if(freshcount == 0) return 0;
        int mins = -1;
        int changedRow[4] = {-1, 1, 0, 0};
        int changedCol[4] = {0, 0, 1, -1};
        while(!q.empty()){
            int size = q.size();
            mins++;

            for(int i = 0; i < size; i++){
                pair<int, int> current = q.front();
                q.pop();
                int row = current.first;
                int col = current.second;

                for(int j = 0 ; j < 4; j++){
                    int newRow = row + changedRow[j];
                    int newCol = col + changedCol[j];

                    if(newRow >= 0 && newRow < m && newCol >= 0 && newCol < n && grid[newRow][newCol] == 1){
                        grid[newRow][newCol] = 2;
                        q.push({newRow, newCol});

                        freshcount--;
                    }
                }
            }
        }
        if(freshcount > 0) return -1;
        return mins;
    }
};