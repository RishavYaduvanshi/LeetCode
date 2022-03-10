class Solution {
public:
    int maxArea(vector<int>& a) {
        
        int i = 0;
        int j = a.size()-1;
        int ans = 0;
        while(i < j)
        {
            int t = min(a[i],a[j]) * (j-i);
            ans = max(ans,t);
            a[i] < a[j] ? i++:j--;
            
        }
        return ans;
        
        
    }
};  