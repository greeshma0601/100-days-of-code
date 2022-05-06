https://www.geeksforgeeks.org/merge-sort/
TC O(N LOG N)
 SC O(N)

	
class Solution{
	public:
 void merge(int a[], int l, int m, int r)
    {
         // Your code here
         int n1,n2;
         int i,j,k;
         
         n1=m-l+1;
         n2=r-m;
         
         int L[n1],R[n2];
         
         for(i=0;i<n1;i++)
            L[i]=a[i+l];
            
         for(j=0;j<n2;j++)
            R[j]=a[j+m+1];
            
        i=0;j=0;k=l;
        
        while(i<n1 && j<n2)
        {
            if(L[i]<=R[j])
            {
                a[k]=L[i];
                i++;
            }
            else{
                a[k]=R[j];
                j++;
            }
            k++;
        }
        
        while(i<n1)
        {
            a[k]=L[i];
            i++;
            k++;
        }
        
        while(j<n2)
        {
            a[k]=R[j];
            k++;j++;
        }
      
    }
    public:
    void mergeSort(int a[], int l, int r)
    {
        //code here
        
                if(l<r){
                int m = l+(r-l)/2;
                mergeSort(a,l,m);
                mergeSort(a,m+1,r);
                merge(a,l,m,r);
        }
}

};
