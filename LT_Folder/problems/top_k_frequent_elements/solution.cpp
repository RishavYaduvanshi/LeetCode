class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        map<int,int> mp;
        for(int i :nums)
            mp[i]++;
        multimap<int,int>mmp;
        for(auto x : mp){
            mmp.insert({x.second,x.first}); 
        }
        // for(auto x : mmp)
        //     cout<<x.first<<" "<<x.second<<endl;
        
        auto i = mmp.rbegin();
        for(int j = 1; j <= k; j++)
            ans.push_back(i++->second);
    
       
        return ans;
    }
};