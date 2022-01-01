class Solution {
    
    
public:
    int longestConsecutive(vector<int>& nums) {
        
        map<int,int>mp;
        
        for(int i:nums)
            mp[i]++;
        
        int ans=0;
        int fin_ans=0;
        int mn=INT_MAX;
        for(auto x:mp)
        {
            if(mp.find(x.first+1)!=mp.end())
                ans++;
            else
            {
                fin_ans=max(fin_ans,ans+1);
                ans=0;
            }
        }
        
        
        // for(int i=mn;i<=1000000000;i++)
        // {
        //     if(mp.find(i)==mp.end())
        //         break;
        //     ans++;
        // }
        return fin_ans;
            
        
        
        
    }
};