/*
The diameter of a tree (sometimes called the width) is the number of nodes on the longest path between two end nodes. The diagram below shows two trees each with diameter nine, the leaves that form the ends of the longest path are shaded (note that there is more than one path in each tree of length nine, but no path longer than nine nodes). 

https://practice.geeksforgeeks.org/problems/diameter-of-binary-tree/1#
https://www.youtube.com/watch?v=ey7DYc9OANo
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
}; */

class Solution {
  public:
    // Function to return the diameter of a Binary Tree.
    int diameter(Node* root) {
        // Your code here
        if(root == NULL)return 0;
        
        int l = height(root->left);
        int r = height(root->right);
        int ldiameter = diameter(root->left);
        int rdiameter = diameter(root->right);
        
        return max(l+r+1,max(ldiameter,rdiameter));
    }
    
    int height(Node *node)
    {
        if(node == NULL)
        return 0;
        
        int l = height(node->left);
        int r = height(node -> right);
        
        return 1 + max(l,r);
    }
};
