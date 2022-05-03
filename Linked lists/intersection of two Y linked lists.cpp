https://www.geeksforgeeks.org/write-a-function-to-get-the-intersection-point-of-two-linked-lists/
https://leetcode.com/problems/intersection-of-two-linked-lists/
https://www.youtube.com/watch?v=u4FWXfgS8jw

Method 1(Simply use two loops) 
Use 2 nested for loops. The outer loop will be for each node of the 1st list and inner loop will be for 2nd list. In the inner loop, check if any of nodes of the 2nd list is same as the current node of the first linked list. The time complexity of this method will be O(M * N) where m and n are the numbers of nodes in two lists.


Optimal 1:
Method 3(Using difference of node counts) 

Get count of the nodes in the first list, let count be c1.
Get count of the nodes in the second list, let count be c2.
Get the difference of counts d = abs(c1 – c2)
Now traverse the bigger list from the first node till d nodes so that from here onwards both the lists have equal no of nodes
Then we can traverse both the lists in parallel till we come across a common node. (Note that getting a common node is done by comparing the address of the nodes)

int find_length(node *start)
{
	int cnt = 0;
	node *p;
	p = start;
	while(p!=NULL)
	{
		cnt++;
		p = p->next;
	}

return cnt;
}
node *find_intersection(node *p , node *q)
{
	node *larger , *smaller;
	int m , n , d , cnt;
	m = find_length(p);   //calculate length
	n = find_length(q);
	
	d = m-n;  //find difference
	if(d < 0)  //find absolute value
	{
		d = d * -1;
	}
	
	if(m > n) //   find larger length linked list
		{
			larger = p;
			smaller = q;
		}
	else
		{
			larger = q;
			smaller = p;
		}
		
	cnt = 0;
	while(cnt < d)    // move d nodes in larger linked list
	{
		larger = larger->next;
		cnt++;
	}
	
	while(larger != smaller)   // then move one step each in both linked lists
	{
		larger = larger->next;
		smaller= smaller->next;
	}
	
	return larger;   // this is the intersection
	
}

Optimal 2:
2-pointer technique
Using Two pointers : 

1.Initialize two pointers ptr1 and ptr2  at the head1 and  head2.
2.Traverse through the lists,one node at a time.
3.When ptr1 reaches the end of a list, then redirect it to the head2.
4.similarly when ptr2 reaches the end of a list, redirect it the head1.
5.Once both of them go through reassigning, they will be equidistant from 
 the collision point
6.If at any node ptr1 meets ptr2, then it is the intersection node.
7.After second iteration if there is no intersection node it returns NULL.
  
  
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
            
       
       ListNode *a = headA;
       ListNode *b = headB;
        
        if(a == NULL || b == NULL)
           return NULL;
      
        while(a != b){
        
           
            a = a->next;
            b = b->next;
            
             if(a == b){return a;}
            if(a == NULL){a = headB;}
            if(b == NULL){b = headA;}
            
            
        }
        
        return a;
    }
};

