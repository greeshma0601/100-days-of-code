/*
https://practice.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1/#
https://www.geeksforgeeks.org/maximum-and-minimum-in-an-array/
*/

pair<long long, long long> getMinMax(long long a[], int n) {
    pair<int,int> res;
    int max = a[0];
    int min = a[0];
    

    for(int i=0;i<n;i++)
    {
        if(max<a[i])
            max = a[i];
        if(min>a[i])
            min = a[i];
    }
    res.first = min;
    res.second = max;
    return res;
}
