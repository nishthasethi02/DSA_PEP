/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// class Solution {
// public:
//     ListNode *detectCycle(ListNode *head) {
//         ListNode* slow = head;
//         ListNode* fast = head;

//         while(fast!=NULL && fast->next!=NULL){
            
//         }
//     }
// };

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
       // if(head == NULL) return NULL;
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast){
                slow = head;

            while(slow!=fast){
                slow=slow->next;
                fast=fast->next;
            }
            return fast;
            }
        }
        return NULL;
    }
};

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

 // initialise slow and fast at head
 // move slow by 1 and fast by 2 steps until they intersect
 // the intersection point should be kept safe
 // then move slow back to head
 // move slow by 1 and intersection by 1 step
 // where the slow intersect again with the new variable or with fast is the starting node

// class Solution {
// public:
//     ListNode *detectCycle(ListNode *head) {
//         if (head == NULL) return NULL;
//         ListNode* slow = head;
//         ListNode* fast = head;

//         while(fast != NULL && fast->next != NULL){
//             slow = slow->next;
//             fast = fast->next->next;

//             if(slow == fast){
//                 slow = head;
            
//             while(slow != fast){
//                 slow = slow->next;
//                 fast = fast->next;
//             }
//             return fast;
//             }
//         }
//         return NULL;
//     }
// };