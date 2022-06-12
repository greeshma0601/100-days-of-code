class Solution {
public:
    int search(vector<int>& a, int target) {
        int n = a.size();
        
        int low = 0,high = n-1;
        
        int mid =(low+high)/2;
        
        while(low<=high)
        {
            
            if(a[mid] < target)
            {
                low = mid +1;
            }
            else if(a[mid]>target){
                high = mid -1;
            }
            else{
                return mid;
            }
            mid = (low+high)/2;
        }
        return -1;
    }
};
