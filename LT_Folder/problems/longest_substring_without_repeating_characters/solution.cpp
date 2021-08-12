class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int n=s.size();
        int i=0,j=0;
        int ans=0;
        set<char>st;
        
        while(j<n)
        {
            st.insert(s[j]);
            
            if(j-i+1==st.size())
            {
                if(st.size()>ans)
                    ans=st.size();
                j++;
            }
            else if(j-i+1>st.size())
            {
                if(st.size()>ans)
                    ans=st.size();
                st.erase(s[i]);
                i++;
            }
            
        }
        return ans;
        
    }
};