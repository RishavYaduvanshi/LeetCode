class Solution {
public:
    long long smallestNumber(long long num) {
        
        string inp = to_string(abs(num));
        long long  ans;
        if(num>=0)
        {
            sort(inp.begin(),inp.end());
            
            for(int i=0;i<inp.size();i++)
            {
                if(inp[i]=='0')
                    continue;
                else
                {
                    swap(inp[0],inp[i]);
                    break; 
                }
            }
            
            ans=stoll(inp);  
            return ans;
        }
        else
        {
            sort(inp.begin(),inp.end(),greater<>()); 
            ans=stoll(inp);
            return -ans;
        }
        
    }
};