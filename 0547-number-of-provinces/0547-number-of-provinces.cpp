class Solution {
public:
    void dfs(int city, vector<vector<int>>& isConnected, vector<bool>& isVisited){
        // mark the curr city as visited
        isVisited[city] = true;

        for(int neighborCity = 0; neighborCity < isConnected.size(); neighborCity++){
            if(isConnected[city][neighborCity] == 1 && !isVisited[neighborCity]){
                dfs(neighborCity, isConnected, isVisited);
            }
        }
    }


    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<bool> isVisited(n, false);
        int provinceCount = 0;

        // loop over all the cities
        for(int i  =0; i< n; i++){
            if(!isVisited[i]){
                // call dfs
                dfs(i, isConnected, isVisited);
                provinceCount++;
            }
        }
        return provinceCount;
    }
};