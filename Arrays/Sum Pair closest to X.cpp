/*
https://www.geeksforgeeks.org/given-sorted-array-number-x-find-pair-array-whose-sum-closest-x/
https://practice.geeksforgeeks.org/problems/pair-in-array-whose-sum-is-closest-to-x1124/1/?page=1&curated[]=2&sortBy=submissions#
*/
class Solution{   
public:
    vector<int> sumClosest(vector<int>a, int x)
    {
        // code here
        vector<int>v;
        int n = a.size();
       int i = 0,j = n-1;
       int diff = INT_MAX;
       int n1,n2;
       while(i<j)
       {
           if(abs(a[i]+a[j]-x) <diff )
           {
               n1 = a[i];
               n2 = a[j];
               diff = abs(a[i]+a[j]-x);
               
           }
           
            if((a[i]+a[j]) >x)
               j--;
           
           else
               i++;
           
       }
        v.push_back(n1);
        v.push_back(n2);
        
        return v;
    }
};
