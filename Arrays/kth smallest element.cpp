
/*
Problem = https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1#
https://www.geeksforgeeks.org/kth-smallestlargest-element-unsorted-array/

https://www.youtube.com/watch?v=beLy-8sjhS4
*/

1.using sorting:

tc => using merge sort => O(nlogn)
  
 int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        
        sort(arr,arr+r);
        return arr[k-1];
    }

2.Using min /max heap (priority queue)
  
  O(n  log k)
  
  
   int kthSmallest(int a[], int l, int r, int k) {
        //code here
        priority_queue<int,vector<int>,greater<int>> p;
        
        for(int i=0;i<=r;i++)
        {
            p.push(a[i]);
        }
        int ans;
        int j = 1;
        while(!p.empty())
        {
            if (j == k)
            {
                ans = p.top();
                break;
            }
            p.pop();
            j++;
        }
        return ans;
    }
  
