class Solution {
public:
    bool isValid(string s) {
        
        stack<char>st;
        int n = s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='[' or s[i]=='(' or s[i]=='{' )
            {
                st.push(s[i]);
                continue;
            } 
            if(st.empty())
                return false;
            else
            {
                char t = st.top();
                
                switch(t)
                {
                    case '(':   if(s[i]!=')')
                                    return false;
                                else
                                    break;
                                    
                    case '[':   if(s[i]!=']')
                                    return false;
                                else
                                    break;
                    case '{':   if(s[i]!='}')
                                    return false;
                                else
                                    break;
                }
                st.pop();
            }
           
        }
        if(st.empty())
        return true;
        else 
            return false;
    }
};