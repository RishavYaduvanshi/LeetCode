class Solution {
public:
    vector<string> cellsInRange(string s) {
        
        int n1 = s[1]-48;
        int n2 = s[4]-48;
        char st = s[0];
        char end = s[3];
        int mx = max(n1,n2);
        int mn1 = min(n1,n2);
        int mn = mn1;
        vector<string>ans;
        while(st != end+1)
        {
            if(mn == mx+1)
            {
                mn = mn1;
                st++;
            }
            string t = st + to_string(mn);
            ans.push_back(t);
            mn++;
        }
        ans.pop_back();
        return ans;
        
        
        
    }
};