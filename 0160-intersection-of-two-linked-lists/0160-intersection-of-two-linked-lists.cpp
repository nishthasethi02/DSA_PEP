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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        // 2 pointer Approach
        ListNode* pA = headA;
        ListNode* pB = headB;

        while(pA!= pB){
            if(pA == NULL){
                pA = headB;
            }
            else{
                pA = pA->next;
            }

            if(pB == NULL){
                pB = headA;
            }
            else{
                pB = pB->next;
            }
        }
        return pA;
    }
};

// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode(int x) : val(x), next(NULL) {}
//  * };
//  */
// class Solution {
// public:
//     int findLength(ListNode* head){
//         int length = 0;
//         ListNode* temp = head;
//         while(temp != NULL){
//             length++;
//             temp = temp->next;
//         }
//         return length;
//     }
//     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
//         //Length approach
//         int lenA = findLength(headA);
//         int lenB = findLength(headB);

//         ListNode* tempA = headA;
//         ListNode* tempB = headB;

//         int diffInLength = abs(lenA - lenB);

//         if(lenB > lenA){
//             while(diffInLength--){
//                 tempB = tempB->next;
//             }
//         }
//         else{
//             while(diffInLength--){
//                 tempA = tempA->next;
//             }
//         }
//         while(tempA != tempB){
//             tempA=tempA->next;
//             tempB=tempB->next;
//         }
//         return tempA;
//     }
// };