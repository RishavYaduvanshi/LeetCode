class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        vector<int>ans;
        
        int n = digits.size();
        digits[n-1] = digits[n-1] + 1;
        
        for(int i = n - 1; i >= 0; i--){
            ans.push_back(digits[i] % 10);
            if(i != 0)
            digits[i - 1] += digits[i] / 10;
        }
      
        if(digits[0] / 10 > 0)
            ans.push_back(digits[0] / 10);
        reverse(ans.begin(), ans.end());
        return ans;
    }
};