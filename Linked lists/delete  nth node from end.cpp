
https://www.geeksforgeeks.org/delete-nth-node-from-the-end-of-the-given-linked-list/

https://leetcode.com/problems/remove-nth-node-from-end-of-list/

1st approach:

TC O(N) + O(N) = O(2N)
SC O(1)

Intuition:

Lets  K be the total nodes in the linked list.

Observation : The Nth node from the end is (K-N+1)th node from the beginning.

So the problem simplifies down to that we have to find  (K-N+1)th node from the beginning.

One way of doing it is to find the length (K) of the linked list in one pass and then in the second pass move (K-N+1) step from the beginning to reach the Nth node from the end.
To do it in one pass. Let’s take the first pointer and move N step from the beginning. Now the first pointer is (K-N+1) steps away from the last node, which is the same number of steps the second pointer require to move from the beginning to reach the Nth node from the end.
Approach:  


2ND APPROACH 
Take two pointers; the first will point to the head of the linked list and the second will point to the Nth node from the beginning.
Now keep incrementing both the pointers by one at the same time until the second is pointing to the last node of the linked list.
After the operations from the previous step, the first pointer should point to the Nth node from the end now. So, delete the node the first pointer is pointing to.

Two Pointer Approach – Slow and Fast Pointers

This problem can be solved by using two pointer approach as below:

Take two pointers – fast and slow. And initialize their values as head node
Iterate fast pointer till the value of n.
Now, start iteration of fast pointer till the None value of the linked list. Also, iterate slow pointer.
Hence, once the fast pointer will reach to the end the slow pointer will reach the node which you want to delete.
Replace the next node of the slow pointer with the next to next node of the slow pointer.


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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* start = new ListNode();
        start->next = head;
        
        ListNode* slow = head;
        ListNode *fast = head;
        
        for(int i=1;i<=n;i++)
        {
            fast = fast->next;
        }
        
        if(fast == NULL)return head-> next;//if 1st node needs to be deleted
        
        while(fast->next)
        {
            fast = fast->next;
            slow=slow->next;
        }
        
        slow->next =slow->next->next;
        
        return start->next;
    }
};
