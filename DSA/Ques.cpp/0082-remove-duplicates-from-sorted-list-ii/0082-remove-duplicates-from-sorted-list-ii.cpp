/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next,.

*     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* left = new ListNode(-1);
        ListNode* leftptr = left;

        ListNode* curr = head;

        while(curr!=NULL){
            if(curr->next != NULL && curr->val == curr->next->val){
                int dup = curr->val;

                while(curr != NULL && curr->val == dup){
                    curr = curr->next;
                }
            }
            else{
                leftptr->next = curr;
                leftptr = curr;
                curr = curr->next;
            }
        }
        leftptr->next = NULL;
        return left->next; // not including dummy
    }
};