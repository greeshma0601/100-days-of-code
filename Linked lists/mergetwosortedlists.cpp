https://leetcode.com/problems/merge-two-sorted-lists/submissions/

https://www.youtube.com/watch?v=j_UNYW6Ap0k

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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *new_head,*sorting;
        new_head=NULL;
        if(list1 == NULL)return list2;
        if(list2 == NULL)return list1;
        
        if(list1 && list2)
        {
            if(list1->val <= list2->val)
            {
                sorting=list1;
                list1=sorting->next;
            }
            else{
                sorting=list2;
                list2=sorting->next;
            }
        }
        
        new_head=sorting;
        
        while(list1 && list2)
        {
            if(list1->val <= list2->val)
            {
                sorting->next=list1;
                sorting=list1;
                list1=sorting->next;
            }
            else{
                sorting->next=list2;
                sorting=list2;
                list2=sorting->next;
            }
        }
        if(list1 == NULL)sorting->next=list2;
        if(list2 == NULL)sorting->next=list1;
        
        return new_head;
    }
};
