/*
https://practice.geeksforgeeks.org/problems/reverse-level-order-traversal/1#

https://www.youtube.com/watch?v=D2bIbWGgvzI

TC AND SC => O(N)
*/

/*   
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */
vector<int> reverseLevelOrder(Node *root)
{
    // code here
    
       vector<int>v;
       stack<int>s; 
        queue<Node*>q;
        
       q.push(root);
        
        while(!q.empty())
    {
        Node *n = q.front();
        
        q.pop();
        
        s.push(n->data);
        
        
        
        if(n->right)
        q.push(n->right);
        
        if(n->left)
        q.push(n->left);
    
    }
    
    while(!s.empty())
    {
        v.push_back(s.top());
        s.pop();
    }
    
    return v;
}
