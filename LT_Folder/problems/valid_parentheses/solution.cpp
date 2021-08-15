class Solution {
public:
    bool isValid(string s) {
        
        stack<char>st;
        
        char x;
        int n=s.size();
        
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(' or s[i]=='{' or s[i]=='[')
            {   
                st.push(s[i]);
                continue;
            }
            if(st.empty())
                return false;
            
            switch(s[i])
            {
                case ')':
                    x=st.top();
                    if(x=='(')
                        st.pop();
                    else
                        return false;
                    break;
                case ']':
                    x=st.top();
                    if(x=='[')
                        st.pop();
                    else
                        return false;
                    break;
                case '}':
                    x=st.top();
                    if(x=='{')
                        st.pop();
                    else
                        return false;
                    break;
            }
            
        }
        if(st.empty())
            return true;
        else 
            return false;
        
    }
};