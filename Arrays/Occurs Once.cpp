You are given an array A of length N, where N is always an odd integer. There are (N-1)/2 elements in the array that occur twice and one element which occurs once. Your task is to find the only element that occurs once in the array.
Note: There are (N-1)/2+1 elements that are unique in the array.

https://www.codingninjas.com/codestudio/problems/occurs-once_1214969?leftPanelTab=0

int occursOnce(vector<int> &a, int n){
	// Write your code here.
	int ans=a[0];
	for(int i=1;i<n;i++)
	{
		ans^=a[i];
	}
	return ans;
}
