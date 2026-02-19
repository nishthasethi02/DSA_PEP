/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> result;

        if(root == NULL) return result;
        // outer map -> for horizontal distance (automatically sorts it - left to right)
        // inner map -> for depths/levels (automatically sorts level - top to bottom)
        map<int, map<int, multiset<int>>> node;
        // each element in queue stores ->TreeNode -> the curr node, int(hd), int(depth)
        queue<pair<TreeNode*, pair<int, int>>> q;

        q.push(make_pair(root,make_pair(0, 0)));

        while(!q.empty()){
            pair<TreeNode*, pair<int, int>> temp = q.front();
            q.pop();

            TreeNode* curr = temp.first;
            int hd = temp.second.first;
            int level = temp.second.second;

            node[hd][level].insert(curr->val);

            // if left exists -> hd will be -1 and -> level will be +1
            if(curr->left){
                q.push(make_pair(curr->left, make_pair(hd-1, level+1)));
            }
            // if right exists -> hd will be +1 and -> level will be +1
            if(curr->right){
                q.push(make_pair(curr->right, make_pair(hd+1, level+1)));
            }
        }
        for(auto i : node){
            vector<int> columnAns;
            for(auto &levelPair : i.second){
                for(auto values : levelPair.second){
                    columnAns.push_back(values);
                }
            }        
            result.push_back(columnAns);
        }
        return result;
    }
};