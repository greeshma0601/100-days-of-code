

/*
https://practice.geeksforgeeks.org/problems/split-a-circular-linked-list-into-two-halves/1#
*/
/* The structure of linked list is the following
struct Node
{
  int data;
  struct Node *next;
  
  Node(int x){
      data = x;
      next = NULL;
  }
};
*/

//  function which splits the circular linked list.  head is pointer
// to head Node of given lined list.  head1_ref1 and *head_ref2
// are pointers to head pointers of resultant two halves.
#include<cmath>
void splitList(Node *head, Node **head1_ref, Node **head2_ref)
{
    // your code goes here
    Node *s = head;
    Node *f = head->next;

    while(f->next!=head && f!=head)
    {
        s = s->next;
        f = f->next->next;
       
    }
    
    *head1_ref = head;
    *head2_ref = s->next;
    s->next = *head1_ref;
    
    Node* t=*head2_ref;
    
    while(t->next!=head)
    {
        t = t->next;
    }
    t->next = *head2_ref;
    
    
}
