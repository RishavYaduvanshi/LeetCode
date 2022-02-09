class Solution {
public:
    string minWindow(string s, string t) {
        
        map<char,int>ta;
        for(char c:t)
            ta[c]++;
        
        map<char,int>mp;
        
        int have = 0;
        int need = t.size();
        int l = 0;
        
        map<char,int>win;
        
        vector<int>res(2,-1);
        int len = INT_MAX;
        
        for(int r=0; r<s.size(); r++)
        {
            char c = s[r];
            win[c]++;
            
            if(ta.find(c) != ta.end() and win[c] <= ta[c])
            {
                have++;
            }
            while(have == need)
            {
                if(r-l+1 < len)
                {
                    len = r-l+1;
                    res[0] = l;
                    res[1] = r;
                }
                if(ta.find(s[l]) != ta.end() and win[s[l]] <= ta[s[l]])
                    have--;
                win[s[l]]--;
                l++;
            }
        }
        
        string ans="";
        if(res[0]==-1)
            return ans;
        for(int i=res[0] ;i<= res[1] ;i++)
        {
            ans+=s[i];
        }
        return ans;
        
    }
};