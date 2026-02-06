// https://leetcode.com/problems/middle-of-the-linked-list/

// https://leetcode.com/problems/reverse-linked-list/

// https://leetcode.com/problems/palindrome-linked-list/description/

// https://leetcode.com/problems/remove-duplicates-from-sorted-list/

// https://www.geeksforgeeks.org/problems/insert-in-a-sorted-list/1

// https://leetcode.com/problems/intersection-of-two-linked-lists/description/

// https://leetcode.com/problems/linked-list-cycle/
// -> Floyd Loop Detection Algorithm

// https://leetcode.com/problems/linked-list-cycle-ii/description/

// https://leetcode.com/problems/odd-even-linked-list/description/

// https://leetcode.com/problems/remove-nth-node-from-end-of-list/

// https://leetcode.com/problems/partition-list/submissions/1909036714/

// https://www.geeksforgeeks.org/problems/given-a-linked-list-of-0s-1s-and-2s-sort-it/1
// Count approach 

// reverse in k groups
// https://leetcode.com/problems/reverse-nodes-in-k-group/
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        //count k nodes
        ListNode* curr = head;
        int count = 0;
        while(curr != NULL && count != k){ // count != k because we need to check if we have k nodes
            curr = curr->next;
            count++;
        }
        if(count == k){
            //reverse k nodes
            curr = reverseKGroup(curr, k); //reverse rest of the list
            
            //reverse current k nodes
            while(count > 0){
                ListNode* nextNode = head->next;
                head->next = curr;
                curr = head;
                head = nextNode;
                count--;
            }
            head = curr;
        }
    }
};