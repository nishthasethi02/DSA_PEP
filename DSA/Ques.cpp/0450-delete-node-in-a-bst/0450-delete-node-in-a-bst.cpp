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

 // Step 1. find the node to be deleted by comparisons
 // Step 2. Restructure it's children while preserving BST Orders
 //         There can be 3 cases for deleting a node
 //         Case 1. No children (leaf node) -> this canm be deleted directly
 //         Case 2. One child -> replace the current node with its only child
 //         Case 3. two children -> to maintain the BST order, we can either choose inorder successor
 //                 (smallest value RST) or inorder predecessor(largest value in LST) and replace with
 //                 current node
 
class Solution {
public:
    TreeNode* inorderSuccessor(TreeNode* node){
        while(node->left != NULL){
            node = node->left;
        }
        return node;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root == NULL){
            return NULL;
        }
        if(key < root->val){
            root->left = deleteNode(root->left, key);
        }
        else if(key > root->val){
            root->right = deleteNode(root->right, key);
        }
        else{
            // Case 1 -> Node has no left child
            // in this replace the node with its right child
            if(root->left == NULL){
                TreeNode* temp = root->right;
                delete root;
                return temp;
            }
            // Case 2 -> Node has no right child
            // in this replace the node with its left child
            else if(root->right == NULL){
                TreeNode* temp = root->left;
                delete root;
                return temp;
            }
            // Case 3 -> Node has 2 children
            // find the inorder successor
            TreeNode* temp = inorderSuccessor(root->right);
            // copy the min element value in the node which we were supposed to delete
            root->val = temp->val;
            // delete the successor from RST as we have already copied the value
            root->right = deleteNode(root->right, temp->val);
        }
        return root;
    }
};