/*
https://www.geeksforgeeks.org/move-negative-numbers-beginning-positive-end-constant-extra-space/
changes order 
https://practice.geeksforgeeks.org/problems/move-all-negative-elements-to-end1813/1#
Time complexity: O(N) 
Auxiliary Space: O(1)



*/
// Using Dutch National Flag Algorithm.
void reArrange(int arr[],int n){
      int low =0,high = n-1;
      while(low<high){
      if(arr[low]<0){
          low++;
      }else if(arr[high]>0){
          high--;
      }else{
        swap(arr[low],arr[high]);
      }
    }
}
