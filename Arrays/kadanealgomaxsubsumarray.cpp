/*
https://www.geeksforgeeks.org/largest-sum-contiguous-subarray/
https://www.youtube.com/watch?v=kekmCQXYwQ0
https://www.youtube.com/watch?v=86CQq3pKSUw

*/

    long long maxSubarraySum(int a[], int n){
        
        // Your code here
        int max_endinghere = 0;
        int max_sofar = a[0];
        for(int i=0;i<n;i++)
        {
            max_endinghere+=a[i];
            if(max_sofar<max_endinghere)
            {
                max_sofar = max_endinghere;
            }
            if(max_endinghere<0)
                max_endinghere = 0;
        }
        
        return max_sofar;
    }
