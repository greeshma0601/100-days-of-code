/*
https://www.youtube.com/watch?v=-DtNInqFUXs

https://leetcode.com/problems/palindrome-linked-list/

Bruter force approach:
1.Store all val in array or string and check for palindrome

TC O(n)
SC O(n)

2.Optimized approach

1.Split the linked list in the middle.
2. Prepare two linked lists.
3. If odd,ignore the middle node.
4. Reverse the second linked list
5. Compare the two linked lists.

TC O(n)  and SC O(1)


 */      
       
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
    bool isPalindrome(ListNode* head) {
        
        if(head == NULL || head->next == NULL)
            return true;
        
        
        ListNode *s,*f;
        s=head;
        f=head;
        
        while( f->next && f->next->next )
        {
            s=s->next;
            f=f->next->next;
        }
        
        s->next=reverselist(s->next);
        s=s->next;
        
        while(s)
        {
            if(head->val != s->val)
                return false;
            s=s->next;
            head=head->next;
        }
        
        return true;
        
    }
    
    ListNode* reverselist(ListNode* head)
    {
        ListNode *curr,*prev,*next;
        curr=head;
        prev=NULL;
        
        while(curr!=NULL)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
};
