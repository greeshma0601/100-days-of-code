/*
https://practice.geeksforgeeks.org/problems/quick-sort/1#
https://www.youtube.com/watch?v=7h1s2SojIRw
https://www.youtube.com/watch?v=-qOVVRIZzao
*/

    //Function to sort an array using quick sort algorithm.
    void quickSort(int a[], int low, int high)
    {
        // code here
        int pivot_index;
        
        if(low<high)
        {
            pivot_index=partition(a,low,high);
            quickSort(a,low,pivot_index-1);
            quickSort(a,pivot_index+1,high);
        }
    }
    
    public:
    int partition (int a[], int low, int high)
    {
       // Your code here
       int p=a[l];
       
       int i,j;
       
       i=low;j=high;
       
       while(i<j)
       {
           while(a[i]<=p)
           i++;
           
           while(a[j]>p)
           j--;
           
           if(i<j)
           swap(a[i],swap[j]);
       }
       
       swap(a[l],a[j]);
       return j;
    }
