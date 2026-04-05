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
    int currentCount = 0;
    int maxCount = 0;
    TreeNode* prev = NULL;
    vector<int> result;

    void inorder(TreeNode* root) {
        if (!root) return;

        inorder(root->left);

        // Process current node
        if (prev && prev->val == root->val) {
            currentCount++;
        } else {
            currentCount = 1;
        }

        if (currentCount > maxCount) {
            maxCount = currentCount;
            result.clear();
            result.push_back(root->val);
        } else if (currentCount == maxCount) {
            result.push_back(root->val);
        }

        prev = root;

        inorder(root->right);
    }

    vector<int> findMode(TreeNode* root) {
        inorder(root);
        return result;
    }
};