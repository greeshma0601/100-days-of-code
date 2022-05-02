Please See : How does Floyd’s slow and fast pointers approach work?
https://www.geeksforgeeks.org/how-does-floyds-slow-and-fast-pointers-approach-work/
https://www.youtube.com/watch?v=Aup0kOWoMVg 



https://leetcode.com/problems/middle-of-the-linked-list/
https://www.youtube.com/watch?v=vxVqi9Q54Dc
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
    ListNode* reverseList(ListNode* head) {
        ListNode *next,*current,*prev;
        prev=NULL;
        current=head;
        while(current != NULL)
        {
            next=current->next;
            current->next=prev;
            prev=current;
            current=next;
        }
        head=prev;
        return head;
    }
};
