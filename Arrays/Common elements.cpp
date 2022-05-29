/*
https://practice.geeksforgeeks.org/problems/common-elements1132/1#
*/     

vector <int> commonElements (int a[], int b[], int c[], int n1, int n2, int n3)
        {
            //code here.
            
            vector<int>v;
            unordered_set<int>s1,s2,s3;
            
            for(int i=0;i<n1;i++)
            {
                s1.insert(a[i]);
            }
            
            for(int i=0;i<n2;i++)
            {
                 if(s1.find(b[i])!=s1.end())
                s2.insert(b[i]);
            }
            
            for(int i=0;i<n3;i++)
            {
                if(s2.find(c[i])!=s2.end())
                {
                    if(s3.find(c[i])==s3.end())
                    {
                        v.push_back(c[i]);
                        s3.insert(c[i]);
                    }
                }
            }
            if(v.size() == 0){
                v.push_back(-1);return v;
            }
            return v;
        }
