https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1
https://www.geeksforgeeks.org/sort-an-array-of-0s-1s-and-2s/
https://www.geeksforgeeks.org/sort-array-0s-1s-2s-simple-counting/
void sort012(int a[], int n)
    {
        // coode here 
        
        int low=0;
        int high=n-1;
        int mid = 0;
        
        while(mid<=high)
        {
            switch(a[mid])
            {
                case 0:
                swap(a[mid],a[low]);
                low++;mid++;
                break;
                
                case 1:
                mid++;
                break;
                
                case 2:
                swap(a[mid],a[high]);
                high--;
                break;
            }
            
        }
    }
