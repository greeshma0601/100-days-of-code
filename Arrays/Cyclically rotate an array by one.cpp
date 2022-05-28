/*
https://practice.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1#
*/
//User function Template for C++

void rotate(int a[], int n)
{
    int x = a[n-1];
    for(int i=n-1;i>=1;i--)
    {
        a[i]=a[i-1];
    }
    a[0]=x;
}
