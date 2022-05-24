/*
https://leetcode.com/problems/best-time-to-buy-and-sell-stock/submissions/
https://www.youtube.com/watch?v=eMSfBgbiEjk&t=9s

Time complexity: O(n)

Space Complexity: O(1)


*/

int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int minele = INT_MAX;
        int maxprofit = 0;
        
        for(int i=0;i<n;i++)
        {
            minele = min(minele,prices[i]);
            maxprofit = max(maxprofit,prices[i]-minele);
        }
        return maxprofit;
        
    }
