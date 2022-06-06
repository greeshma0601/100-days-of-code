/*
https://practice.geeksforgeeks.org/problems/edit-distance3702/1#
https://www.youtube.com/watch?v=We3YDTzNXEk
*/
int editDistance(string s, string t) {
        // Code here
        int n = s.length();
        int m = t.length();
        
        int a[n+1][m+1];
        
        for(int i = 0;i<=m;i++)
            a[0][i]=i;
            
        for(int i=0;i<=n;i++)
            a[i][0]=i;
            
        for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
        {
            if(s[i-1] == t[j-1])
            {
                a[i][j]=a[i-1][j-1];
            }
            else{
                a[i][j] = 1 + min(a[i-1][j-1],min(a[i-1][j],a[i][j-1]));
            }
        }
        return a[n][m];
    }
    int min(int a,int b)
{
    if(a<b)return a;else return b;
}
