class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        
        map<int,int>mp;
        map<int,int>mp1;
        vector<int>lo;
        vector<int>win;
        for(auto x:matches){
            mp[x[1]]++;
            mp1[x[0]]++;
        }
        for(auto x:mp){
            if(x.second == 1)
            lo.push_back(x.first);
        }
        for(auto x:mp1){
            if(mp.find(x.first)== mp.end())
               win.push_back(x.first) ;
        }
        vector<vector<int>>ans;
        ans.push_back(win);
        ans.push_back(lo);
        return ans;
        
    }
};