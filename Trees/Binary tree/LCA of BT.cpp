/*
https://practice.geeksforgeeks.org/problems/lowest-common-ancestor-in-a-binary-tree/1#
https://www.youtube.com/watch?v=F-_1sbnPbWQ&list=PLeIMaH7i8JDj7DnmO7lll97P1yZjMCpgY&index=28
*/


struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

class Solution
{
    public:
    //Function to return the lowest common ancestor in a Binary Tree.
    Node* lca(Node* root ,int n1 ,int n2 )
    {
       //Your code here 
       
       if(root == NULL)return root;
       
       if(root->data == n1 || root->data == n2)return root;
       
       Node* left = lca(root->left,n1,n2);
       Node* right = lca(root->right,n1,n2);
       
       if(left && right)return root;
       else return left?left:right;
    }
};
