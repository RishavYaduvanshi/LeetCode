class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n=prices.size();
        int ans=0;
//         vector<int>maxarr(n);
//         int m=prices[n-1];
//         for(int i=n-1;i>=0;i--)
//         {
//             m=max(m,prices[i]);
//             maxarr[i]=m;
//         }
        
//         for(int i=0;i<n;i++)
//             ans=max(maxarr[i]-prices[i],ans);
        int min_sofar=prices[0];
        for(int i=0;i<n;i++)
        {
            min_sofar=min(min_sofar,prices[i]);
            int profit= prices[i]-min_sofar;
            ans=max(ans,profit);
        }
        return ans;
    }
};