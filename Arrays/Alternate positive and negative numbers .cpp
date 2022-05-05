https://practice.geeksforgeeks.org/problems/array-of-alternate-ve-and-ve-nos1401/1#

1)without changing order:

TC O(N)
  SC O(N)
class Solution{
public:

	void rearrange(int a[], int n) {
	    // code here
	    
	    vector<int>v1;
	    vector<int>v2;
	    for(int i= 0;i<n;i++)
	    {
	        if(a[i]>=0){
	            v1.push_back(a[i]);
	        }
	        else{
	            v2.push_back(a[i]);
	        }
	    }
	     
	     int k1,k2;
	     k1 = v1.size();
	     k2 = v2.size();
	     
	     int i=0,j=0,k=0;
	     
	     while(i<k1 && j<k2)
	     {
	         if(k%2 == 0)
	         {
	             a[k] = v1[i];
	             i++;k++;
	         }
	         else{
	             a[k] = v2[j];
	             j++;k++;
	         }
	     }
        
        while(i<k1)
        {
            a[k]=v1[i];
            k++;i++;
        }
        
        while(j<k2)
        {
            a[k]=v2[j];
            k++;j++;
        }
	     
	     
	}
};


2)with changing order 
https://www.geeksforgeeks.org/rearrange-array-in-alternating-positive-negative-items-with-o1-extra-space-set-2/
https://www.youtube.com/watch?v=zUPMACE0uBs&t=301s

If we are allowed to change order of appearance, we can solve this problem in O(n) time and O(1) space.
The idea is to process the array and shift all negative values to the end in O(n) time. After all negative values are shifted to the end, we can easily rearrange array in alternating positive & negative items. We basically swap next positive element at even position from next negative element in this step. 
optimized

TC O(N)
  SC O(1)

  // Function to rearrange positive and negative
// integers in alternate fashion. The below
// solution doesn't maintain original order of
// elements
void rearrange(int arr[], int n)
{
    int i = 0, j = n-1;
 
    // shift all negative values to the end
    while (i < j) {
        while (i <= n - 1 and arr[i] > 0)
            i += 1;
        while (j >= 0 and arr[j] < 0)
            j -= 1;
        if (i < j )
            swap(arr[i], arr[j]);
    }
 
    // i has index of leftmost
    // negative element
    if (i == 0 || i == n)
        return;
 
    // start with first positive
    // element at index 0
 
    // Rearrange array in alternating
    // positive &
    // negative items
    int k = 0;
    while (k < n && i < n ) {
        // swap next positive
        // element at even position
        // from next negative element.
        swap(arr[k], arr[i]);
        i = i + 1;
        k = k + 2;
    }
}
 
