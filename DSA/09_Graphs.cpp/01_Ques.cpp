// https://www.geeksforgeeks.org/problems/bfs-traversal-of-graph/1

// https://www.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1

// https://www.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1

// https://leetcode.com/problems/number-of-provinces/description/

// https://leetcode.com/problems/flood-fill/description/

// https://www.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1

// https://www.geeksforgeeks.org/problems/topological-sort/1

// DFS
// class Solution {
//   public:
  
//     void dfs(int node, vector<vector<int>> &adj, vector<bool> &visited, stack<int> &st){
//         visited[node] = true;
//         for(auto neighbor : adj[node]){
//             if(!visited[neighbor]){
//                 dfs(neighbor, adj, visited, st);
//             }
//         }
//         st.push(node);
//     }
//     vector<int> topoSort(int V, vector<vector<int>>& edges) {
//         // code here
//         vector<vector<int>> adj(V);
//         for(auto &i : edges){
//             int u = i[0];
//             int v = i[1];
            
//             adj[u].push_back(v);
//         }
//         vector<bool> visited(V, false);
//         stack<int> st;
        
//         // call dfs for all unvisited nodes
//         for(int i = 0; i< V; i++){
//             if(!visited[i]){
//                 // dfs
//                 dfs(i, adj, visited, st);
//             }
//         }
//         vector<int> result;
//         while(!st.empty()){
//             result.push_back(st.top());
//             st.pop();
//         }
//         return result;
//     }
// };

// BFS 
// class Solution {
//   public:
//     // compute indegree of every node
//     // push all the nodes with indegree = 0 in the queue
//     // remove nodes one by one from queue, and add them to your answer
//     // for each removed node, decrease the indegree of its neighbor by 1
//     // if any neighbor becomes indegree == 0, push that in queue
//     // number of visited nodes != number of vertices -> cycle exists
//     vector<int> topoSort(int V, vector<vector<int>>& edges) {
//         vector<vector<int>> adj(V);
//         for(auto &i : edges){
//             int u = i[0];
//             int v = i[1];
            
//             adj[u].push_back(v);
//         }
    
//         // create indegree vector
//         vector<int> indegree(V, 0);
//         for(int i = 0; i < V; i++){
//             for(auto j : adj[i]){
//                 indegree[j]++;
//             }
//         }
    
//         // push all the vertices with indegree 0 in the queue
//         queue<int> q;
//         for(int i = 0; i < V; i++){
//             if(indegree[i] == 0){
//                 q.push(i);
//             }
//         }
    
//         vector<int> result;
//         while(!q.empty()){
//             int node = q.front();
//             q.pop();
//             result.push_back(node);
        
//             for(auto neighbor : adj[node]){
//                 indegree[neighbor]--;
            
//                 if(indegree[neighbor] == 0){
//                     q.push(neighbor);
//                 }
//             }
//         }
//         if(result.size() != V){
//             return {};
//         }
//         return result;
//     }
// };

// https://leetcode.com/problems/number-of-islands/