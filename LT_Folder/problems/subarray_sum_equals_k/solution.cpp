class Solution {
public:
    int subarraySum(vector<int>& a, int k) {
        
        int ans=0;
        int diff;
        
        unordered_map<int,int>mp;
        // mp[0]=1;
        int s=0;
        for(int i:a){
            s+=i;
            diff = s-k;
            if(mp.find(diff) != mp.end())
                ans += mp[s-k];
            if(s==k)
                ans++;
            mp[s]++;
        }
    
        return ans;
       
    }
};