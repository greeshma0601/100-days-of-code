/*
https://practice.geeksforgeeks.org/problems/top-view-of-binary-tree/1
https://takeuforward.org/data-structure/top-view-of-a-binary-tree/
https://www.youtube.com/watch?v=Et9OCDNvJ78

TC and SC O(n)
*/    

vector<int> topView(Node *root)
    {
        //Your code here
        vector<int>ans;
        map<int,int>mp;
        queue<pair<Node*,int>>q;
        
        q.push({root,0});
        
        while(!q.empty())
        {
            auto it = q.front();
            q.pop();
            
            Node* node = it.first;
            int line = it.second;
            
            if(mp.find(line) == mp.end())
                mp[line] = node->data;
                
            if(node->left)
                q.push({node->left,line-1});
                
             if(node->right)
                q.push({node->right,line+1});
                
        }
        for(auto it:mp)
        {
            ans.push_back(it.second);
        }
        return ans;
    }
