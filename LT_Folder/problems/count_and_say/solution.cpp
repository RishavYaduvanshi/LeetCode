class Solution {
public:
    string countAndSay(int n) {
        
string ans="1";
    string temp="";
    int k=1;
    while(k++<n)
    {
        
        for(int j=0;j<ans.size();j++)
        {
            
            int c=1;
            char t=ans[j];
            for(int i=j+1;i<ans.size();i++)
            {
                if(ans[i]==t)
                {
                    c++;
                    j++;
                }
                else
                    break;
            }
            temp+=c+48;
            temp+=t;
        }
        ans.clear();
        ans=temp;
        temp.clear();  
    }
    return ans;
        
    }
};