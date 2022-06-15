/*
https://practice.geeksforgeeks.org/problems/wave-array-1587115621/1/?page=1&curated[]=8&sortBy=submissions#
*/
void convertToWave(int n, vector<int>& a){
        
        // Your code here
        int i = 0,j = 1;
        while(i<n && j<n)
        {
            swap(a[i],a[j]);
            i+=2;
            j+=2;
        }
       
