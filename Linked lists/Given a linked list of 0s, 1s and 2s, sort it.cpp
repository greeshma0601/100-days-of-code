/*
https://practice.geeksforgeeks.org/problems/given-a-linked-list-of-0s-1s-and-2s-sort-it/1#
*/
class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        // Add code here
        
        int c0 = 0;
        int c1 = 0;
        int c2 = 0;
        
        Node* temp = head;
        while(temp)
        {
            if(temp->data == 0)
             c0++;
             else if(temp->data == 1)
             c1++;
             else
             c2++;
             
        temp = temp->next;
        }
        Node *t = head;
        
       while(c0--)
        {
            t->data = 0;
            t = t->next;
        }
        while(c1--)
        {
            t->data = 1;
            t = t->next;
        }
        while(c2--)
        {
            t->data = 2;
            t = t->next;
        }
        return head;
    }
};
