https://www.geeksforgeeks.org/detect-loop-in-a-linked-list/
https://leetcode.com/problems/linked-list-cycle/submissions/
How does Floyd’s slow and fast pointers approach work?
https://www.geeksforgeeks.org/how-does-floyds-slow-and-fast-pointers-approach-work/

1)Brute force approach
Hashing Approach:

Traverse the list one by one and keep putting the node addresses in a Hash Table. At any point, if NULL is reached then return false, and if the next of the current nodes points to any of the previously stored nodes in  Hash then return true.
TC O(n)
SC O(n)

2)Floyd's algo 

TC O(n)
SC O(1)



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
    bool hasCycle(ListNode *head) {
        ListNode *fast,*slow;
        fast=head;
        slow=head;
        while(slow && fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow == fast)
            {
                return 1;
            }
        }
        return 0;
    }
};
