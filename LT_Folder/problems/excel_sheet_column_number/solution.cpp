class Solution {
public:
    int titleToNumber(string columnTitle) {
        
        
        reverse(columnTitle.begin(), columnTitle.end());
        int ans = 0;
        
        for(int i = 0 ; i < columnTitle.size(); i++){
            int num = (int)columnTitle[i] - 'A'+1;
            ans += pow(26,i) * num;
        }
        
        return ans;
    }
};