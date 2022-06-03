/*
https://practice.geeksforgeeks.org/problems/circular-linked-list/1
*/
/* Should return true if linked list is circular, else false */
bool isCircular(Node *head)
{
   // Your code here

   Node* temp = head->next;
   while(temp)
   {
       temp = temp->next;
       if(temp == head)return 1;
   }
   
   return 0;
   
   
}
