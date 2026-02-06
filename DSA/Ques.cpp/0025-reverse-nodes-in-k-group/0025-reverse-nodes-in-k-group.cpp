// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        // count the k nodes
        // check if there are atleast k nodes remaining
        // count

        // reverse exactly k nodes
        // use that previously done iterative method for k nodes only

        // recursively process the remaining LL;
        ListNode* curr = head;
        int count = 0;
        while(curr != NULL && count < k){
            curr=curr->next;
            count++;
        }
        if(count == k){

            ListNode* newNode = NULL;;
            ListNode* prev = NULL;
            ListNode* currNode = head;
            int count2 = 0;
            while(count2 < k){
                newNode = currNode->next;
                currNode->next = prev;
                prev = currNode;
                currNode = newNode;
                count2++;
            }
            head->next = reverseKGroup(currNode, k);
            return prev;
        }
        return head;
    }
};