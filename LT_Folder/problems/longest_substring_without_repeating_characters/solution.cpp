class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        set<int> st;
        int i=0,j=0;
        int ans = 0;
        
        while(j < s.size())
        {
            st.insert(s[j]);
            
            if(j-i+1 == st.size())
            {
                ans = max(ans, j-i+1);
                j++;
            }
            else if(j-i+1 > st.size())
            {
                ans = max(ans,(int)st.size());
                st.erase(s[i]);
                i++;
            }
        }
        
        return ans;
        
    }
};