class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int ans = INT_MIN;
        int cur_min = INT_MAX;
        
        for(int i : prices){
            cur_min = min(cur_min, i);
            ans = max(ans, i - cur_min);
        }
        return ans;
    }
};