/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    ListNode* head;

    int getLength(ListNode* head) {
        int len = 0;
        while (head) {
            len++;
            head = head->next;
        }
        return len;
    }

    TreeNode* buildBST(int left, int right) {
        if (left > right) return NULL;

        int mid = (left + right) / 2;

        // Build left subtree
        TreeNode* leftChild = buildBST(left, mid - 1);

        // Root node
        TreeNode* root = new TreeNode(head->val);
        root->left = leftChild;

        // Move list pointer
        head = head->next;

        // Build right subtree
        root->right = buildBST(mid + 1, right);

        return root;
    }

    TreeNode* sortedListToBST(ListNode* head) {
        this->head = head;
        int size = getLength(head);
        return buildBST(0, size - 1);
    }
};