class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int ans=0;
        int dif=INT_MAX;
        for(int i:prices)
        {
            dif=min(dif,i);
            ans=max(ans,i-dif);
        }
        return ans;
        
    }
};