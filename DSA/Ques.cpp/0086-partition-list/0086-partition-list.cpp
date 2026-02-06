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
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        // dummy nodes
        ListNode* left = new ListNode(-1);
        ListNode* right = new ListNode(-1);

        ListNode* leftptr = left;
        ListNode* rightptr = right;

        ListNode* p1 = head;

        while(p1 != NULL){
            if(p1->val < x){
                left->next = p1;
                left = left->next;
            }else{
                right->next = p1;
                right = right->next;
            }
            p1 = p1->next;
        }
        right->next = NULL;
        left->next = rightptr->next;
        return leftptr->next;
    }
};